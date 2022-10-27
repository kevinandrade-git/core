#-------------------------------------------------
#
# Project created by QtCreator 2014-10-10T14:24:04
#
#-------------------------------------------------

QT       -= core gui

TARGET = PPTXFormatLib
TEMPLATE = lib
CONFIG += staticlib

CORE_ROOT_DIR = $$PWD/../../../..
PWD_ROOT_DIR = $$PWD

CONFIG += core_x2t
include(../../../../Common/base.pri)

core_windows {
    QMAKE_CXXFLAGS_RELEASE += -Ob0
}

#BOOST
include($$PWD/../../../../Common/3dParty/boost/boost.pri)

DEFINES += UNICODE \
    _UNICODE \
    AVS_USE_CONVERT_PPTX_TOCUSTOM_VML \
    #DISABLE_FILE_DOWNLOADER \
    DONT_WRITE_EMBEDDED_FONTS

INCLUDEPATH += \
    ../../../../Common/ASCDocxFormat/Source/Utility \
    ../../../../Common/ASCDocxFormat/Source/XML \
    ../../../../Common/ASCDocxFormat/Source \
    ../../../../ASCOfficeXlsFile2/source/XlsFormat \
    ../../../../ASCOfficeXlsFile2/source/Common \
    ../../../../Common/DocxFormat/Source/XlsbFormat

# Use Precompiled headers (PCH)
#use_pch {
CONFIG += precompile_header
PRECOMPILED_HEADER = precompiled.h
HEADERS += precompiled.h
#}

core_release {
SOURCES += \
    pptxformatlib_logic.cpp
}

core_debug {
SOURCES += \
    ../../../PPTXFormat/Logic/Media/WavAudioFile.cpp \
    ../../../PPTXFormat/Logic/Colors/SchemeClr.cpp \
    ../../../PPTXFormat/Logic/Fills/Blip.cpp \
    ../../../PPTXFormat/Logic/Fills/BlipFill.cpp \
    ../../../PPTXFormat/Logic/Table/TableCell.cpp \
    ../../../PPTXFormat/Logic/Timing/BuildNodeBase.cpp \
    ../../../PPTXFormat/Logic/Timing/TimeNodeBase.cpp \
    ../../../PPTXFormat/Logic/Transitions/TransitionBase.cpp \
    ../../../PPTXFormat/Logic/Bg.cpp \
    ../../../PPTXFormat/Logic/CNvGrpSpPr.cpp \
    ../../../PPTXFormat/Logic/ContentPart.cpp \
    ../../../PPTXFormat/Logic/CxnSp.cpp \
    ../../../PPTXFormat/Logic/EffectDag.cpp \
    ../../../PPTXFormat/Logic/EffectLst.cpp \
    ../../../PPTXFormat/Logic/EffectProperties.cpp \
    ../../../PPTXFormat/Logic/EffectStyle.cpp \
    ../../../PPTXFormat/Logic/Geometry.cpp \
    ../../../PPTXFormat/Logic/GraphicFrame.cpp \
    ../../../PPTXFormat/Logic/HeadingVariant.cpp \
    ../../../PPTXFormat/Logic/GrpSpPr.cpp \
    ../../../PPTXFormat/Logic/Hyperlink.cpp \
    ../../../PPTXFormat/Logic/NvGraphicFramePr.cpp \
    ../../../PPTXFormat/Logic/NvGrpSpPr.cpp \
    ../../../PPTXFormat/Logic/Pic.cpp \
    ../../../PPTXFormat/Logic/Shape.cpp \
    ../../../PPTXFormat/Logic/SmartArt.cpp \
    ../../../PPTXFormat/Logic/SpPr.cpp \
    ../../../PPTXFormat/Logic/SpTree.cpp \
    ../../../PPTXFormat/Logic/SpTreeElem.cpp \
    ../../../PPTXFormat/Logic/TxBody.cpp \
    ../../../PPTXFormat/Logic/UniColor.cpp \
    ../../../PPTXFormat/Logic/UniFill.cpp \
    ../../../PPTXFormat/Logic/UniEffect.cpp \
    ../../../PPTXFormat/Logic/Runs/MathParaWrapper.cpp \
    ../../../PPTXFormat/Logic/Controls.cpp \
    ../../../PPTXFormat/Presentation.cpp \
    ../../../PPTXFormat/FileContainer.cpp \
    ../../../PPTXFormat/FileFactory.cpp \
    ../../../PPTXFormat/FileMap.cpp \
    ../../../PPTXFormat/Folder.cpp
}

SOURCES += pptxformatlib.cpp \
    ../../../Editor/Drawing/Shapes/BaseShape/BaseShape.cpp \
    ../../../Editor/Drawing/Shapes/BaseShape/toVmlConvert.cpp \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PptFormula.cpp \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PptShape.cpp \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTXShape/PptxFormula.cpp \
    ../../../ASCOfficeDrawingConverter.cpp \
    ../../../ASCOfficePPTXFileRealization.cpp \
    ../../../Editor/BinaryFileReaderWriter.cpp \
    ../../../Editor/FontPicker.cpp \
    ../../../Editor/Drawing/TextAttributesEx.cpp \
    ../../../Editor/Drawing/Elements.cpp \
    ../../../../HtmlRenderer/src/ASCSVGWriter.cpp \
    ../../../Editor/imagemanager.cpp \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTXShape/PptxShape.cpp \
    ../../../../Common/DocxFormat/Source/Base/Nullable.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/SimpleType.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Double.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/DecimalNumber.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Point.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Inch.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/Emu.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/UniversalMeasure.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Base/UniversalMeasureOrPercent.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/PresetColorVal.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/ShapeType.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/SystemColorVal.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/ConstraintType.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/TextShapeType.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/ParameterId.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/Coordinate.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/PresetPatternVal.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/PresetCameraType.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/AlignH.cpp \
    ../../../../Common/DocxFormat/Source/Common/SimpleTypes_Drawing/AlignV.cpp

HEADERS += \
    pptxformatlib.h \
    ../../../ASCOfficeDrawingConverter.h \
    ../../../ASCOfficePPTXFile.h \
    ../../../PPTXFormat/FileTypes.h \
    ../../../PPTXFormat/Namespaces.h \
    ../../../PPTXFormat/WritingVector.h \
    ../../../PPTXFormat/Limit/AlbumLayout.h \
    ../../../PPTXFormat/Limit/AnimationDgmBuild.h \
    ../../../PPTXFormat/Limit/BaseLimit.h \
    ../../../PPTXFormat/Limit/BevelType.h \
    ../../../PPTXFormat/Limit/BlendMode.h \
    ../../../PPTXFormat/Limit/BlipCompression.h \
    ../../../PPTXFormat/Limit/BWMode.h \
    ../../../PPTXFormat/Limit/CameraType.h \
    ../../../PPTXFormat/Limit/ChartBuild.h \
    ../../../PPTXFormat/Limit/ChartBuildType.h \
    ../../../PPTXFormat/Limit/ColorSchemeIndex.h \
    ../../../PPTXFormat/Limit/CompoundLine.h \
    ../../../PPTXFormat/Limit/Conformance.h \
    ../../../PPTXFormat/Limit/ContentStatus.h \
    ../../../PPTXFormat/Limit/CornerDirectionVal.h \
    ../../../PPTXFormat/Limit/DgmBuild.h \
    ../../../PPTXFormat/Limit/DgmBuildType.h \
    ../../../PPTXFormat/Limit/EffectContainerType.h \
    ../../../PPTXFormat/Limit/EightDirectionVal.h \
    ../../../PPTXFormat/Limit/FillPath.h \
    ../../../PPTXFormat/Limit/Flip.h \
    ../../../PPTXFormat/Limit/FontAlign.h \
    ../../../PPTXFormat/Limit/FontStyleIndex.h \
    ../../../PPTXFormat/Limit/FrameShape.h \
    ../../../PPTXFormat/Limit/HorzOverflow.h \
    ../../../PPTXFormat/Limit/InOutDirectionVal.h \
    ../../../PPTXFormat/Limit/IterateType.h \
    ../../../PPTXFormat/Limit/LastView.h \
    ../../../PPTXFormat/Limit/LightRigType.h \
    ../../../PPTXFormat/Limit/LineCap.h \
    ../../../PPTXFormat/Limit/LineEndSize.h \
    ../../../PPTXFormat/Limit/LineEndType.h \
    ../../../PPTXFormat/Limit/Material.h \
    ../../../PPTXFormat/Limit/OnOff.h \
    ../../../PPTXFormat/Limit/Orient.h \
    ../../../PPTXFormat/Limit/ParaBuildType.h \
    ../../../PPTXFormat/Limit/PathFillMode.h \
    ../../../PPTXFormat/Limit/PattFillVal.h \
    ../../../PPTXFormat/Limit/PenAlign.h \
    ../../../PPTXFormat/Limit/PlaceholderSize.h \
    ../../../PPTXFormat/Limit/PlaceholderType.h \
    ../../../PPTXFormat/Limit/PresetShadowVal.h \
    ../../../PPTXFormat/Limit/PrstClrVal.h \
    ../../../PPTXFormat/Limit/PrstDashVal.h \
    ../../../PPTXFormat/Limit/RectAlign.h \
    ../../../PPTXFormat/Limit/SchemeClrVal.h \
    ../../../PPTXFormat/Limit/ShapeType.h \
    ../../../PPTXFormat/Limit/SideDirectionVal.h \
    ../../../PPTXFormat/Limit/SlideLayoutType.h \
    ../../../PPTXFormat/Limit/SlideSize.h \
    ../../../PPTXFormat/Limit/SplitterBarState.h \
    ../../../PPTXFormat/Limit/SysClrVal.h \
    ../../../PPTXFormat/Limit/TextAlign.h \
    ../../../PPTXFormat/Limit/TextAnchor.h \
    ../../../PPTXFormat/Limit/TextAutonumberScheme.h \
    ../../../PPTXFormat/Limit/TextCaps.h \
    ../../../PPTXFormat/Limit/TextShapeType.h \
    ../../../PPTXFormat/Limit/TextStrike.h \
    ../../../PPTXFormat/Limit/TextTabAlignType.h \
    ../../../PPTXFormat/Limit/TextUnderline.h \
    ../../../PPTXFormat/Limit/TextVerticalType.h \
    ../../../PPTXFormat/Limit/TextWrap.h \
    ../../../PPTXFormat/Limit/TLAccumulate.h \
    ../../../PPTXFormat/Limit/TLAdditive.h \
    ../../../PPTXFormat/Limit/TLCalcMode.h \
    ../../../PPTXFormat/Limit/TLChartSubElement.h \
    ../../../PPTXFormat/Limit/TLColorDirection.h \
    ../../../PPTXFormat/Limit/TLColorSpace.h \
    ../../../PPTXFormat/Limit/TLCommandType.h \
    ../../../PPTXFormat/Limit/TLMasterRelation.h \
    ../../../PPTXFormat/Limit/TLNextAc.h \
    ../../../PPTXFormat/Limit/TLNodeFillType.h \
    ../../../PPTXFormat/Limit/TLNodeType.h \
    ../../../PPTXFormat/Limit/TLOrigin.h \
    ../../../PPTXFormat/Limit/TLOverride.h \
    ../../../PPTXFormat/Limit/TLPathEditMode.h \
    ../../../PPTXFormat/Limit/TLPresetClass.h \
    ../../../PPTXFormat/Limit/TLPrevAc.h \
    ../../../PPTXFormat/Limit/TLRestart.h \
    ../../../PPTXFormat/Limit/TLRuntimeTrigger.h \
    ../../../PPTXFormat/Limit/TLSyncBehavior.h \
    ../../../PPTXFormat/Limit/TLTransform.h \
    ../../../PPTXFormat/Limit/TLTransition.h \
    ../../../PPTXFormat/Limit/TLTriggerEvent.h \
    ../../../PPTXFormat/Limit/TLValueType.h \
    ../../../PPTXFormat/Limit/TransitionSpeed.h \
    ../../../PPTXFormat/Limit/VariantType.h \
    ../../../PPTXFormat/Limit/VertOverflow.h \
    ../../../PPTXFormat/Logic/Bullets/BuAutoNum.h \
    ../../../PPTXFormat/Logic/Bullets/BuBlip.h \
    ../../../PPTXFormat/Logic/Bullets/BuChar.h \
    ../../../PPTXFormat/Logic/Bullets/BuClr.h \
    ../../../PPTXFormat/Logic/Bullets/BuClrTx.h \
    ../../../PPTXFormat/Logic/Bullets/BuFontTx.h \
    ../../../PPTXFormat/Logic/Bullets/Bullet.h \
    ../../../PPTXFormat/Logic/Bullets/BulletColor.h \
    ../../../PPTXFormat/Logic/Bullets/BulletSize.h \
    ../../../PPTXFormat/Logic/Bullets/BulletTypeface.h \
    ../../../PPTXFormat/Logic/Bullets/BuNone.h \
    ../../../PPTXFormat/Logic/Bullets/BuSzPct.h \
    ../../../PPTXFormat/Logic/Bullets/BuSzPts.h \
    ../../../PPTXFormat/Logic/Bullets/BuSzTx.h \
    ../../../PPTXFormat/Logic/Colors/ColorBase.h \
    ../../../PPTXFormat/Logic/Colors/ColorModifier.h \
    ../../../PPTXFormat/Logic/Colors/PrstClr.h \
    ../../../PPTXFormat/Logic/Colors/SchemeClr.h \
    ../../../PPTXFormat/Logic/Colors/SrgbClr.h \
    ../../../PPTXFormat/Logic/Colors/SysClr.h \
    ../../../PPTXFormat/Logic/Effects/AlphaBiLevel.h \
    ../../../PPTXFormat/Logic/Effects/AlphaCeiling.h \
    ../../../PPTXFormat/Logic/Effects/AlphaFloor.h \
    ../../../PPTXFormat/Logic/Effects/AlphaInv.h \
    ../../../PPTXFormat/Logic/Effects/AlphaMod.h \
    ../../../PPTXFormat/Logic/Effects/AlphaModFix.h \
    ../../../PPTXFormat/Logic/Effects/AlphaOutset.h \
    ../../../PPTXFormat/Logic/Effects/AlphaRepl.h \
    ../../../PPTXFormat/Logic/Effects/BiLevel.h \
    ../../../PPTXFormat/Logic/Effects/Blend.h \
    ../../../PPTXFormat/Logic/Effects/Blur.h \
    ../../../PPTXFormat/Logic/Effects/ClrChange.h \
    ../../../PPTXFormat/Logic/Effects/ClrRepl.h \
    ../../../PPTXFormat/Logic/Effects/Duotone.h \
    ../../../PPTXFormat/Logic/Effects/EffectElement.h \
    ../../../PPTXFormat/Logic/Effects/FillEffect.h \
    ../../../PPTXFormat/Logic/Effects/FillOverlay.h \
    ../../../PPTXFormat/Logic/Effects/Glow.h \
    ../../../PPTXFormat/Logic/Effects/Grayscl.h \
    ../../../PPTXFormat/Logic/Effects/HslEffect.h \
    ../../../PPTXFormat/Logic/Effects/InnerShdw.h \
    ../../../PPTXFormat/Logic/Effects/LumEffect.h \
    ../../../PPTXFormat/Logic/Effects/OuterShdw.h \
    ../../../PPTXFormat/Logic/Effects/PrstShdw.h \
    ../../../PPTXFormat/Logic/Effects/Reflection.h \
    ../../../PPTXFormat/Logic/Effects/RelOff.h \
    ../../../PPTXFormat/Logic/Effects/SoftEdge.h \
    ../../../PPTXFormat/Logic/Effects/TintEffect.h \
    ../../../PPTXFormat/Logic/Effects/XfrmEffect.h \
    ../../../PPTXFormat/Logic/Fills/Blip.h \
    ../../../PPTXFormat/Logic/Fills/BlipFill.h \
    ../../../PPTXFormat/Logic/Fills/GradFill.h \
    ../../../PPTXFormat/Logic/Fills/NoFill.h \
    ../../../PPTXFormat/Logic/Fills/PattFill.h \
    ../../../PPTXFormat/Logic/Fills/SolidFill.h \
    ../../../PPTXFormat/Logic/Fills/Stretch.h \
    ../../../PPTXFormat/Logic/Fills/Tile.h \
    ../../../PPTXFormat/Logic/Media/AudioCD.h \
    ../../../PPTXFormat/Logic/Media/MediaFile.h \
    ../../../PPTXFormat/Logic/Media/WavAudioFile.h \
    ../../../PPTXFormat/Logic/Path2D/ArcTo.h \
    ../../../PPTXFormat/Logic/Path2D/Close.h \
    ../../../PPTXFormat/Logic/Path2D/CubicBezTo.h \
    ../../../PPTXFormat/Logic/Path2D/LineTo.h \
    ../../../PPTXFormat/Logic/Path2D/MoveTo.h \
    ../../../PPTXFormat/Logic/Path2D/PathBase.h \
    ../../../PPTXFormat/Logic/Path2D/QuadBezTo.h \
    ../../../PPTXFormat/Logic/Runs/Br.h \
    ../../../PPTXFormat/Logic/Runs/Fld.h \
    ../../../PPTXFormat/Logic/Runs/MathParaWrapper.h \
    ../../../PPTXFormat/Logic/Runs/Run.h \
    ../../../PPTXFormat/Logic/Runs/RunBase.h \
    ../../../PPTXFormat/Logic/Table/Table.h \
    ../../../PPTXFormat/Logic/Table/TableCell.h \
    ../../../PPTXFormat/Logic/Table/TableCellProperties.h \
    ../../../PPTXFormat/Logic/Table/TableCol.h \
    ../../../PPTXFormat/Logic/Table/TableProperties.h \
    ../../../PPTXFormat/Logic/Table/TableRow.h \
    ../../../PPTXFormat/Logic/Timing/Anim.h \
    ../../../PPTXFormat/Logic/Timing/AnimClr.h \
    ../../../PPTXFormat/Logic/Timing/AnimEffect.h \
    ../../../PPTXFormat/Logic/Timing/AnimMotion.h \
    ../../../PPTXFormat/Logic/Timing/AnimRot.h \
    ../../../PPTXFormat/Logic/Timing/AnimScale.h \
    ../../../PPTXFormat/Logic/Timing/AnimVariant.h \
    ../../../PPTXFormat/Logic/Timing/AttrName.h \
    ../../../PPTXFormat/Logic/Timing/AttrNameLst.h \
    ../../../PPTXFormat/Logic/Timing/Audio.h \
    ../../../PPTXFormat/Logic/Timing/BldDgm.h \
    ../../../PPTXFormat/Logic/Timing/BldGraphic.h \
    ../../../PPTXFormat/Logic/Timing/BldLst.h \
    ../../../PPTXFormat/Logic/Timing/BldOleChart.h \
    ../../../PPTXFormat/Logic/Timing/BldP.h \
    ../../../PPTXFormat/Logic/Timing/BldSub.h \
    ../../../PPTXFormat/Logic/Timing/BuildNodeBase.h \
    ../../../PPTXFormat/Logic/Timing/CBhvr.h \
    ../../../PPTXFormat/Logic/Timing/Cmd.h \
    ../../../PPTXFormat/Logic/Timing/CMediaNode.h \
    ../../../PPTXFormat/Logic/Timing/Cond.h \
    ../../../PPTXFormat/Logic/Timing/CondLst.h \
    ../../../PPTXFormat/Logic/Timing/CTn.h \
    ../../../PPTXFormat/Logic/Timing/Excl.h \
    ../../../PPTXFormat/Logic/Timing/GraphicEl.h \
    ../../../PPTXFormat/Logic/Timing/Iterate.h \
    ../../../PPTXFormat/Logic/Timing/Par.h \
    ../../../PPTXFormat/Logic/Timing/Seq.h \
    ../../../PPTXFormat/Logic/Timing/Set.h \
    ../../../PPTXFormat/Logic/Timing/SpTgt.h \
    ../../../PPTXFormat/Logic/Timing/Tav.h \
    ../../../PPTXFormat/Logic/Timing/TavLst.h \
    ../../../PPTXFormat/Logic/Timing/TgtEl.h \
    ../../../PPTXFormat/Logic/Timing/TimeNodeBase.h \
    ../../../PPTXFormat/Logic/Timing/Timing.h \
    ../../../PPTXFormat/Logic/Timing/Tmpl.h \
    ../../../PPTXFormat/Logic/Timing/TmplLst.h \
    ../../../PPTXFormat/Logic/Timing/TnLst.h \
    ../../../PPTXFormat/Logic/Timing/TxEl.h \
    ../../../PPTXFormat/Logic/Timing/Video.h \
    ../../../PPTXFormat/Logic/Transitions/CornerDirectionTransition.h \
    ../../../PPTXFormat/Logic/Transitions/EightDirectionTransition.h \
    ../../../PPTXFormat/Logic/Transitions/EmptyTransition.h \
    ../../../PPTXFormat/Logic/Transitions/OptionalBlackTransition.h \
    ../../../PPTXFormat/Logic/Transitions/OrientationTransition.h \
    ../../../PPTXFormat/Logic/Transitions/SideDirectionTransition.h \
    ../../../PPTXFormat/Logic/Transitions/SndAc.h \
    ../../../PPTXFormat/Logic/Transitions/SplitTransition.h \
    ../../../PPTXFormat/Logic/Transitions/StSnd.h \
    ../../../PPTXFormat/Logic/Transitions/Transition.h \
    ../../../PPTXFormat/Logic/Transitions/TransitionBase.h \
    ../../../PPTXFormat/Logic/Transitions/WheelTransition.h \
    ../../../PPTXFormat/Logic/Transitions/ZoomTransition.h \
    ../../../PPTXFormat/Logic/Controls.h \
    ../../../PPTXFormat/Logic/Ah.h \
    ../../../PPTXFormat/Logic/AhBase.h \
    ../../../PPTXFormat/Logic/AhPolar.h \
    ../../../PPTXFormat/Logic/AhXY.h \
    ../../../PPTXFormat/Logic/Backdrop.h \
    ../../../PPTXFormat/Logic/Bevel.h \
    ../../../PPTXFormat/Logic/Bg.h \
    ../../../PPTXFormat/Logic/BgPr.h \
    ../../../PPTXFormat/Logic/BodyPr.h \
    ../../../PPTXFormat/Logic/Camera.h \
    ../../../PPTXFormat/Logic/Cell3D.h \
    ../../../PPTXFormat/Logic/ClrMap.h \
    ../../../PPTXFormat/Logic/ClrMapOvr.h \
    ../../../PPTXFormat/Logic/CNvCxnSpPr.h \
    ../../../PPTXFormat/Logic/CNvGraphicFramePr.h \
    ../../../PPTXFormat/Logic/CNvGrpSpPr.h \
    ../../../PPTXFormat/Logic/CNvPicPr.h \
    ../../../PPTXFormat/Logic/CNvPr.h \
    ../../../PPTXFormat/Logic/CNvSpPr.h \
    ../../../PPTXFormat/Logic/ContentPart.h \
    ../../../PPTXFormat/Logic/CSld.h \
    ../../../PPTXFormat/Logic/CustGeom.h \
    ../../../PPTXFormat/Logic/Cxn.h \
    ../../../PPTXFormat/Logic/CxnSp.h \
    ../../../PPTXFormat/Logic/DefaultShapeDefinition.h \
    ../../../PPTXFormat/Logic/EffectDag.h \
    ../../../PPTXFormat/Logic/EffectLst.h \
    ../../../PPTXFormat/Logic/EffectProperties.h \
    ../../../PPTXFormat/Logic/EffectStyle.h \
    ../../../PPTXFormat/Logic/ExtP.h \
    ../../../PPTXFormat/Logic/FillStyle.h \
    ../../../PPTXFormat/Logic/FontCollection.h \
    ../../../PPTXFormat/Logic/FontRef.h \
    ../../../PPTXFormat/Logic/Gd.h \
    ../../../PPTXFormat/Logic/Geometry.h \
    ../../../PPTXFormat/Logic/GraphicFrame.h \
    ../../../PPTXFormat/Logic/GrpSpPr.h \
    ../../../PPTXFormat/Logic/Gs.h \
    ../../../PPTXFormat/Logic/HeadingVariant.h \
    ../../../PPTXFormat/Logic/Hf.h \
    ../../../PPTXFormat/Logic/Hyperlink.h \
    ../../../PPTXFormat/Logic/LightRig.h \
    ../../../PPTXFormat/Logic/Lin.h \
    ../../../PPTXFormat/Logic/LineEnd.h \
    ../../../PPTXFormat/Logic/LineJoin.h \
    ../../../PPTXFormat/Logic/LineStyle.h \
    ../../../PPTXFormat/Logic/Ln.h \
    ../../../PPTXFormat/Logic/NvCxnSpPr.h \
    ../../../PPTXFormat/Logic/NvGraphicFramePr.h \
    ../../../PPTXFormat/Logic/NvGrpSpPr.h \
    ../../../PPTXFormat/Logic/NvPicPr.h \
    ../../../PPTXFormat/Logic/NvPr.h \
    ../../../PPTXFormat/Logic/NvSpPr.h \
    ../../../PPTXFormat/Logic/Paragraph.h \
    ../../../PPTXFormat/Logic/PartTitle.h \
    ../../../PPTXFormat/Logic/Path.h \
    ../../../PPTXFormat/Logic/Path2D.h \
    ../../../PPTXFormat/Logic/Ph.h \
    ../../../PPTXFormat/Logic/Pic.h \
    ../../../PPTXFormat/Logic/PrstDash.h \
    ../../../PPTXFormat/Logic/PrstGeom.h \
    ../../../PPTXFormat/Logic/PrstTxWarp.h \
    ../../../PPTXFormat/Logic/Rect.h \
    ../../../PPTXFormat/Logic/Rot.h \
    ../../../PPTXFormat/Logic/RunElem.h \
    ../../../PPTXFormat/Logic/RunProperties.h \
    ../../../PPTXFormat/Logic/Scene3d.h \
    ../../../PPTXFormat/Logic/Shape.h \
    ../../../PPTXFormat/Logic/ShapeStyle.h \
    ../../../PPTXFormat/Logic/SmartArt.h \
    ../../../PPTXFormat/Logic/Sp3d.h \
    ../../../PPTXFormat/Logic/SpPr.h \
    ../../../PPTXFormat/Logic/SpTree.h \
    ../../../PPTXFormat/Logic/SpTreeElem.h \
    ../../../PPTXFormat/Logic/StyleRef.h \
    ../../../PPTXFormat/Logic/SupplementalFont.h \
    ../../../PPTXFormat/Logic/Tab.h \
    ../../../PPTXFormat/Logic/TableBgStyle.h \
    ../../../PPTXFormat/Logic/TablePartStyle.h \
    ../../../PPTXFormat/Logic/TableStyle.h \
    ../../../PPTXFormat/Logic/TcBdr.h \
    ../../../PPTXFormat/Logic/TcStyle.h \
    ../../../PPTXFormat/Logic/TcTxStyle.h \
    ../../../PPTXFormat/Logic/TextFit.h \
    ../../../PPTXFormat/Logic/TextFont.h \
    ../../../PPTXFormat/Logic/TextListStyle.h \
    ../../../PPTXFormat/Logic/TextParagraphPr.h \
    ../../../PPTXFormat/Logic/TextSpacing.h \
    ../../../PPTXFormat/Logic/TxBody.h \
    ../../../PPTXFormat/Logic/TxStyles.h \
    ../../../PPTXFormat/Logic/UniColor.h \
    ../../../PPTXFormat/Logic/UniEffect.h \
    ../../../PPTXFormat/Logic/UniFill.h \
    ../../../PPTXFormat/Logic/UniMedia.h \
    ../../../PPTXFormat/Logic/UniPath2D.h \
    ../../../PPTXFormat/Logic/Xfrm.h \
    ../../../PPTXFormat/Logic/XmlId.h \
    ../../../PPTXFormat/Presentation/EmbeddedFont.h \
    ../../../PPTXFormat/Presentation/EmbeddedFontDataId.h \
    ../../../PPTXFormat/Presentation/Kinsoku.h \
    ../../../PPTXFormat/Presentation/NotesSz.h \
    ../../../PPTXFormat/Presentation/PhotoAlbum.h \
    ../../../PPTXFormat/Presentation/SldSz.h \
    ../../../PPTXFormat/Theme/ClrScheme.h \
    ../../../PPTXFormat/Theme/ExtraClrScheme.h \
    ../../../PPTXFormat/Theme/FmtScheme.h \
    ../../../PPTXFormat/Theme/FontScheme.h \
    ../../../PPTXFormat/Theme/ThemeElements.h \
    ../../../PPTXFormat/ViewProps/CSldViewPr.h \
    ../../../PPTXFormat/ViewProps/CViewPr.h \
    ../../../PPTXFormat/ViewProps/GridSpacing.h \
    ../../../PPTXFormat/ViewProps/Guide.h \
    ../../../PPTXFormat/ViewProps/NormalViewPr.h \
    ../../../PPTXFormat/ViewProps/NotesTextViewPr.h \
    ../../../PPTXFormat/ViewProps/NotesViewPr.h \
    ../../../PPTXFormat/ViewProps/Origin.h \
    ../../../PPTXFormat/ViewProps/OutlineViewPr.h \
    ../../../PPTXFormat/ViewProps/Ratio.h \
    ../../../PPTXFormat/ViewProps/Restored.h \
    ../../../PPTXFormat/ViewProps/Scale.h \
    ../../../PPTXFormat/ViewProps/Sld.h \
    ../../../PPTXFormat/ViewProps/SlideViewPr.h \
    ../../../PPTXFormat/ViewProps/SorterViewPr.h \
    ../../../PPTXFormat/App.h \
    ../../../PPTXFormat/CommentAuthors.h \
    ../../../PPTXFormat/Comments.h \
    ../../../PPTXFormat/LegacyDiagramText.h \
    ../../../PPTXFormat/Core.h \
    ../../../PPTXFormat/FileContainer.h \
    ../../../PPTXFormat/FileFactory.h \
    ../../../PPTXFormat/FileMap.h \
    ../../../PPTXFormat/Folder.h \
    ../../../PPTXFormat/HandoutMaster.h \
    ../../../PPTXFormat/NotesMaster.h \
    ../../../PPTXFormat/NotesSlide.h \
    ../../../PPTXFormat/PPTX.h \
    ../../../PPTXFormat/PPTXEvent.h \
    ../../../PPTXFormat/Presentation.h \
    ../../../PPTXFormat/PresProps.h \
    ../../../PPTXFormat/Slide.h \
    ../../../PPTXFormat/SlideLayout.h \
    ../../../PPTXFormat/SlideMaster.h \
    ../../../PPTXFormat/TableStyles.h \
    ../../../PPTXFormat/Theme.h \
    ../../../PPTXFormat/ViewProps.h \
    ../../../PPTXFormat/WrapperFile.h \
    ../../../PPTXFormat/WrapperWritingElement.h \
    ../../../Editor/BinaryFileReaderWriter.h \
    ../../../Editor/BinReaderWriterDefines.h \
    ../../../Editor/BinWriters.h \
    ../../../Editor/CalculatorCRC32.h \
    ../../../Editor/Converter.h \
    ../../../Editor/FontCutter.h \
    ../../../Editor/FontPicker.h \
    ../../../Editor/imagemanager.h \
    ../../../Editor/PPTXWriter.h \
    ../../../Editor/WMFToImageConverter.h \
     ../../../Editor/DefaultNotesMaster.h \
    ../../../Editor/DefaultNotesTheme.h \
    ../../../../Common/DocxFormat/Source/Base/Nullable.h \
    ../../../../HtmlRenderer/include/ASCSVGWriter.h \
    ../../../../Common/FileDownloader/FileDownloader.h \
    ../../../PPTXFormat/ShowPr/Browse.h \
    ../../../PPTXFormat/ShowPr/CustShow.h \
    ../../../PPTXFormat/ShowPr/Kiosk.h \
    ../../../PPTXFormat/ShowPr/Present.h \
    ../../../PPTXFormat/ShowPr/ShowPr.h \
    ../../../PPTXFormat/ShowPr/SldAll.h \
    ../../../PPTXFormat/ShowPr/SldRg.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/AccentBorderCallout2Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/AccentCallout1Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/AccentCallout2Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/AccentCallout3Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/AccentCallout90Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonBack.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonBeginning.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonBlank.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonDocument.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonEnd.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonHelp.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonHome.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonInfo.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonMovie.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonNext.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonReturn.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ActionButtonSound.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BentArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BentConnector.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BentUpArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BevelType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BlockArcType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BorderCallout1Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BorderCallout2Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BorderCallout3Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BorderCallout90Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BracePairType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/BracketPairType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Callout1Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Callout2Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Callout3Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Callout90Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CanType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ChevronType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CircularArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CloudCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CubeType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CurvedConnector.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CurvedDownArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CurvedLeftArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CurvedRightArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/CurvedUpArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/DiamondType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/DonutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/DownArrowCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/DownArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/EllipseRibbon2Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/EllipseRibbonType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/EllipseType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartAlternateProcessType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartCollateType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartConnectorType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartDecisionType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartDelayType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartDisplayType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartDocumentType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartExtractType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartInputOutputType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartInternalStorageType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartMagneticDiskType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartMagneticDrumType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartMagneticTapeType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartManualInputType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartManualOperationType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartMergeType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartMultidocumentType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartOffpageConnectorType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartOnlineStorageType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartOrType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartPredefinedProcessType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartPreparationType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartProcessType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartPunchedCardType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartPunchedTapeType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartSortType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartSummingJunctionType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FlowChartTerminatorType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/FoldedCornerType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/HeartType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/HexagonType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/HomePlateType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/HorisontalScrollType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/IrregularSealOneType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/IrregularSealTwo.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/IsoscelesTriangleType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftArrowCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftBraceType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftBracketType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftRightArrowCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftRightArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftRightUpArrow.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LeftUpArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LightningBoltType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/LineType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/MoonType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/NoSmokingType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/NotchedRightArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/OctagonType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/ParallelogramType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/PentagonType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/PlaqueType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/PlusType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/QuadArrowCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/QuadArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RectangleType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RibbonDownType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RibbonUpType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RightArrowCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RightArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RightBracetype.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RightBracketType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RightTriangleType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/RoundedRectangleType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Seal4Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Seal8Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Seal16Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Seal24Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Seal32Type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/SmileyFaceType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/Startype.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/StraightConnectorType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/StripedRightArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/SunType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/TextboxType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/TrapezoidType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/UpArrowCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/UpArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/UpDownArrowCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/UpDownArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/UturnArrowType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/VerticalScrollType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/WaveDoubleType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/WaveType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/WedgeEllipseCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/WedgeRectCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/WedgeRoundedRectCalloutType.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/accentbordercallout1type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/accentbordercallout3type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/accentbordercallout90type.h \
    ../../../Editor/Drawing/Shapes/BaseShape/PPTShape/PPTAutoShapes/arctype.h
