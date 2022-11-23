﻿/*
 * (c) Copyright Ascensio System SIA 2010-2019
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section drawCustom(a) of the GNU AGPL its Section 15 shall be amended to the effect
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
 * Pursuant to Section drawCustom(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section drawCustom(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#pragma once

namespace cpdoccore
{
	enum eOdfDrawElements
	{
		drawFrame = 0,
		drawCaption = 1,
		drawRect = 2,
		drawEllipse = 3,
		drawCircle = 4,
		drawLine = 5,
		drawPath = 6,
		drawCustom = 7,
		drawPolygon = 8,
		drawConnector = 9,
		drawCurveConnector = 10,
		drawGroup = 5000
	};
	struct _sh_typ
	{
		std::wstring first;
		eOdfDrawElements second;
	};

	static const _sh_typ Shape_Types_Mapping[] = // index === OOX::Drawing::EShapeType
	{
		{	L""								,  drawCustom},			//	shapetypeAccentBorderCallout1 = 0,
		{	L""								,  drawCustom},			//	shapetypeAccentBorderCallout2,
		{	L""								,  drawCustom},			//	shapetypeAccentBorderCallout3,
		{	L""								,  drawCustom},			//	shapetypeAccentCallout1,
		{	L""								,  drawCustom},			//	shapetypeAccentCallout2,
		{	L""								,  drawCustom},			//	shapetypeAccentCallout3, 
		{	L"actionButtonBackPrevious"		,  drawCustom},			//	shapetypeActionButtonBackPrevious,	//mso-spt194
		{	L"mso-spt196"					,  drawCustom},			//	shapetypeActionButtonBeginning,
		{	L"mso-spt189"					,  drawCustom},			//	shapetypeActionButtonBlank,
		{	L"mso-spt198"					,  drawCustom},			//	shapetypeActionButtonDocument,
		{	L"mso-spt195"					,  drawCustom},			//	shapetypeActionButtonEnd,
		{	L"mso-spt193"					,  drawCustom},			//	shapetypeActionButtonForwardNext,
		{	L"mso-spt191"					,  drawCustom},			//	shapetypeActionButtonHelp,
		{	L"mso-spt190"					,  drawCustom},			//	shapetypeActionButtonHome,
		{	L"mso-spt192"					,  drawCustom},			//	shapetypeActionButtonInformation,
		{	L"mso-spt200"					,  drawCustom},			//	shapetypeActionButtonMovie,
		{	L"mso-spt19drawCustom"			,  drawCustom},			//	shapetypeActionButtonReturn,
		{	L"mso-spt199"					,  drawCustom},			//	shapetypeActionButtonSound,
		{	L""								,  drawCustom},			//	shapetypeArc,
		{	L""								,  drawCustom},			//	shapetypeBentArrow,
		{	L""								,  drawConnector},		//	shapetypeBentConnector2,
		{	L""								,  drawConnector},		//	shapetypeBentConnector3,
		{	L""								,  drawConnector},		//	shapetypeBentConnector4,
		{	L""								,  drawConnector},		//	shapetypeBentConnector5,
		{	L""								,  drawCustom},			//	shapetypeBentUpArrow,
		{	L""								,  drawCustom},			//	shapetypeBevel,
		{	L""								,  drawCustom},			//	shapetypeBlockArc,
		{	L""								,  drawCustom},			//	shapetypeBorderCallout1,
		{	L""								,  drawCustom},			//	shapetypeBorderCallout2,
		{	L""								,  drawCustom},			//	shapetypeBorderCallout3,
		{	L""								,  drawCustom},			//	shapetypeBracePair,
		{	L""								,  drawCustom},			//	shapetypeBracketPair,
		{	L""								,  drawCustom},			//	shapetypeCallout1,
		{	L""								,  drawCustom},			//	shapetypeCallout2,
		{	L""								,  drawCustom},			//	shapetypeCallout3,
		{	L""								,  drawCustom},			//	shapetypeCan,
		{	L""								,  drawCustom},			//	shapetypeChartPlus,
		{	L""								,  drawCustom},			//	shapetypeChartStar,
		{	L""								,  drawCustom},			//	shapetypeChartX,
		{	L""								,  drawCustom},			//	shapetypeChevron,
		{	L""								,  drawCustom},			//	shapetypeChord,
		{	L""								,  drawCustom},			//	shapetypeCircularArrow,
		{	L"cloud"						,  drawCustom},			//	shapetypeCloud,
		{	L""								,  drawCustom},			//	shapetypeCloudCallout,
		{	L""								,  drawCustom},			//	shapetypeCorner,
		{	L""								,  drawCustom},			//	shapetypeCornerTabs,
		{	L""								,  drawCustom},			//	shapetypeCube,
		{	L""								,  drawCurveConnector},	//	shapetypeCurvedConnector2,
		{	L""								,  drawCurveConnector},	//	shapetypeCurvedConnector3,
		{	L""								,  drawCurveConnector},	//	shapetypeCurvedConnector4,
		{	L""								,  drawCurveConnector},	//	shapetypeCurvedConnector5,
		{	L""								,  drawCustom},			//	shapetypeCurvedDownArrow,
		{	L""								,  drawCustom},			//	shapetypeCurvedLeftArrow,
		{	L""								,  drawCustom},			//	shapetypeCurvedRightArrow,
		{	L""								,  drawCustom},			//	shapetypeCurvedUpArrow,
		{	L""								,  drawCustom},			//	shapetypeDecagon,
		{	L""								,  drawCustom},			//	shapetypeDiagStripe,
		{	L""								,  drawCustom},			//	shapetypeDiamond,
		{	L""								,  drawCustom},			//	shapetypeDodecagon,
		{	L""								,  drawCustom},			//	shapetypeDonut,
		{	L""								,  drawCustom},			//	shapetypeDoubleWave,
		{	L""								,  drawCustom},			//	shapetypeDownArrow,
		{	L""								,  drawCustom},			//	shapetypeDownArrowCallout,
		{	L"ellipse"						,  drawEllipse},			//	shapetypeEllipse,
		{	L""								,  drawCustom},			//	shapetypeEllipseRibbon,
		{	L""								,  drawCustom},			//	shapetypeEllipseRibbon2,
		{	L"flowchart-alternate-process"	,  drawCustom},			//	shapetypeFlowChartAlternateProcess,
		{	L"flowchart-collate"			,  drawCustom},			//	shapetypeFlowChartCollate,
		{	L"flowchart-connector"			,  drawCustom},			//	shapetypeFlowChartConnector,
		{	L"flowchart-decision"			,  drawCustom},			//	shapetypeFlowChartDecision,
		{	L"flowchart-delay"				,  drawCustom},			//	shapetypeFlowChartDelay,
		{	L"flowchart-display"			,  drawCustom},			//	shapetypeFlowChartDisplay,
		{	L"flowchart-document"			,  drawCustom},			//	shapetypeFlowChartDocument,
		{	L""								,  drawCustom},			//	shapetypeFlowChartExtract,
		{	L"flowchart-data"				,  drawCustom},			//	shapetypeFlowChartInputOutput,
		{	L"flowchart-internal-storage"	,  drawCustom},			//	shapetypeFlowChartInternalStorage,
		{	L"flowchart-magnetic-disk"		,  drawCustom},			//	shapetypeFlowChartMagneticDisk,
		{	L"mso-spt129"					,  drawCustom},			//	shapetypeFlowChartMagneticDrum,
		{	L"flowchart-sequential-access"	,  drawCustom},			//	shapetypeFlowChartMagneticTape,
		{	L"flowchart-manual-input"		,  drawCustom},			//	shapetypeFlowChartManualInput,
		{	L"flowchart-manual-operation"	,  drawCustom},			//	shapetypeFlowChartManualOperation,
		{	L"flowchart-merge"				,  drawCustom},			//	shapetypeFlowChartMerge,
		{	L"flowchart-multidocument"		,  drawCustom},			//	shapetypeFlowChartMultidocument,
		{	L""								,  drawCustom},			//	shapetypeFlowChartOfflineStorage,
		{	L"flowchart-off-page-connector"	,  drawCustom},			//	shapetypeFlowChartOffpageConnector,
		{	L"flowchart-stored-data"		,  drawCustom},			//	shapetypeFlowChartOnlineStorage,
		{	L"flowchart-or"					,  drawCustom},			//	shapetypeFlowChartOr,
		{	L"flowchart-predefined-process"	,  drawCustom},			//	shapetypeFlowChartPredefinedProcess,
		{	L"flowchart-preparation"		,  drawCustom},			//	shapetypeFlowChartPreparation,
		{	L"flowchart-process"			,  drawCustom},			//	shapetypeFlowChartProcess,
		{	L"flowchart-card"				,  drawCustom},			//	shapetypeFlowChartPunchedCard,
		{	L"flowchart-punched-tape"		,  drawCustom},			//	shapetypeFlowChartPunchedTape,
		{	L"flowchart-sort"				,  drawCustom},			//	shapetypeFlowChartSort,
		{	L"flowchart-summing-junction"	,  drawCustom},			//	shapetypeFlowChartSummingJunction,
		{	L"flowchart-terminator"			,  drawCustom},			//	shapetypeFlowChartTerminator,
		{	L""								,  drawCustom},			//	shapetypeFoldedCorner,
		{	L""								,  drawCustom},			//	shapetypeFrame,
		{	L""								,  drawCustom},			//	shapetypeFunnel,
		{	L""								,  drawCustom},			//	shapetypeGear6,
		{	L""								,  drawCustom},			//	shapetypeGear9,
		{	L""								,  drawCustom},			//	shapetypeHalfFrame,
		{	L""								,  drawCustom},			//	shapetypeHeart,
		{	L""								,  drawCustom},			//	shapetypeHeptagon,
		{	L""								,  drawCustom},			//	shapetypeHexagon,
		{	L""								,  drawCustom},			//	shapetypeHomePlate,
		{	L"horizontal-scroll"			,  drawCustom},			//	shapetypeHorizontalScroll,
		{	L""								,  drawCustom},			//	shapetypeIrregularSeal1,
		{	L""								,  drawCustom},			//	shapetypeIrregularSeal2,
		{	L""								,  drawCustom},			//	shapetypeLeftArrow,
		{	L""								,  drawCustom},			//	shapetypeLeftArrowCallout,
		{	L""								,  drawCustom},			//	shapetypeLeftBrace,
		{	L""								,  drawCustom},			//	shapetypeLeftBracket,
		{	L""								,  drawCustom},			//	shapetypeLeftCircularArrow,
		{	L""								,  drawCustom},			//	shapetypeLeftRightArrow,
		{	L"left-right-arrow-callout"		,  drawCustom},			//	shapetypeLeftRightArrowCallout,
		{	L""								,  drawCustom},			//	shapetypeLeftRightCircularArrow,
		{	L""								,  drawCustom},			//	shapetypeLeftRightRibbon,
		{	L""								,  drawCustom},			//	shapetypeLeftRightUpArrow,
		{	L""								,  drawCustom},			//	shapetypeLeftUpArrow,
		{	L""								,  drawCustom},			//	shapetypeLightningBolt,
		{	L""								,  drawLine},			//	shapetypeLine,
		{	L""								,  drawCustom},			//	shapetypeLineInv,
		{	L""								,  drawCustom},			//	shapetypeMathDivide,
		{	L""								,  drawCustom},			//	shapetypeMathEqual,
		{	L""								,  drawCustom},			//	shapetypeMathMinus,
		{	L""								,  drawCustom},			//	shapetypeMathMultiply,
		{	L""								,  drawCustom},			//	shapetypeMathNotEqual,
		{	L""								,  drawCustom},			//	shapetypeMathPlus,
		{	L""								,  drawCustom},			//	shapetypeMoon,
		{	L""								,  drawCustom},			//	shapetypeNonIsoscelesTrapezoid,
		{	L"forbidden"					,  drawCustom},			//	shapetypeNoSmoking,
		{	L""								,  drawCustom},			//	shapetypeNotchedRightArrow,
		{	L""								,  drawCustom},			//	shapetypeOctagon,
		{	L""								,  drawCustom},			//	shapetypeParallelogram,
		{	L""								,  drawCustom},			//	shapetypePentagon,
		{	L""								,  drawCustom},			//	shapetypePie,
		{	L""								,  drawCustom},			//	shapetypePieWedge,
		{	L""								,  drawCustom},			//	shapetypePlaque,
		{	L""								,  drawCustom},			//	shapetypePlaqueTabs,
		{	L""								,  drawCustom},			//	shapetypePlus,
		{	L"quad-arrow"					,  drawCustom},			//	shapetypeQuadArrow,
		{	L""								,  drawCustom},			//	shapetypeQuadArrowCallout,
		{	L"rectangle"					,  drawRect},			//	shapetypeRect,
		{	L""								,  drawCustom},			//	shapetypeRibbon,
		{	L""								,  drawCustom},			//	shapetypeRibbon2,
		{	L""								,  drawCustom},			//	shapetypeRightArrow,
		{	L""								,  drawCustom},			//	shapetypeRightArrowCallout,
		{	L""								,  drawCustom},			//	shapetypeRightBrace,
		{	L""								,  drawCustom},			//	shapetypeRightBracket,
		{	L""								,  drawCustom},			//	shapetypeRound1Rect,
		{	L""								,  drawCustom},			//	shapetypeRound2DiagRect,
		{	L""								,  drawCustom},			//	shapetypeRound2SameRect,
		{	L""								,  drawCustom},			//	shapetypeRoundRect,
		{	L""								,  drawCustom},			//	shapetypeRtTriangle,
		{	L"smiley"						,  drawCustom},			//	shapetypeSmileyFace,
		{	L""								,  drawCustom},			//	shapetypeSnip1Rect,
		{	L""								,  drawCustom},			//	shapetypeSnip2DiagRect,
		{	L""								,  drawCustom},			//	shapetypeSnip2SameRect,
		{	L""								,  drawCustom},			//	shapetypeSnipRoundRect,
		{	L""								,  drawCustom},			//	shapetypeSquareTabs,
		{	L""								,  drawCustom},			//	shapetypeStar10,
		{	L""								,  drawCustom},			//	shapetypeStar12,
		{	L""								,  drawCustom},			//	shapetypeStar16,
		{	L"star24"						,  drawCustom},			//	shapetypeStar24,				//mso-spt59
		{	L"mso-spt60"					,  drawCustom},			//	shapetypeStar32,
		{	L"star4"						,  drawCustom},			//	shapetypeStar4,
		{	L"star5"						,  drawCustom},			//	shapetypeStar5,
		{	L""								,  drawCustom},			//	shapetypeStar6,
		{	L""								,  drawCustom},			//	shapetypeStardrawCustom,
		{	L"star8"						,  drawCustom},			//	shapetypeStar8,
		{	L""								,  drawLine},			//	shapetypeStraightConnector1,
		{	L"striped-right-arrow"			,  drawCustom},			//	shapetypeStripedRightArrow,
		{	L""								,  drawCustom},			//	shapetypeSun,
		{	L""								,  drawCustom},			//	shapetypeSwooshArrow,
		{	L""								,  drawCustom},			//	shapetypeTeardrop,
		{	L""								,  drawCustom},			//	shapetypeTrapezoid,
		{	L""								,  drawCustom},			//	shapetypeTriangle,
		{	L""								,  drawCustom},			//	shapetypeUpArrow,
		{	L""								,  drawCustom},			//	shapetypeUpArrowCallout,
		{	L""								,  drawCustom},			//	shapetypeUpDownArrow,
		{	L"up-down-arrow-callout"		,  drawCustom},			//	shapetypeUpDownArrowCallout,
		{	L"mso-spt101"					,  drawCustom},			//	shapetypeUturnArrow,
		{	L"vertical-scroll"				,  drawCustom},			//	shapetypeVerticalScroll,
		{	L""								,  drawCustom},			//	shapetypeWave,
		{	L""								,  drawCustom},			//	shapetypeWedgeEllipseCallout,
		{	L""								,  drawCustom},			//	shapetypeWedgeRectCallout,
		{	L""								,  drawCustom},			//	shapetypeWedgeRoundRectCallout,
		{	L"mso-spt1drawCustom"			,  drawCustom},			//	shapetypeBallon,
		{	L"up-right-arrow"				,  drawCustom},			//	shapetypeRightUpArrow,
		{	L"fontwork-arch-down-pour"		,  drawCustom},			//	shapetypeTextArchDownPour,
		{	L"fontwork-arch-up-pour"		,  drawCustom},			//	shapetypeTextArchUpPour,
		{	L"mso-spt1drawCustom5"			,  drawCustom},			//	shapetypeTextCanDown,
		{	L"mso-spt1drawCustom4"			,  drawCustom},			//	shapetypeTextCanUp,
		{	L"fontwork-circle-pour"			,  drawCustom},			//	shapetypeTextCirclePour,
		{	L"fontwork-curve-down"			,  drawCustom},			//	shapetypeTextCurveDown,
		{	L"fontwork-curve-up"			,  drawCustom},			//	shapetypeTextCurveUp,
		{	L"mso-spt161"					,  drawCustom},			//	shapetypeTextDeflate,
		{	L"mso-spt163"					,  drawCustom},			//	shapetypeTextDeflateBottom,
		{	L"mso-spt166"					,  drawCustom},			//	shapetypeTextDeflateInflate,
		{	L"mso-spt16drawCustom"			,  drawCustom},			//	shapetypeTextDeflateInflateDeflat,
		{	L"mso-spt165"					,  drawCustom},			//	shapetypeTextDeflateTop,
		{	L"mso-spt158"					,  drawCustom},			//	shapetypeTextDoubleWave1,
		{	L"fontwork-fade-down"			,  drawCustom},			//	shapetypeTextFadeDown,
		{	L"fontwork-fade-left"			,  drawCustom},			//	shapetypeTextFadeLeft,
		{	L"fontwork-fade-right"			,  drawCustom},			//	shapetypeTextFadeRight,
		{	L"fontwork-fade-up"				,  drawCustom},			//	shapetypeTextFadeUp,
		{	L"mso-spt162"					,  drawCustom},			//	shapetypeTextInflateBottom,
		{	L"mso-spt164"					,  drawCustom},			//	shapetypeTextInflateTop,
		{	L"mso-spt142"					,  drawCustom},			//	shapetypeTextRingInside,
		{	L"mso-spt143"					,  drawCustom},			//	shapetypeTextRingOutside,
		{	L"fontwork-wave"				,  drawCustom},			//	shapetypeTextWave1,
		{	L"mso-spt15drawCustom"			,  drawCustom},			//	shapetypeTextWave2,
		{	L"mso-spt159"					,  drawCustom},			//	shapetypeTextWave4,
		{	L"mso-spt14"					,  drawCustom}			//	shapetypeThickArrow
	};
}