﻿/*
 * (c) Copyright Ascensio System SIA 2010-2019
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at 20A-12 Ernesta Birznieka-Upisha
 * street, Riga, Latvia, EU, LV-1050.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */

//#include "../Source/Common/Align.cpp"
//#include "../Source/Common/Color.cpp"
//#include "../Source/Common/Index.cpp"
//#include "../Source/Common/NumFormat.cpp"
//#include "../Source/Common/Position.cpp"
//#include "../Source/Common/Wrap.cpp"
//#include "../Source/Common/ZIndex.cpp"

#include "../Source/Common/SimpleTypes_Word.cpp"
#include "../Source/SystemUtility/SystemUtility.cpp"

#include "../Source/Base/Nullable.cpp"
#include "../Source/Common/SimpleTypes_Base/SimpleType.cpp"
#include "../Source/Common/SimpleTypes_Base/Double.cpp"
#include "../Source/Common/SimpleTypes_Base/DecimalNumber.cpp"
#include "../Source/Common/SimpleTypes_Base/Point.cpp"
#include "../Source/Common/SimpleTypes_Base/Inch.cpp"
#include "../Source/Common/SimpleTypes_Base/Emu.cpp"
#include "../Source/Common/SimpleTypes_Base/UniversalMeasure.cpp"
#include "../Source/Common/SimpleTypes_Base/UniversalMeasureOrPercent.cpp"
#include "../Source/Common/SimpleTypes_Shared/TrueFalse.cpp"
#include "../Source/Common/SimpleTypes_Shared/ColorType.cpp"
#include "../Source/Common/SimpleTypes_Shared/OnOff.cpp"
#include "../Source/Common/SimpleTypes_Shared/Bool.cpp"
#include "../Source/Common/SimpleTypes_Shared/XAlign.cpp"
#include "../Source/Common/SimpleTypes_Shared/YAlign.cpp"
#include "../Source/Common/SimpleTypes_Word/Border.cpp"
#include "../Source/Common/SimpleTypes_Word/NumberFormat.cpp"
#include "../Source/Common/SimpleTypes_Word/DocPartGallery.cpp"
#include "../Source/Common/SimpleTypes_Word/HpsMeasure.cpp"
#include "../Source/Common/SimpleTypes_Word/SignedHpsMeasure.cpp"
#include "../Source/Common/SimpleTypes_Word/SignedTwipsMeasure.cpp"
#include "../Source/Common/SimpleTypes_Word/LongHexNumber.cpp"
#include "../Source/Common/SimpleTypes_Word/PointMeasure.cpp"
#include "../Source/Common/SimpleTypes_Word/DateTime.cpp"
#include "../Source/Common/SimpleTypes_Word/ThemeColor.cpp"
#include "../Source/Common/SimpleTypes_Word/HighlightColor.cpp"
#include "../Source/Common/SimpleTypes_Word/FontCharset.cpp"
#include "../Source/Common/SimpleTypes_Word/WmlColorSchemeIndex.cpp"
#include "../Source/Common/SimpleTypes_Word/FtnEdn.cpp"
#include "../Source/Common/SimpleTypes_Word/FtnPos.cpp"
#include "../Source/Common/SimpleTypes_Word/Cnf.cpp"
#include "../Source/Common/SimpleTypes_Word/CryptAlgoritmName.cpp"
#include "../Source/Common/SimpleTypes_Word/Jc.cpp"
#include "../Source/Common/SimpleTypes_Word/Ligatures.cpp"
#include "../Source/Common/SimpleTypes_Word/MailMergeSourceType.cpp"
#include "../Source/Common/SimpleTypes_Word/PitchFamily.cpp"
#include "../Source/Common/SimpleTypes_Word/Shd.cpp"
#include "../Source/Common/SimpleTypes_Word/TargetScreenSz.cpp"
#include "../Source/Common/SimpleTypes_Word/TblStyleOverrideType.cpp"
#include "../Source/Common/SimpleTypes_Word/Underline.cpp"
#include "../Source/Common/SimpleTypes_Drawing/PresetColorVal.cpp"
#include "../Source/Common/SimpleTypes_Drawing/ShapeType.cpp"
#include "../Source/Common/SimpleTypes_Drawing/SystemColorVal.cpp"
#include "../Source/Common/SimpleTypes_Drawing/ConstraintType.cpp"
#include "../Source/Common/SimpleTypes_Drawing/TextShapeType.cpp"
#include "../Source/Common/SimpleTypes_Drawing/ParameterId.cpp"
#include "../Source/Common/SimpleTypes_Drawing/Coordinate.cpp"
#include "../Source/Common/SimpleTypes_Drawing/PresetPatternVal.cpp"
#include "../Source/Common/SimpleTypes_Drawing/PresetCameraType.cpp"
#include "../Source/Common/SimpleTypes_Drawing/AlignH.cpp"
#include "../Source/Common/SimpleTypes_Drawing/AlignV.cpp"
#include "../Source/Common/SimpleTypes_Drawing/ColorSchemeIndex.cpp"
#include "../Source/Common/SimpleTypes_Drawing/LightRigType.cpp"
#include "../Source/Common/SimpleTypes_Drawing/PresetLineDashVal.cpp"
#include "../Source/Common/SimpleTypes_Drawing/PresetMaterialType.cpp"
#include "../Source/Common/SimpleTypes_Drawing/PresetShadowVal.cpp"
#include "../Source/Common/SimpleTypes_Drawing/ShemeColorVal.cpp"
#include "../Source/Common/SimpleTypes_Drawing/LineWidth.cpp"
#include "../Source/Common/SimpleTypes_Drawing/PositionOffset.cpp"
#include "../Source/Common/SimpleTypes_Drawing/TextMargin.cpp"
#include "../Source/Common/SimpleTypes_Drawing/BoolOperator.cpp"
#include "../Source/Common/SimpleTypes_OMath/BreakBin.cpp"
#include "../Source/Common/SimpleTypes_OMath/BreakBinSub.cpp"
#include "../Source/Common/SimpleTypes_OMath/FType.cpp"
#include "../Source/Common/SimpleTypes_OMath/Integer2.cpp"
#include "../Source/Common/SimpleTypes_OMath/Integer255.cpp"
#include "../Source/Common/SimpleTypes_OMath/LimLoc.cpp"
#include "../Source/Common/SimpleTypes_OMath/MChar.cpp"
#include "../Source/Common/SimpleTypes_OMath/MJc.cpp"
#include "../Source/Common/SimpleTypes_OMath/Script.cpp"
#include "../Source/Common/SimpleTypes_OMath/Shp.cpp"
#include "../Source/Common/SimpleTypes_OMath/SpacingRule.cpp"
#include "../Source/Common/SimpleTypes_OMath/Style.cpp"
#include "../Source/Common/SimpleTypes_OMath/TopBot.cpp"
#include "../Source/Common/SimpleTypes_OMath/UnSignedInteger.cpp"
#include "../Source/Common/ComplexTypes/OnOff.cpp"
#include "../Source/Common/ComplexTypes/OnOff2.cpp"
#include "../Source/Common/ComplexTypes/String.cpp"
#include "../Source/Common/ComplexTypes/Color.cpp"
#include "../Source/Common/ComplexTypes/Fonts.cpp"
#include "../Source/Common/ComplexTypes/LongHexNumber.cpp"
#include "../Source/Common/ComplexTypes/DecimalNumber.cpp"
#include "../Source/Common/ComplexTypes/DecimalNumberWord.cpp"
#include "../Source/Common/ComplexTypes/UnsignedDecimalNumber.cpp"
