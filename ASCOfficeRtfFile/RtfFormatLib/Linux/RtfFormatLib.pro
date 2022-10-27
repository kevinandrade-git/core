#-------------------------------------------------
#
# Project created by QtCreator 2015-04-15T14:10:45
#
#-------------------------------------------------

QT       -= core gui

TARGET = RtfFormatLib
TEMPLATE = lib
CONFIG += staticlib

CORE_ROOT_DIR = $$PWD/../../..
PWD_ROOT_DIR = $$PWD

CONFIG += core_x2t
include(../../../Common/base.pri)

#BOOST
include($$PWD/../../../Common/3dParty/boost/boost.pri)

DEFINES += UNICODE _UNICODE \
        DONT_WRITE_EMBEDDED_FONTS \
        AVS_USE_CONVERT_PPTX_TOCUSTOM_VML

core_mac {
LIBS += $$DESTDIR -lUnicodeConverter
}

# Use Precompiled headers (PCH)
#use_pch {
CONFIG += precompile_header
PRECOMPILED_HEADER = precompiled.h
HEADERS += precompiled.h
#}

core_release {
SOURCES += \
    rtfformatlib_source.cpp
}
core_debug {
SOURCES += \
    ../source/RtfBookmark.cpp \
    ../source/RtfChar.cpp \
    ../source/RtfDocument.cpp \
    ../source/RtfGlobalTables.cpp \
    ../source/RtfOldList.cpp \
    ../source/RtfPicture.cpp \
    ../source/RtfOle.cpp \
    ../source/RtfField.cpp \
    ../source/RtfParagraph.cpp \
    ../source/RtfProperty.cpp \
    ../source/RtfReader.cpp \
    ../source/RtfSection.cpp \
    ../source/RtfShape.cpp \
    ../source/RtfWriter.cpp \
    ../source/RtfMath.cpp \
    ../source/Reader/OOXMathReader.cpp \
    ../source/Reader/OOXDrawingGraphicReader.cpp \
    ../source/Reader/OOXHeaderReader.cpp \
    ../source/Reader/OOXParagraphElementReaders.cpp \
    ../source/Reader/OOXReader.cpp \
    ../source/Reader/OOXShapeReader.cpp \
    ../source/Reader/OOXTableReader.cpp \
    ../source/Writer/OOXDocumentWriter.cpp \
    ../source/Writer/OOXWriter.cpp
}

SOURCES += \
    ../source/DestinationCommand.cpp \
    ../source/ConvertationManager.cpp \
    ../../../Common/DocxFormat/Source/Base/Nullable.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/SimpleType.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Double.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/DecimalNumber.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Point.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Inch.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Emu.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/UniversalMeasure.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/UniversalMeasureOrPercent.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Shared/TrueFalse.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Shared/ColorType.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Shared/OnOff.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Shared/Bool.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Shared/XAlign.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Shared/YAlign.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/Border.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/NumberFormat.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/DocPartGallery.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/HpsMeasure.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/SignedHpsMeasure.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/SignedTwipsMeasure.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/LongHexNumber.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/PointMeasure.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/DateTime.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/ThemeColor.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/HighlightColor.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/FontCharset.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/WmlColorSchemeIndex.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/FtnEdn.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Word/FtnPos.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/PresetColorVal.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/ShapeType.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/SystemColorVal.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/ConstraintType.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/TextShapeType.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/ParameterId.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/Coordinate.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/PresetPatternVal.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/PresetCameraType.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/AlignH.cpp \
    ../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/AlignV.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/OnOff.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/OnOff2.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/String.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/Color.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/Fonts.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/LongHexNumber.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/DecimalNumber.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/DecimalNumberWord.cpp \
    ../../../Common/DocxFormat/Source/Common/ComplexTypes/UnsignedDecimalNumber.cpp \

HEADERS += \
    ../source/Basic.h \
    ../source/ConvertationManager.h \
    ../source/DestinationCommand.h \
    ../source/IdGenerator.h \
    ../source/OOXColorTable.h \
    ../source/RtfBookmark.h \
    ../source/RtfChar.h \
    ../source/RtfDefine.h \
    ../source/RtfDocument.h \
    ../source/RtfErrors.h \
    ../source/RtfField.h \
    ../source/RtfGlobalTables.h \
    ../source/RtfLex.h \
    ../source/RtfMath.h \
    ../source/RtfOle.h \
    ../source/RtfParagraph.h \
    ../source/RtfPicture.h \
    ../source/RtfProperty.h \
    ../source/RtfReader.h \
    ../source/RtfSection.h \
    ../source/RtfShape.h \
    ../source/RtfTable.h \
    ../source/RtfTableCell.h \
    ../source/RtfTableRow.h \
    ../source/RtfToken.h \
    ../source/RtfWriter.h \
    ../source/UniversalConverterUtils.h \
    ../source/Utils.h \
    ../source/Reader/OOXAbstractNumReader.h \
    ../source/Reader/OOXAppReader.h \
    ../source/Reader/OOXBorderReader.h \
    ../source/Reader/OOXcnfStyleReader.h \
    ../source/Reader/OOXColorReader.h \
    ../source/Reader/OOXColorReader2.h \
    ../source/Reader/OOXColorSchemeReader.h \
    ../source/Reader/OOXContentTypeReader.h \
    ../source/Reader/OOXCoreReader.h \
    ../source/Reader/OOXDocDefaultsReader.h \
    ../source/Reader/OOXDocumentReader.h \
    ../source/Reader/OOXFontReader.h \
    ../source/Reader/OOXFontSchemeReader.h \
    ../source/Reader/OOXFontTableReader.h \
    ../source/Reader/OOXFootnotesReader.h \
    ../source/Reader/OOXHeaderReader.h \
    ../source/Reader/OOXLatentStyleReader.h \
    ../source/Reader/OOXLevelReader.h \
    ../source/Reader/OOXMathPropReader.h \
    ../source/Reader/OOXMathReader.h \
    ../source/Reader/OOXNumberingMapReader.h \
    ../source/Reader/OOXNumberingReader.h \
    ../source/Reader/OOXParagraphReader.h \
    ../source/Reader/OOXPictureAnchorReader.h \
    ../source/Reader/OOXPictureGraphicReader.h \
    ../source/Reader/OOXPictureInlineReader.h \
    ../source/Reader/OOXPictureReader.h \
    ../source/Reader/OOXpPrFrameReader.h \
    ../source/Reader/OOXpPrReader.h \
    ../source/Reader/OOXpPrTabReader.h \
    ../source/Reader/OOXReader.h \
    ../source/Reader/OOXReaderBasic.h \
    ../source/Reader/OOXRelsReader.h \
    ../source/Reader/OOXrPrReader.h \
    ../source/Reader/OOXRunReader.h \
    ../source/Reader/OOXSectionPropertyReader.h \
    ../source/Reader/OOXSettingsReader.h \
    ../source/Reader/OOXShadingReader.h \
    ../source/Reader/OOXShapeReader.h \
    ../source/Reader/OOXStyleReader.h \
    ../source/Reader/OOXStyleTableReader.h \
    ../source/Reader/OOXTableCellReader.h \
    ../source/Reader/OOXTableReader.h \
    ../source/Reader/OOXTableRowReader.h \
    ../source/Reader/OOXtblLookReader.h \
    ../source/Reader/OOXtblpPrReader.h \
    ../source/Reader/OOXtblPrReader.h \
    ../source/Reader/OOXtcPrReader.h \
    ../source/Reader/OOXTextItemReader.h \
    ../source/Reader/OOXThemeReader.h \
    ../source/Reader/OOXtrPrReader.h \
    ../source/Writer/OOXContentTypesWriter.h \
    ../source/Writer/OOXDocumentWriter.h \
    ../source/Writer/OOXFontTableWriter.h \
    ../source/Writer/OOXFootnoteWriter.h \
    ../source/Writer/OOXNumberingWriter.h \
    ../source/Writer/OOXRelsWriter.h \
    ../source/Writer/OOXSettingsWriter.h \
    ../source/Writer/OOXStylesWriter.h \
    ../source/Writer/OOXThemeWriter.h \
    ../source/Writer/OOXWriter.h \
    ../source/Ole1FormatReader.h
