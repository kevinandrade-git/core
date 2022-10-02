#include "header.h"
#include "cfexception.h"
#include "streamrw.h"

using namespace CFCPP;

Header::Header() :
    Header(3)
{

}

Header::Header(ushort version)
{
    switch (version)
    {
    case 3:
        majorVersion = 3;
        sectorShift = 0x0009;
        break;

    case 4:
        majorVersion = 4;
        sectorShift = 0x000C;
        break;

    default:
        throw CFException("Invalid Compound File Format version");


    }

    for (int i = 0; i < 109; i++)
    {
        difat[i] = Sector::FREESECT;
    }
}

void Header::Write(CFCPP::Stream &stream)
{
    StreamRW rw(stream);
    rw.WriteArray(headerSignature, sizeof(headerSignature));
    rw.WriteArray(clsid, sizeof(clsid));
    rw.Write(minorVersion);
    rw.Write(majorVersion);
    rw.Write(byteOrder);
    rw.Write(sectorShift);
    rw.Write(miniSectorShift);
    rw.WriteArray(unUsed, sizeof(unUsed));
    rw.Write(directorySectorsNumber);
    rw.Write(fatSectorsNumber);
    rw.Write(firstDirectorySectorID);
    rw.Write(unUsed2);
    rw.Write(minSizeStandardStream);
    rw.Write(firstMiniFATSectorID);
    rw.Write(miniFATSectorsNumber);
    rw.Write(firstDIFATSectorID);
    rw.Write(difatSectorsNumber);

    for (int i : difat)
    {
        rw.Write(i);
    }

    if (majorVersion == 4)
    {
        std::vector<BYTE> zeroHead(3584,0);
        rw.WriteArray(zeroHead.data(), zeroHead.size());
    }
}

void Header::Read(CFCPP::Stream &stream)
{
    StreamRW rw(stream);

    rw.ReadArray(headerSignature, sizeof(headerSignature));
    CheckSignature();
    rw.ReadArray(clsid, sizeof(clsid));
    minorVersion = rw.Read<decltype(minorVersion)>();
    majorVersion = rw.Read<decltype(majorVersion)>();
    CheckVersion();
    byteOrder = rw.Read<decltype(majorVersion)>();
    sectorShift = rw.Read<decltype(majorVersion)>();
    miniSectorShift = rw.Read<decltype(majorVersion)>();
    rw.ReadArray(unUsed, sizeof (unUsed));
    directorySectorsNumber = rw.Read<decltype(directorySectorsNumber)>();
    fatSectorsNumber = rw.Read<decltype(fatSectorsNumber)>();
    firstDirectorySectorID = rw.Read<decltype(firstDirectorySectorID)>();
    unUsed2 = rw.Read<decltype(unUsed2)>();
    minSizeStandardStream = rw.Read<decltype(minSizeStandardStream)>();
    firstMiniFATSectorID = rw.Read<decltype(firstMiniFATSectorID)>();
    miniFATSectorsNumber = rw.Read<decltype(miniFATSectorsNumber)>();
    firstDIFATSectorID = rw.Read<decltype(firstDIFATSectorID)>();
    difatSectorsNumber = rw.Read<decltype(difatSectorsNumber)>();

    for (int i = 0; i < 109; i++)
    {
        difat[i] = rw.Read<int>();
    }
}

void Header::CheckVersion() const
{
    if (majorVersion != 3 && majorVersion != 4)
        throw CFFileFormatException("Unsupported Binary File Format version: OpenMcdf only supports Compound Files with major version equal to 3 or 4 ");
}

void Header::CheckSignature() const
{
    std::array<BYTE,8> OLE_CFS_SIGNATURE{ 0xD0, 0xCF, 0x11, 0xE0, 0xA1, 0xB1, 0x1A, 0xE1 };
    for (size_t i = 0; i < sizeof(headerSignature); i++)
    {
        if (headerSignature[i] != OLE_CFS_SIGNATURE[i])
            throw CFFileFormatException("Invalid OLE structured storage file");
    }
}