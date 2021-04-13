import sys
sys.path.append("../../../build_tools/scripts")
import base
import os

base.configure_common_apps()

# remove previous version
if base.is_dir("./deploy"):
    base.delete_dir("./deploy")
base.create_dir("./deploy")

# fetch emsdk
command_prefix = "" if ("windows" == base.host_platform()) else "./"
if not base.is_dir("emsdk"):
    base.cmd("git", ["clone", "https://github.com/emscripten-core/emsdk.git"])
    os.chdir("emsdk")
    base.cmd(command_prefix + "emsdk", ["install", "latest"])
    base.cmd(command_prefix + "emsdk", ["activate", "latest"])
    os.chdir("../")


# compile
compiler_flags = ["-o zlib.js",
                  "-O3",
                  "-fno-rtti",
                  "-s WASM=1",
                  "-s ALLOW_MEMORY_GROWTH=1",
                  "-s FILESYSTEM=0",
                  "-s ENVIRONMENT='web,worker'"]
                  #"-s LLD_REPORT_UNDEFINED"]

exported_functions = ["_malloc",
                      "_free",
                      "_Zlib_Malloc",
                      "_Zlib_Free",
                      "_Zlib_Create",
                      "_Zlib_Load",
                      "_Zlib_Destroy",
                      "_Zlib_GetNumberPaths",
                      "_Zlib_GetPaths",
                      "_Zlib_GetSizeFileByPath",
                      "_Zlib_GetLastFileByPath"]

libZlib_src_path = "../src/zlib-1.2.11"
input_zlib_sources = ["inflate.c", "zutil.c", "adler32.c", "crc32.c", "inftrees.c",
                      "inffast.c"]

libMinizip_src_path = "../src/zlib-1.2.11/contrib/minizip"
input_minizip_sources = ["unzip.c", "ioapi.c"]

sources = []
for item in input_zlib_sources:
    sources.append(libZlib_src_path + '/' + item)
for item in input_minizip_sources:
    sources.append(libMinizip_src_path + '/' + item)
sources.append("wasm/src/ioapibuf.c")
sources.append("wasm/src/base.cpp")

compiler_flags.append("-I../src/zlib-1.2.11")
compiler_flags.append("-D__linux__")

# arguments
arguments = ""
for item in compiler_flags:
    arguments += (item + " ")

arguments += "-s EXPORTED_FUNCTIONS=\"["
for item in exported_functions:
    arguments += ("'" + item + "',")
arguments = arguments[:-1]
arguments += "]\" "
for item in sources:
    arguments += (item + " ")

# command
windows_bat = []
if base.host_platform() == "windows":
    windows_bat.append("call emsdk/emsdk_env.bat")    
    windows_bat.append("call emcc " + arguments)
else:
    windows_bat.append("#!/bin/bash")
    windows_bat.append("source ./emsdk/emsdk_env.sh")
    windows_bat.append("emcc " + arguments)
base.run_as_bat(windows_bat)

# finalize
base.replaceInFile("./zlib.js", "__ATPOSTRUN__=[];", "__ATPOSTRUN__=[function(){self.onEngineInit();}];")
base.replaceInFile("./zlib.js", "function getBinaryPromise(){", "function getBinaryPromise2(){")

zlib_js_content = base.readFile("./zlib.js")
engine_base_js_content = base.readFile("./wasm/js/zlib.js")
engine_js_content = engine_base_js_content.replace("//module", zlib_js_content)

# write new version
base.writeFile("./deploy/zlib.js", engine_js_content)
base.copy_file("./zlib.wasm", "./deploy/zlib.wasm")
base.copy_file("./wasm/js/index.html", "./deploy/index.html")
base.copy_file("./wasm/js/code.js", "./deploy/code.js")

base.delete_file("zlib.js")
base.delete_file("zlib.wasm")
