#-------------------------------------------------
#
# Project created by QtCreator 2014-07-03T15:22:54
#
#-------------------------------------------------

QT       -= core gui

TARGET = DocxFormatLib
TEMPLATE = lib
CONFIG += staticlib

CORE_ROOT_DIR = $$PWD/../../..
PWD_ROOT_DIR = $$PWD

CONFIG += core_x2t
include(../../../Common/base.pri)

DEFINES +=  UNICODE _UNICODE \
            DONT_WRITE_EMBEDDED_FONTS

#BOOST
include($$PWD/../../3dParty/boost/boost.pri)
INCLUDEPATH += ../../../ASCOfficeXlsFile2/source/XlsFormat
INCLUDEPATH += ../../../ASCOfficeXlsFile2/source/Common
INCLUDEPATH += ../Source/XlsbFormat
core_release {
SOURCES += \
    docxformatlib_logic.cpp
}

core_debug {
SOURCES += \
    ../Source/DocxFormat/Logic/AlternateContent.cpp \
    ../Source/DocxFormat/Logic/Annotations.cpp \
    ../Source/DocxFormat/Logic/Bdo.cpp \
    ../Source/DocxFormat/Logic/Dir.cpp \
    ../Source/DocxFormat/Logic/FldSimple.cpp \
    ../Source/DocxFormat/Logic/Hyperlink.cpp \
    ../Source/DocxFormat/Logic/Paragraph.cpp \
    ../Source/DocxFormat/Logic/ParagraphProperty.cpp \
    ../Source/DocxFormat/Logic/RunProperty.cpp \
    ../Source/DocxFormat/Logic/Run.cpp \
    ../Source/DocxFormat/Logic/Sdt.cpp \
    ../Source/DocxFormat/Logic/SectionProperty.cpp \
    ../Source/DocxFormat/Logic/SmartTag.cpp \
    ../Source/DocxFormat/Logic/Table.cpp \
    ../Source/DocxFormat/Logic/TableProperty.cpp \
    ../Source/DocxFormat/Logic/Vml.cpp \
    ../Source/DocxFormat/Logic/DocParts.cpp \
    ../Source/DocxFormat/Media/VbaProject.cpp \
    ../Source/DocxFormat/Media/JsaProject.cpp \
    ../Source/DocxFormat/Media/ActiveX.cpp \
    ../Source/DocxFormat/Math/oMath.cpp \
    ../Source/DocxFormat/Math/oMathContent.cpp \
    ../Source/DocxFormat/Math/oMathPara.cpp \
    ../Source/MathEquation/MathEquation.cpp \
    ../Source/DocxFormat/Docx.cpp \
    ../Source/DocxFormat/DocxFlat.cpp \
    ../Source/DocxFormat/Comments.cpp \
    ../Source/DocxFormat/Document.cpp \
    ../Source/DocxFormat/VmlDrawing.cpp \
    ../Source/XlsbFormat/Biff12_unions/uCFVO.cpp \
    ../Source/XlsxFormat/Chart/ChartSerialize.cpp \
    ../Source/XlsxFormat/Chart/ChartSerializeEx.cpp \
    ../Source/XlsxFormat/Common.cpp \
    ../Source/XlsxFormat/Xlsx.cpp \
    ../Source/XlsxFormat/XlsxFlat.cpp \
    ../Source/XlsxFormat/Worksheets/Worksheet.cpp \
    ../Source/XlsxFormat/Worksheets/SheetData.cpp \
    ../Source/XlsxFormat/Worksheets/ConditionalFormatting.cpp \
    ../Source/XlsxFormat/Worksheets/DataValidation.cpp \
    ../Source/XlsxFormat/Table/Tables.cpp \
    ../Source/XlsxFormat/Controls/Controls.cpp \
    ../Source/DocxFormat/Settings/Settings.cpp \
    ../Source/DocxFormat/App.cpp \
    ../Source/DocxFormat/Core.cpp \
    ../Source/DocxFormat/FileFactory.cpp \
    ../Source/DocxFormat/IFileContainer.cpp \
    ../Source/DocxFormat/Document.cpp \
    ../Source/XlsxFormat/FileFactory_Spreadsheet.cpp \
    ../Source/DocxFormat/Drawing/DrawingExt.cpp \
    ../Source/DocxFormat/Diagram/DiagramColors.cpp \
    ../Source/DocxFormat/Diagram/DiagramData.cpp \
    ../Source/DocxFormat/Diagram/DiagramDrawing.cpp \
    ../Source/DocxFormat/Diagram/DiagramLayout.cpp \
    ../Source/DocxFormat/Diagram/DiagramQuickStyle.cpp \
    ../Source/Common/Align.cpp \
    ../Source/Common/Color.cpp \
    ../Source/Common/Index.cpp \
    ../Source/Common/NumFormat.cpp \
    ../Source/Common/Position.cpp \
    ../Source/Common/Wrap.cpp \
    ../Source/Common/ZIndex.cpp \
    ../Source/DocxFormat/WritingElement.cpp \
    ../Source/Common/SimpleTypes_Word.cpp \
    ../Source/SystemUtility/SystemUtility.cpp \
    ../Source/XlsxFormat/Styles/rPr.cpp \
    ../Source/XlsxFormat/SharedStrings/Si.cpp \
    ../Source/XlsxFormat/SharedStrings/Text.cpp \
    ../Source/XlsxFormat/Pivot/Pivots.cpp \
    ../Source/XlsxFormat/Slicer/SlicerCache.cpp \
    ../Source/XlsxFormat/Slicer/SlicerCacheExt.cpp \
    ../Source/XlsxFormat/Slicer/Slicer.cpp \
    ../Source/XlsxFormat/NamedSheetViews/NamedSheetViews.cpp \
### XLSB
    ../Source/XlsbFormat/WorkBookStream.cpp \
    ../Source/XlsbFormat/WorkSheetStream.cpp \
    ../Source/XlsbFormat/SharedStringsStream.cpp \
    ../Source/XlsbFormat/StylesStream.cpp \
### Biff12_records
    ../Source/XlsbFormat/Biff12_records/BeginBook.cpp \
    ../Source/XlsbFormat/Biff12_records/FRTBegin.cpp \
    ../Source/XlsbFormat/Biff12_records/FRTEnd.cpp \
    ../Source/XlsbFormat/Biff12_records/Uid.cpp \
    ../Source/XlsbFormat/Biff12_records/FileVersion.cpp \
    ../Source/XlsbFormat/Biff12_records/FileSharingIso.cpp \
    ../Source/XlsbFormat/Biff12_records/WbProp.cpp \
    ../Source/XlsbFormat/Biff12_records/ACBegin.cpp \
    ../Source/XlsbFormat/Biff12_records/AbsPath15.cpp \
    ../Source/XlsbFormat/Biff12_records/ACEnd.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginBookViews.cpp \
    ../Source/XlsbFormat/Biff12_records/EndBookViews.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginBundleShs.cpp \
    ../Source/XlsbFormat/Biff12_records/BundleSh.cpp \
    ../Source/XlsbFormat/Biff12_records/EndBundleShs.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginFnGroup.cpp \
    ../Source/XlsbFormat/Biff12_records/FnGroup.cpp \
    ../Source/XlsbFormat/Biff12_records/EndFnGroup.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginExternals.cpp \
    ../Source/XlsbFormat/Biff12_records/EndExternals.cpp \
    ../Source/XlsbFormat/Biff12_records/SupSelf.cpp \
    ../Source/XlsbFormat/Biff12_records/SupBookSrc.cpp \
    ../Source/XlsbFormat/Biff12_records/SupSame.cpp \
    ../Source/XlsbFormat/Biff12_records/PlaceholderName.cpp \
    ../Source/XlsbFormat/Biff12_records/SupAddin.cpp \
    ../Source/XlsbFormat/Biff12_records/CalcProp.cpp \
    ../Source/XlsbFormat/Biff12_records/OleSize.cpp \
    ../Source/XlsbFormat/Biff12_records/EndBook.cpp \
    ../Source/XlsbFormat/Biff12_records/BookProtectionIso.cpp \
    ../Source/XlsbFormat/Biff12_records/BookProtection.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginSheet.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginColInfos.cpp \
    ../Source/XlsbFormat/Biff12_records/EndColInfos.cpp \
    ../Source/XlsbFormat/Biff12_records/WsDim.cpp \
    ../Source/XlsbFormat/Biff12_records/Drawing.cpp \
    ../Source/XlsbFormat/Biff12_records/HLink.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginMergeCells.cpp \
    ../Source/XlsbFormat/Biff12_records/MergeCell.cpp \
    ../Source/XlsbFormat/Biff12_records/EndMergeCells.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginSheetData.cpp \
    ../Source/XlsbFormat/Biff12_records/RwDescent.cpp \
    ../Source/XlsbFormat/Biff12_records/CellMeta.cpp \
    ../Source/XlsbFormat/Biff12_records/ValueMeta.cpp \
    ../Source/XlsbFormat/Biff12_records/WsFmtInfo.cpp \
    ../Source/XlsbFormat/Biff12_records/EndSheetData.cpp \
    ../Source/XlsbFormat/Biff12_records/EndWsView.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginWsViews.cpp \
    ../Source/XlsbFormat/Biff12_records/EndWsViews.cpp \
    ../Source/XlsbFormat/Biff12_records/SheetProtectionIso.cpp \
    ../Source/XlsbFormat/Biff12_records/SheetProtection.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginListParts.cpp \
    ../Source/XlsbFormat/Biff12_records/ListPart.cpp \
    ../Source/XlsbFormat/Biff12_records/EndListParts.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginSortCond.cpp \
    ../Source/XlsbFormat/Biff12_records/EndSortCond.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginSortCond14.cpp \
    ../Source/XlsbFormat/Biff12_records/EndSortCond14.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginRichSortCondition.cpp \
    ../Source/XlsbFormat/Biff12_records/EndRichSortCondition.cpp \
    ../Source/XlsbFormat/Biff12_records/EndSortState.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginConditionalFormatting.cpp \
    ../Source/XlsbFormat/Biff12_records/EndConditionalFormatting.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginCFRule.cpp \
    ../Source/XlsbFormat/Biff12_records/EndCFRule.cpp \
    ../Source/XlsbFormat/Biff12_records/CFVO.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginIconSet.cpp \
    ../Source/XlsbFormat/Biff12_records/EndIconSet.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginDatabar.cpp \
    ../Source/XlsbFormat/Biff12_records/EndDatabar.cpp \
    ../Source/XlsbFormat/Biff12_records/Color.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginColorScale.cpp \
    ../Source/XlsbFormat/Biff12_records/EndColorScale.cpp \
    ../Source/XlsbFormat/Biff12_records/CFRuleExt.cpp \
    ../Source/XlsbFormat/Biff12_records/EndSheet.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginSst.cpp \
    ../Source/XlsbFormat/Biff12_records/SSTItem.cpp \
    ../Source/XlsbFormat/Biff12_records/EndSst.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginStyleSheet.cpp \
    ../Source/XlsbFormat/Biff12_records/Fmt.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginFmts.cpp \
    ../Source/XlsbFormat/Biff12_records/EndFmts.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginFonts.cpp \
    ../Source/XlsbFormat/Biff12_records/EndFonts.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginFills.cpp \
    ../Source/XlsbFormat/Biff12_records/Fill.cpp \
    ../Source/XlsbFormat/Biff12_records/EndFills.cpp \
    ../Source/XlsbFormat/Biff12_records/BeginBorders.cpp \
    ../Source/XlsbFormat/Biff12_records/Border.cpp \
    ../Source/XlsbFormat/Biff12_records/EndBorders.cpp \
### Biff12_structures
    ../Source/XlsbFormat/Biff12_structures/LPByteBuf.cpp \
    ../Source/XlsbFormat/Biff12_structures/IsoPasswordData.cpp \
    ../Source/XlsbFormat/Biff12_structures/CodeName.cpp \
    ../Source/XlsbFormat/Biff12_structures/ACProductVersion.cpp \
    ../Source/XlsbFormat/Biff12_structures/FRTProductVersion.cpp \
    ../Source/XlsbFormat/Biff12_structures/RelID.cpp \
    ../Source/XlsbFormat/Biff12_structures/BookProtectionFlags.cpp \
    ../Source/XlsbFormat/Biff12_structures/ColSpan.cpp \
    ../Source/XlsbFormat/Biff12_structures/Cell.cpp \
    ../Source/XlsbFormat/Biff12_structures/GrbitFmla.cpp \
    ../Source/XlsbFormat/Biff12_structures/SxOs.cpp \
    ../Source/XlsbFormat/Biff12_structures/SxSu.cpp \
    ../Source/XlsbFormat/Biff12_structures/UncheckedSqRfX.cpp \
    ../Source/XlsbFormat/Biff12_structures/CFType.cpp \
    ../Source/XlsbFormat/Biff12_structures/CFTemp.cpp \
    ../Source/XlsbFormat/Biff12_structures/CFOper.cpp \
    ../Source/XlsbFormat/Biff12_structures/CFTextOper.cpp \
    ../Source/XlsbFormat/Biff12_structures/CFDateOper.cpp \
    ../Source/XlsbFormat/Biff12_structures/CFVOtype.cpp \
    ../Source/XlsbFormat/Biff12_structures/FRTBlank.cpp \
    ../Source/XlsbFormat/Biff12_structures/RichStr.cpp \
    ../Source/XlsbFormat/Biff12_structures/StrRun.cpp \
    ../Source/XlsbFormat/Biff12_structures/PhRun.cpp \
    ../Source/XlsbFormat/Biff12_structures/GradientStop.cpp \
    ../Source/XlsbFormat/Biff12_structures/Blxf.cpp \
### Biff12_unions
    ../Source/XlsbFormat/Biff12_unions/FRT.cpp \
    ../Source/XlsbFormat/Biff12_unions/ACUID.cpp \
    ../Source/XlsbFormat/Biff12_unions/ACABSPATH.cpp \
    ../Source/XlsbFormat/Biff12_unions/BOOKVIEWS.cpp \
    ../Source/XlsbFormat/Biff12_unions/BUNDLESHS.cpp \
    ../Source/XlsbFormat/Biff12_unions/FNGROUP.cpp \
    ../Source/XlsbFormat/Biff12_unions/EXTERNALS.cpp \
    ../Source/XlsbFormat/Biff12_unions/SUP.cpp \
    ../Source/XlsbFormat/Biff12_unions/SUPSAME.cpp \
    ../Source/XlsbFormat/Biff12_unions/SUPADDIN.cpp \
    ../Source/XlsbFormat/Biff12_unions/COLINFOS.cpp \
    ../Source/XlsbFormat/Biff12_unions/HLINKS.cpp \
    ../Source/XlsbFormat/Biff12_unions/MERGECELLS.cpp \
    ../Source/XlsbFormat/Biff12_unions/CELLTABLE.cpp \
    ../Source/XlsbFormat/Biff12_unions/ACCELLTABLE.cpp \
    ../Source/XlsbFormat/Biff12_unions/CELL.cpp \
    ../Source/XlsbFormat/Biff12_unions/DATACELL.cpp \
    ../Source/XlsbFormat/Biff12_unions/FMLACELL.cpp \
    ../Source/XlsbFormat/Biff12_unions/SHRFMLACELL.cpp \
    ../Source/XlsbFormat/Biff12_unions/TABLECELL.cpp \
    ../Source/XlsbFormat/Biff12_unions/CELLMETA.cpp \
    ../Source/XlsbFormat/Biff12_unions/WSVIEW2.cpp \
    ../Source/XlsbFormat/Biff12_unions/WSVIEWS2.cpp \
    ../Source/XlsbFormat/Biff12_unions/LISTPARTS.cpp \
    ../Source/XlsbFormat/Biff12_unions/RICHSORTCONDITION.cpp \
    ../Source/XlsbFormat/Biff12_unions/SORTCOND14.cpp \
    ../Source/XlsbFormat/Biff12_unions/ACSORTCONDS.cpp \
    ../Source/XlsbFormat/Biff12_unions/SORTCOND.cpp \
    ../Source/XlsbFormat/Biff12_unions/SORTCONDS.cpp \
    ../Source/XlsbFormat/Biff12_unions/SORTSTATE.cpp \
    ../Source/XlsbFormat/Biff12_unions/ICONSET.cpp \
    ../Source/XlsbFormat/Biff12_unions/DATABAR.cpp \
    ../Source/XlsbFormat/Biff12_unions/COLORSCALE.cpp \
    ../Source/XlsbFormat/Biff12_unions/FRTCFRULE.cpp \
    ../Source/XlsbFormat/Biff12_unions/CFRULE.cpp \
    ../Source/XlsbFormat/Biff12_unions/CONDITIONALFORMATTING.cpp \
    ../Source/XlsbFormat/Biff12_unions/SHAREDSTRINGS.cpp \
    ../Source/XlsbFormat/Biff12_unions/ACFMT.cpp \
    ../Source/XlsbFormat/Biff12_unions/FMTS.cpp \
    ../Source/XlsbFormat/Biff12_unions/FONTS.cpp \
    ../Source/XlsbFormat/Biff12_unions/FILLS.cpp \
    ../Source/XlsbFormat/Biff12_unions/BORDERS.cpp \
}


SOURCES += docxformatlib.cpp \
    ../Source/Utility/codecvt.cpp \
    ../Source/Utility/DateTime.cpp \
    ../Source/Utility/TxtFile.cpp \
    ../Source/Base/unicode_util.cpp \
    ../../3dParty/pole/pole.cpp \

HEADERS += docxformatlib.h \
    ../Source/Base/Base.h \
    ../Source/Base/Nullable.h \
    ../Source/Base/SmartPtr.h \
    ../Source/Common/AbstractConverter.h \
    ../Source/Common/Align.h \
    ../Source/Common/Color.h \
    ../Source/Common/Common.h \
    ../Source/Common/ComplexTypes.h \
    ../Source/Common/Index.h \
    ../Source/Common/NumFormat.h \
    ../Source/Common/Point.h \
    ../Source/Common/Position.h \
    ../Source/Common/SimpleTypes_Base.h \
    ../Source/Common/SimpleTypes_Drawing.h \
    ../Source/Common/SimpleTypes_OMath.h \
    ../Source/Common/SimpleTypes_Shared.h \
    ../Source/Common/SimpleTypes_Vml.h \
    ../Source/Common/SimpleTypes_Word.h \
    ../Source/Common/Size.h \
    ../Source/Common/Unit.h \
    ../Source/Common/Wrap.h \
    ../Source/Common/ZIndex.h \
    ../Source/DocxFormat/Drawing/Drawing.h \
    ../Source/DocxFormat/Drawing/DrawingBody.h \
    ../Source/DocxFormat/Drawing/DrawingExt.h \
    ../Source/DocxFormat/External/External.h \
    ../Source/DocxFormat/External/HyperLink.h \
    ../Source/DocxFormat/Logic/AlternateContent.h \
    ../Source/DocxFormat/Logic/Annotations.h \
    ../Source/DocxFormat/Logic/BaseLogicSettings.h \
    ../Source/DocxFormat/Logic/Bdo.h \
    ../Source/DocxFormat/Logic/Dir.h \
    ../Source/DocxFormat/Logic/FldChar.h \
    ../Source/DocxFormat/Logic/FldSimple.h \
    ../Source/DocxFormat/Logic/Hyperlink.h \
    ../Source/DocxFormat/Logic/Paragraph.h \
    ../Source/DocxFormat/Logic/ParagraphProperty.h \
    ../Source/DocxFormat/Logic/Pict.h \
    ../Source/DocxFormat/Logic/Run.h \
    ../Source/DocxFormat/Logic/RunContent.h \
    ../Source/DocxFormat/Logic/RunProperty.h \
    ../Source/DocxFormat/Logic/Sdt.h \
    ../Source/DocxFormat/Logic/SectionProperty.h \
    ../Source/DocxFormat/Logic/Shape.h \
    ../Source/DocxFormat/Logic/SmartTag.h \
    ../Source/DocxFormat/Logic/Table.h \
    ../Source/DocxFormat/Logic/TableProperty.h \
    ../Source/DocxFormat/Logic/Vml.h \
    ../Source/DocxFormat/Logic/VmlOfficeDrawing.h \
    ../Source/DocxFormat/Logic/VmlWord.h \
    ../Source/DocxFormat/Logic/DocParts.h \
    ../Source/DocxFormat/Math/OMath.h \
    ../Source/DocxFormat/Math/oMathBottomNodes.h \
    ../Source/DocxFormat/Math/oMathContent.h \
    ../Source/DocxFormat/Math/oMathPara.h \
    ../Source/DocxFormat/Media/Audio.h \
    ../Source/DocxFormat/Media/Image.h \
    ../Source/DocxFormat/Media/Media.h \
    ../Source/DocxFormat/Media/OleObject.h \
    ../Source/DocxFormat/Media/Video.h \
    ../Source/DocxFormat/Media/JsaProject.h \
    ../Source/DocxFormat/Settings/Settings.h \
    ../Source/DocxFormat/Settings/WebSettings.h \
    ../Source/DocxFormat/App.h \
    ../Source/DocxFormat/Bibliography.h \
    ../Source/DocxFormat/Comments.h \
    ../Source/DocxFormat/ContentTypes.h \
    ../Source/DocxFormat/Core.h \
    ../Source/DocxFormat/CustomXml.h \
    ../Source/DocxFormat/Document.h \
    ../Source/DocxFormat/Docx.h \
    ../Source/DocxFormat/DocxFlat.h \
    ../Source/DocxFormat/Endnote.h \
    ../Source/DocxFormat/File.h \
    ../Source/DocxFormat/FileFactory.h \
    ../Source/DocxFormat/FileType.h \
    ../Source/DocxFormat/FileTypes.h \
    ../Source/DocxFormat/Font.h \
    ../Source/DocxFormat/FontTable.h \
    ../Source/DocxFormat/Footnote.h \
    ../Source/DocxFormat/FtnEdn.h \
    ../Source/DocxFormat/HeaderFooter.h \
    ../Source/DocxFormat/IFileBuilder.h \
    ../Source/DocxFormat/IFileContainer.h \
    ../Source/DocxFormat/NamespaceOwn.h \
    ../Source/DocxFormat/Namespaces.h \
    ../Source/DocxFormat/Numbering.h \
    ../Source/DocxFormat/Rels.h \
    ../Source/DocxFormat/RId.h \
    ../Source/DocxFormat/Styles.h \
    ../Source/DocxFormat/Unit.h \
    ../Source/DocxFormat/UnknowTypeFile.h \
    ../Source/DocxFormat/WritingElement.h \
    ../Source/SystemUtility/SystemUtility.h \
    ../Source/Utility/codecvt.h \
    ../Source/Utility/DateTime.h \
    ../Source/Utility/TxtFile.h \
    ../Source/Utility/Unit.h \
    ../Source/Utility/Utility.h \
    ../Source/XlsbFormat/Biff12_unions/uCFVO.h \
    ../Source/XlsxFormat/CalcChain/CalcChain.h \
    ../Source/XlsxFormat/Chart/Chart.h \
    ../Source/XlsxFormat/Chart/ChartSerialize.h \
    ../Source/XlsxFormat/Chart/ChartSerializeEx.h \
    ../Source/XlsxFormat/Comments/Comments.h \
    ../Source/XlsxFormat/Comments/ThreadedComments.h \
    ../Source/XlsxFormat/Drawing/CellAnchor.h \
    ../Source/XlsxFormat/Drawing/Drawing.h \
    ../Source/XlsxFormat/Drawing/FromTo.h \
    ../Source/XlsxFormat/Drawing/Pos.h \
    ../Source/XlsxFormat/SharedStrings/PhoneticPr.h \
    ../Source/XlsxFormat/SharedStrings/rPr.h \
    ../Source/XlsxFormat/SharedStrings/Run.h \
    ../Source/XlsxFormat/SharedStrings/SharedStrings.h \
    ../Source/XlsxFormat/SharedStrings/Si.h \
    ../Source/XlsxFormat/SharedStrings/Text.h \
    ../Source/XlsxFormat/Styles/Borders.h \
    ../Source/XlsxFormat/Styles/CellStyles.h \
    ../Source/XlsxFormat/Styles/Colors.h \
    ../Source/XlsxFormat/Styles/dxf.h \
    ../Source/XlsxFormat/Styles/Fills.h \
    ../Source/XlsxFormat/Styles/Fonts.h \
    ../Source/XlsxFormat/Styles/NumFmts.h \
    ../Source/XlsxFormat/Styles/rPr.h \
    ../Source/XlsxFormat/Styles/Styles.h \
    ../Source/XlsxFormat/Styles/TableStyles.h \
    ../Source/XlsxFormat/Styles/Xfs.h \
    ../Source/XlsxFormat/Table/Autofilter.h \
    ../Source/XlsxFormat/Table/Table.h \
    ../Source/XlsxFormat/Workbook/BookViews.h \
    ../Source/XlsxFormat/Workbook/CalcPr.h \
    ../Source/XlsxFormat/Workbook/DefinedNames.h \
    ../Source/XlsxFormat/Workbook/Sheets.h \
    ../Source/XlsxFormat/Workbook/Workbook.h \
    ../Source/XlsxFormat/Workbook/WorkbookPr.h \
    ../Source/XlsxFormat/Worksheets/Cols.h \
    ../Source/XlsxFormat/Worksheets/ConditionalFormatting.h \
    ../Source/XlsxFormat/Worksheets/DataValidation.h \
    ../Source/XlsxFormat/Worksheets/Hyperlinks.h \
    ../Source/XlsxFormat/Worksheets/MergeCells.h \
    ../Source/XlsxFormat/Worksheets/SheetData.h \
    ../Source/XlsxFormat/Worksheets/Worksheet.h \
    ../Source/XlsxFormat/Worksheets/WorksheetChildOther.h \
    ../Source/XlsxFormat/Controls/Controls.h \
    ../Source/XlsxFormat/Common.h \
    ../Source/XlsxFormat/CommonInclude.h \
    ../Source/XlsxFormat/ComplexTypes_Spreadsheet.h \
    ../Source/XlsxFormat/FileFactory_Spreadsheet.h \
    ../Source/XlsxFormat/FileTypes_Spreadsheet.h \
    ../Source/XlsxFormat/SimpleTypes_Spreadsheet.h \
    ../Source/XlsxFormat/WritingElement.h \
    ../Source/DocxFormat/WorkbookComments.h \
    ../Source/XlsxFormat/Xlsx.h \
    ../Source/XlsxFormat/XlsxFlat.h \
    ../Source/XML/Utils.h \
    ../Source/XML/XmlSimple.h \
    ../Source/MathEquation/LEStream.h \
    ../Source/MathEquation/MathEquation.h \
    ../Source/MathEquation/OutputDev.h \
    ../Source/MathEquation/String.h \
    ../Source/MathEquation/StringOutput.h \
    ../Source/MathEquation/Types.h \
    ../Source/Base/unicode_util.h \
    ../Source/XlsxFormat/ExternalLinks/ExternalLinkPath.h \
    ../Source/XlsxFormat/ExternalLinks/ExternalLinks.h \
    ../Source/XlsxFormat/Worksheets/Sparkline.h \
    ../Source/XlsxFormat/Ole/OleObjects.h \
    ../Source/DocxFormat/ Diagram/DiagramColors.h \
    ../Source/DocxFormat/Diagram/DiagramData.h \
    ../Source/DocxFormat/Diagram/DiagramDrawing.h \
    ../Source/DocxFormat/Diagram/DiagramLayout.h \
    ../Source/DocxFormat/Diagram/DiagramQuickStyle.h \
    ../Source/XlsxFormat/Pivot/PivotTable.h \
    ../Source/XlsxFormat/Pivot/PivotCacheDefinition.h \
    ../Source/XlsxFormat/Pivot/PivotCacheRecords.h \
    ../Source/XlsxFormat/Slicer/SlicerCache.h \
    ../Source/XlsxFormat/Slicer/SlicerCacheExt.h \
    ../Source/XlsxFormat/Slicer/Slicer.h \
    ../Source/XlsxFormat/NamedSheetViews/NamedSheetViews.h \
### XLSB
    ../Source/XlsbFormat/WorkBookStream.h \
    ../Source/XlsbFormat/WorkSheetStream.h \
    ../Source/XlsbFormat/SharedStringsStream.h \
    ../Source/XlsbFormat/StylesStream.h \
### Biff12_records
    ../Source/XlsbFormat/Biff12_records/CommonRecords.h \
    ../Source/XlsbFormat/Biff12_records/FRTBegin.h \
    ../Source/XlsbFormat/Biff12_records/FRTEnd.h \
    ../Source/XlsbFormat/Biff12_records/Uid.h \
    ../Source/XlsbFormat/Biff12_records/BeginBook.h \
    ../Source/XlsbFormat/Biff12_records/FileVersion.h \
    ../Source/XlsbFormat/Biff12_records/FileSharingIso.h \
    ../Source/XlsbFormat/Biff12_records/WbProp.h \
    ../Source/XlsbFormat/Biff12_records/ACBegin.h \
    ../Source/XlsbFormat/Biff12_records/AbsPath15.h \
    ../Source/XlsbFormat/Biff12_records/ACEnd.h \
    ../Source/XlsbFormat/Biff12_records/BeginBookViews.h \
    ../Source/XlsbFormat/Biff12_records/EndBookViews.h \
    ../Source/XlsbFormat/Biff12_records/BeginBundleShs.h \
    ../Source/XlsbFormat/Biff12_records/BundleSh.h \
    ../Source/XlsbFormat/Biff12_records/EndBundleShs.h \
    ../Source/XlsbFormat/Biff12_records/BeginFnGroup.h \
    ../Source/XlsbFormat/Biff12_records/FnGroup.h \
    ../Source/XlsbFormat/Biff12_records/EndFnGroup.h \
    ../Source/XlsbFormat/Biff12_records/BeginExternals.h \
    ../Source/XlsbFormat/Biff12_records/EndExternals.h \
    ../Source/XlsbFormat/Biff12_records/SupSelf.h \
    ../Source/XlsbFormat/Biff12_records/SupBookSrc.h \
    ../Source/XlsbFormat/Biff12_records/SupSame.h \
    ../Source/XlsbFormat/Biff12_records/PlaceholderName.h \
    ../Source/XlsbFormat/Biff12_records/SupAddin.h \
    ../Source/XlsbFormat/Biff12_records/CalcProp.h \
    ../Source/XlsbFormat/Biff12_records/OleSize.h \
    ../Source/XlsbFormat/Biff12_records/EndBook.h \
    ../Source/XlsbFormat/Biff12_records/BookProtectionIso.h \
    ../Source/XlsbFormat/Biff12_records/BookProtection.h \
    ../Source/XlsbFormat/Biff12_records/BeginSheet.h \
    ../Source/XlsbFormat/Biff12_records/BeginColInfos.h \
    ../Source/XlsbFormat/Biff12_records/EndColInfos.h \
    ../Source/XlsbFormat/Biff12_records/WsDim.h \
    ../Source/XlsbFormat/Biff12_records/Drawing.h \
    ../Source/XlsbFormat/Biff12_records/HLink.h \
    ../Source/XlsbFormat/Biff12_records/BeginMergeCells.h \
    ../Source/XlsbFormat/Biff12_records/MergeCell.h \
    ../Source/XlsbFormat/Biff12_records/EndMergeCells.h \
    ../Source/XlsbFormat/Biff12_records/BeginSheetData.h \
    ../Source/XlsbFormat/Biff12_records/RwDescent.h \
    ../Source/XlsbFormat/Biff12_records/CellMeta.h \
    ../Source/XlsbFormat/Biff12_records/ValueMeta.h \
    ../Source/XlsbFormat/Biff12_records/WsFmtInfo.h \
    ../Source/XlsbFormat/Biff12_records/Fmla.h \
    ../Source/XlsbFormat/Biff12_records/Cell.h \
    ../Source/XlsbFormat/Biff12_records/EndSheetData.h \
    ../Source/XlsbFormat/Biff12_records/EndWsView.h \
    ../Source/XlsbFormat/Biff12_records/BeginWsViews.h \
    ../Source/XlsbFormat/Biff12_records/EndWsViews.h \
    ../Source/XlsbFormat/Biff12_records/SheetProtectionIso.h \
    ../Source/XlsbFormat/Biff12_records/SheetProtection.h \
    ../Source/XlsbFormat/Biff12_records/BeginListParts.h \
    ../Source/XlsbFormat/Biff12_records/ListPart.h \
    ../Source/XlsbFormat/Biff12_records/EndListParts.h \
    ../Source/XlsbFormat/Biff12_records/BeginSortCond.h \
    ../Source/XlsbFormat/Biff12_records/EndSortCond.h \
    ../Source/XlsbFormat/Biff12_records/BeginSortCond14.h \
    ../Source/XlsbFormat/Biff12_records/EndSortCond14.h \
    ../Source/XlsbFormat/Biff12_records/BeginRichSortCondition.h \
    ../Source/XlsbFormat/Biff12_records/EndRichSortCondition.h \
    ../Source/XlsbFormat/Biff12_records/EndSortState.h \
    ../Source/XlsbFormat/Biff12_records/BeginConditionalFormatting.h \
    ../Source/XlsbFormat/Biff12_records/EndConditionalFormatting.h \
    ../Source/XlsbFormat/Biff12_records/BeginCFRule.h \
    ../Source/XlsbFormat/Biff12_records/EndCFRule.h \
    ../Source/XlsbFormat/Biff12_records/CFVO.h \
    ../Source/XlsbFormat/Biff12_records/BeginIconSet.h \
    ../Source/XlsbFormat/Biff12_records/EndIconSet.h \
    ../Source/XlsbFormat/Biff12_records/BeginDatabar.h \
    ../Source/XlsbFormat/Biff12_records/EndDatabar.h \
    ../Source/XlsbFormat/Biff12_records/Color.h \
    ../Source/XlsbFormat/Biff12_records/BeginColorScale.h \
    ../Source/XlsbFormat/Biff12_records/EndColorScale.h \
    ../Source/XlsbFormat/Biff12_records/CFRuleExt.h \
    ../Source/XlsbFormat/Biff12_records/EndSheet.h \
    ../Source/XlsbFormat/Biff12_records/BeginSst.h \
    ../Source/XlsbFormat/Biff12_records/SSTItem.h \
    ../Source/XlsbFormat/Biff12_records/EndSst.h \
    ../Source/XlsbFormat/Biff12_records/BeginStyleSheet.h \
    ../Source/XlsbFormat/Biff12_records/Fmt.h \
    ../Source/XlsbFormat/Biff12_records/BeginFmts.h \
    ../Source/XlsbFormat/Biff12_records/EndFmts.h \
    ../Source/XlsbFormat/Biff12_records/BeginFonts.h \
    ../Source/XlsbFormat/Biff12_records/EndFonts.h \
    ../Source/XlsbFormat/Biff12_records/BeginFills.h \
    ../Source/XlsbFormat/Biff12_records/Fill.h \
    ../Source/XlsbFormat/Biff12_records/EndFills.h \
    ../Source/XlsbFormat/Biff12_records/BeginBorders.h \
    ../Source/XlsbFormat/Biff12_records/Border.h \
    ../Source/XlsbFormat/Biff12_records/EndBorders.h \
### Biff12_structures
    ../Source/XlsbFormat/Biff12_structures/XLWideString.h \
    ../Source/XlsbFormat/Biff12_structures/LPByteBuf.h \
    ../Source/XlsbFormat/Biff12_structures/IsoPasswordData.h \
    ../Source/XlsbFormat/Biff12_structures/CodeName.h \
    ../Source/XlsbFormat/Biff12_structures/ACProductVersion.h \
    ../Source/XlsbFormat/Biff12_structures/FRTProductVersion.h \
    ../Source/XlsbFormat/Biff12_structures/RelID.h \
    ../Source/XlsbFormat/Biff12_structures/CellRangeRef.h \
    ../Source/XlsbFormat/Biff12_structures/CellRef.h \
    ../Source/XlsbFormat/Biff12_structures/BookProtectionFlags.h \
    ../Source/XlsbFormat/Biff12_structures/ColSpan.h \
    ../Source/XlsbFormat/Biff12_structures/Cell.h \
    ../Source/XlsbFormat/Biff12_structures/GrbitFmla.h \
    ../Source/XlsbFormat/Biff12_structures/SxOs.h \
    ../Source/XlsbFormat/Biff12_structures/SxSu.h \
    ../Source/XlsbFormat/Biff12_structures/UncheckedSqRfX.h \
    ../Source/XlsbFormat/Biff12_structures/CFType.h \
    ../Source/XlsbFormat/Biff12_structures/CFTemp.h \
    ../Source/XlsbFormat/Biff12_structures/CFOper.h \
    ../Source/XlsbFormat/Biff12_structures/CFTextOper.h \
    ../Source/XlsbFormat/Biff12_structures/CFDateOper.h \
    ../Source/XlsbFormat/Biff12_structures/CFVOtype.h \
    ../Source/XlsbFormat/Biff12_structures/FRTBlank.h \
    ../Source/XlsbFormat/Biff12_structures/RichStr.h \
    ../Source/XlsbFormat/Biff12_structures/StrRun.h \
    ../Source/XlsbFormat/Biff12_structures/PhRun.h \
    ../Source/XlsbFormat/Biff12_structures/GradientStop.h \
    ../Source/XlsbFormat/Biff12_structures/Blxf.h \
### Biff12_unions
    ../Source/XlsbFormat/Biff12_unions/FRT.h \
    ../Source/XlsbFormat/Biff12_unions/ACUID.h \
    ../Source/XlsbFormat/Biff12_unions/ACABSPATH.h \
    ../Source/XlsbFormat/Biff12_unions/BOOKVIEWS.h \
    ../Source/XlsbFormat/Biff12_unions/BUNDLESHS.h \
    ../Source/XlsbFormat/Biff12_unions/FNGROUP.h \
    ../Source/XlsbFormat/Biff12_unions/EXTERNALS.h \
    ../Source/XlsbFormat/Biff12_unions/SUP.h \
    ../Source/XlsbFormat/Biff12_unions/SUPSAME.h \
    ../Source/XlsbFormat/Biff12_unions/SUPADDIN.h \
    ../Source/XlsbFormat/Biff12_unions/COLINFOS.h \
    ../Source/XlsbFormat/Biff12_unions/HLINKS.h \
    ../Source/XlsbFormat/Biff12_unions/MERGECELLS.h \
    ../Source/XlsbFormat/Biff12_unions/CELLTABLE.h \
    ../Source/XlsbFormat/Biff12_unions/ACCELLTABLE.h \
    ../Source/XlsbFormat/Biff12_unions/CELL.h \
    ../Source/XlsbFormat/Biff12_unions/DATACELL.h \
    ../Source/XlsbFormat/Biff12_unions/FMLACELL.h \
    ../Source/XlsbFormat/Biff12_unions/SHRFMLACELL.h \
    ../Source/XlsbFormat/Biff12_unions/TABLECELL.h \
    ../Source/XlsbFormat/Biff12_unions/CELLMETA.h \
    ../Source/XlsbFormat/Biff12_unions/WSVIEW2.h \
    ../Source/XlsbFormat/Biff12_unions/WSVIEWS2.h \
    ../Source/XlsbFormat/Biff12_unions/LISTPARTS.h \
    ../Source/XlsbFormat/Biff12_unions/RICHSORTCONDITION.h \
    ../Source/XlsbFormat/Biff12_unions/SORTCOND14.h \
    ../Source/XlsbFormat/Biff12_unions/ACSORTCONDS.h \
    ../Source/XlsbFormat/Biff12_unions/SORTCOND.h \
    ../Source/XlsbFormat/Biff12_unions/SORTCONDS.h \
    ../Source/XlsbFormat/Biff12_unions/SORTSTATE.h \
    ../Source/XlsbFormat/Biff12_unions/ICONSET.h \
    ../Source/XlsbFormat/Biff12_unions/DATABAR.h \
    ../Source/XlsbFormat/Biff12_unions/COLORSCALE.h \
    ../Source/XlsbFormat/Biff12_unions/FRTCFRULE.h \
    ../Source/XlsbFormat/Biff12_unions/CFRULE.h \
    ../Source/XlsbFormat/Biff12_unions/CONDITIONALFORMATTING.h \
    ../Source/XlsbFormat/Biff12_unions/SHAREDSTRINGS.h \
    ../Source/XlsbFormat/Biff12_unions/ACFMT.h \
    ../Source/XlsbFormat/Biff12_unions/FMTS.h \
    ../Source/XlsbFormat/Biff12_unions/FONTS.h \
    ../Source/XlsbFormat/Biff12_unions/FILLS.h \
    ../Source/XlsbFormat/Biff12_unions/BORDERS.h \
