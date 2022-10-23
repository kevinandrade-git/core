/*
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

#include "../SimpleTypes_Drawing.h"

namespace SimpleTypes
{
	//--------------------------------------------------------------------------------
    // ShapeType 20.1.10.56 (Part 1)
    //--------------------------------------------------------------------------------

    template<EShapeType eDefValue>
    CShapeType<eDefValue>::CShapeType() {}

    template<EShapeType eDefValue>
    EShapeType CShapeType<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'a':

            if      ( (L"accentBorderCallout1")	== sValue ) this->m_eValue = shapetypeAccentBorderCallout1;
            else if ( (L"accentBorderCallout2")	== sValue ) this->m_eValue = shapetypeAccentBorderCallout2;
            else if ( (L"accentBorderCallout3")	== sValue ) this->m_eValue = shapetypeAccentBorderCallout3;
            else if ( (L"accentCallout1")			== sValue ) this->m_eValue = shapetypeAccentCallout1;
            else if ( (L"accentCallout2")			== sValue ) this->m_eValue = shapetypeAccentCallout2;
            else if ( (L"accentCallout3")			== sValue ) this->m_eValue = shapetypeAccentCallout3;
            else if ( (L"actionButtonBackPrevious")== sValue ) this->m_eValue = shapetypeActionButtonBackPrevious;
            else if ( (L"actionButtonBeginning")	== sValue ) this->m_eValue = shapetypeActionButtonBeginning;
            else if ( (L"actionButtonBlank")		== sValue ) this->m_eValue = shapetypeActionButtonBlank;
            else if ( (L"actionButtonDocument")	== sValue ) this->m_eValue = shapetypeActionButtonDocument;
            else if ( (L"actionButtonEnd")			== sValue ) this->m_eValue = shapetypeActionButtonEnd;
            else if ( (L"actionButtonForwardNext")	== sValue ) this->m_eValue = shapetypeActionButtonForwardNext;
            else if ( (L"actionButtonHelp")		== sValue ) this->m_eValue = shapetypeActionButtonHelp;
            else if ( (L"actionButtonHome")		== sValue ) this->m_eValue = shapetypeActionButtonHome;
            else if ( (L"actionButtonInformation")	== sValue ) this->m_eValue = shapetypeActionButtonInformation;
            else if ( (L"actionButtonMovie")		== sValue ) this->m_eValue = shapetypeActionButtonMovie;
            else if ( (L"actionButtonReturn")		== sValue ) this->m_eValue = shapetypeActionButtonReturn;
            else if ( (L"actionButtonSound")		== sValue ) this->m_eValue = shapetypeActionButtonSound;
            else if ( (L"arc")						== sValue ) this->m_eValue = shapetypeArc;
            break;

        case 'b':
            if      ( (L"bentArrow")				== sValue ) this->m_eValue = shapetypeBentArrow;
            else if ( (L"bentConnector2")			== sValue ) this->m_eValue = shapetypeBentConnector2;
            else if ( (L"bentConnector3")			== sValue ) this->m_eValue = shapetypeBentConnector3;
            else if ( (L"bentConnector4")			== sValue ) this->m_eValue = shapetypeBentConnector4;
            else if ( (L"bentConnector5")			== sValue ) this->m_eValue = shapetypeBentConnector5;
            else if ( (L"bentUpArrow")				== sValue ) this->m_eValue = shapetypeBentUpArrow;
            else if ( (L"bevel")					== sValue ) this->m_eValue = shapetypeBevel;
            else if ( (L"blockArc")				== sValue ) this->m_eValue = shapetypeBlockArc;
            else if ( (L"borderCallout1")			== sValue ) this->m_eValue = shapetypeBorderCallout1;
            else if ( (L"borderCallout2")			== sValue ) this->m_eValue = shapetypeBorderCallout2;
            else if ( (L"borderCallout3")			== sValue ) this->m_eValue = shapetypeBorderCallout3;
            else if ( (L"bracePair")				== sValue ) this->m_eValue = shapetypeBracePair;
            else if ( (L"bracketPair")				== sValue ) this->m_eValue = shapetypeBracketPair;
    /////new
            else if ( (L"Balloon") 				== sValue ) this->m_eValue = shapetypeBallon;
            break;

        case 'c':
            if      ( (L"callout1")				== sValue ) this->m_eValue = shapetypeCallout1;
            else if ( (L"callout2")				== sValue ) this->m_eValue = shapetypeCallout2;
            else if ( (L"callout3")				== sValue ) this->m_eValue = shapetypeCallout3;
            else if ( (L"can")						== sValue ) this->m_eValue = shapetypeCan;
            else if ( (L"chartPlus")				== sValue ) this->m_eValue = shapetypeChartPlus;
            else if ( (L"chartStar")				== sValue ) this->m_eValue = shapetypeChartStar;
            else if ( (L"chartX")					== sValue ) this->m_eValue = shapetypeChartX;
            else if ( (L"chevron")					== sValue ) this->m_eValue = shapetypeChevron;
            else if ( (L"chord")					== sValue ) this->m_eValue = shapetypeChord;
            else if ( (L"circularArrow")			== sValue ) this->m_eValue = shapetypeCircularArrow;
            else if ( (L"cloud")					== sValue ) this->m_eValue = shapetypeCloud;
            else if ( (L"cloudCallout")			== sValue ) this->m_eValue = shapetypeCloudCallout;
            else if ( (L"corner")					== sValue ) this->m_eValue = shapetypeCorner;
            else if ( (L"cornerTabs")				== sValue ) this->m_eValue = shapetypeCornerTabs;
            else if ( (L"cube")					== sValue ) this->m_eValue = shapetypeCube;
            else if ( (L"curvedConnector2")		== sValue ) this->m_eValue = shapetypeCurvedConnector2;
            else if ( (L"curvedConnector3")		== sValue ) this->m_eValue = shapetypeCurvedConnector3;
            else if ( (L"curvedConnector4")		== sValue ) this->m_eValue = shapetypeCurvedConnector4;
            else if ( (L"curvedConnector5")		== sValue ) this->m_eValue = shapetypeCurvedConnector5;
            else if ( (L"curvedDownArrow")			== sValue ) this->m_eValue = shapetypeCurvedDownArrow;
            else if ( (L"curvedLeftArrow")			== sValue ) this->m_eValue = shapetypeCurvedLeftArrow;
            else if ( (L"curvedRightArrow")		== sValue ) this->m_eValue = shapetypeCurvedRightArrow;
            else if ( (L"curvedUpArrow")			== sValue ) this->m_eValue = shapetypeCurvedUpArrow;
            break;

        case 'd':
            if      ( (L"decagon")					== sValue ) this->m_eValue = shapetypeDecagon;
            else if ( (L"diagStripe")				== sValue ) this->m_eValue = shapetypeDiagStripe;
            else if ( (L"diamond")					== sValue ) this->m_eValue = shapetypeDiamond;
            else if ( (L"dodecagon")				== sValue ) this->m_eValue = shapetypeDodecagon;
            else if ( (L"donut")					== sValue ) this->m_eValue = shapetypeDonut;
            else if ( (L"doubleWave")				== sValue ) this->m_eValue = shapetypeDoubleWave;
            else if ( (L"downArrow")				== sValue ) this->m_eValue = shapetypeDownArrow;
            else if ( (L"downArrowCallout")		== sValue ) this->m_eValue = shapetypeDownArrowCallout;
            break;

        case 'e':
            if      ( (L"ellipse")					== sValue ) this->m_eValue = shapetypeEllipse;
            else if ( (L"ellipseRibbon")			== sValue ) this->m_eValue = shapetypeEllipseRibbon;
            else if ( (L"ellipseRibbon2")			== sValue ) this->m_eValue = shapetypeEllipseRibbon2;
            break;

        case 'f':
            if      ( (L"flowChartAlternateProcess")	== sValue ) this->m_eValue = shapetypeFlowChartAlternateProcess;
            else if ( (L"flowChartCollate")			== sValue ) this->m_eValue = shapetypeFlowChartCollate;
            else if ( (L"flowChartConnector")			== sValue ) this->m_eValue = shapetypeFlowChartConnector;
            else if ( (L"flowChartDecision")			== sValue ) this->m_eValue = shapetypeFlowChartDecision;
            else if ( (L"flowChartDelay")				== sValue ) this->m_eValue = shapetypeFlowChartDelay;
            else if ( (L"flowChartDisplay")			== sValue ) this->m_eValue = shapetypeFlowChartDisplay;
            else if ( (L"flowChartDocument")			== sValue ) this->m_eValue = shapetypeFlowChartDocument;
            else if ( (L"flowChartExtract")			== sValue ) this->m_eValue = shapetypeFlowChartExtract;
            else if ( (L"flowChartInputOutput")		== sValue ) this->m_eValue = shapetypeFlowChartInputOutput;
            else if ( (L"flowChartInternalStorage")	== sValue ) this->m_eValue = shapetypeFlowChartInternalStorage;
            else if ( (L"flowChartMagneticDisk")		== sValue ) this->m_eValue = shapetypeFlowChartMagneticDisk;
            else if ( (L"flowChartMagneticDrum")		== sValue ) this->m_eValue = shapetypeFlowChartMagneticDrum;
            else if ( (L"flowChartMagneticTape")		== sValue ) this->m_eValue = shapetypeFlowChartMagneticTape;
            else if ( (L"flowChartManualInput")		== sValue ) this->m_eValue = shapetypeFlowChartManualInput;
            else if ( (L"flowChartManualOperation")	== sValue ) this->m_eValue = shapetypeFlowChartManualOperation;
            else if ( (L"flowChartMerge")				== sValue ) this->m_eValue = shapetypeFlowChartMerge;
            else if ( (L"flowChartMultidocument")		== sValue ) this->m_eValue = shapetypeFlowChartMultidocument;
            else if ( (L"flowChartOfflineStorage")		== sValue ) this->m_eValue = shapetypeFlowChartOfflineStorage;
            else if ( (L"flowChartOffpageConnector")	== sValue ) this->m_eValue = shapetypeFlowChartOffpageConnector;
            else if ( (L"flowChartOnlineStorage")		== sValue ) this->m_eValue = shapetypeFlowChartOnlineStorage;
            else if ( (L"flowChartOr")					== sValue ) this->m_eValue = shapetypeFlowChartOr;
            else if ( (L"flowChartPredefinedProcess")	== sValue ) this->m_eValue = shapetypeFlowChartPredefinedProcess;
            else if ( (L"flowChartPreparation")		== sValue ) this->m_eValue = shapetypeFlowChartPreparation;
            else if ( (L"flowChartProcess")			== sValue ) this->m_eValue = shapetypeFlowChartProcess;
            else if ( (L"flowChartPunchedCard")		== sValue ) this->m_eValue = shapetypeFlowChartPunchedCard;
            else if ( (L"flowChartPunchedTape")		== sValue ) this->m_eValue = shapetypeFlowChartPunchedTape;
            else if ( (L"flowChartSort")				== sValue ) this->m_eValue = shapetypeFlowChartSort;
            else if ( (L"flowChartSummingJunction")	== sValue ) this->m_eValue = shapetypeFlowChartSummingJunction;
            else if ( (L"flowChartTerminator")			== sValue ) this->m_eValue = shapetypeFlowChartTerminator;
            else if ( (L"foldedCorner")				== sValue ) this->m_eValue = shapetypeFoldedCorner;
            else if ( (L"frame")						== sValue ) this->m_eValue = shapetypeFrame;
            else if ( (L"funnel")						== sValue ) this->m_eValue = shapetypeFunnel;
            break;

        case 'g':
            if      ( (L"gear6")					== sValue ) this->m_eValue = shapetypeGear6;
            else if ( (L"gear9")					== sValue ) this->m_eValue = shapetypeGear9;
            break;

        case 'h':
            if      ( (L"halfFrame")				== sValue ) this->m_eValue = shapetypeHalfFrame;
            else if ( (L"heart")					== sValue ) this->m_eValue = shapetypeHeart;
            else if ( (L"heptagon")				== sValue ) this->m_eValue = shapetypeHeptagon;
            else if ( (L"hexagon")					== sValue ) this->m_eValue = shapetypeHexagon;
            else if ( (L"homePlate")				== sValue ) this->m_eValue = shapetypeHomePlate;
            else if ( (L"horizontalScroll")		== sValue ) this->m_eValue = shapetypeHorizontalScroll;
            break;

        case 'i':
            if      ( (L"irregularSeal1")			== sValue ) this->m_eValue = shapetypeIrregularSeal1;
            else if ( (L"irregularSeal2")			== sValue ) this->m_eValue = shapetypeIrregularSeal2;
            break;

        case 'l':
            if      ( (L"leftArrow")				== sValue ) this->m_eValue = shapetypeLeftArrow;
            else if ( (L"leftArrowCallout")		== sValue ) this->m_eValue = shapetypeLeftArrowCallout;
            else if ( (L"leftBrace")				== sValue ) this->m_eValue = shapetypeLeftBrace;
            else if ( (L"leftBracket")				== sValue ) this->m_eValue = shapetypeLeftBracket;
            else if ( (L"leftCircularArrow")		== sValue ) this->m_eValue = shapetypeLeftCircularArrow;
            else if ( (L"leftRightArrow")			== sValue ) this->m_eValue = shapetypeLeftRightArrow;
            else if ( (L"leftRightArrowCallout")	== sValue ) this->m_eValue = shapetypeLeftRightArrowCallout;
            else if ( (L"leftRightCircularArrow")	== sValue ) this->m_eValue = shapetypeLeftRightCircularArrow;
            else if ( (L"leftRightRibbon")			== sValue ) this->m_eValue = shapetypeLeftRightRibbon;
            else if ( (L"leftRightUpArrow")		== sValue ) this->m_eValue = shapetypeLeftRightUpArrow;
            else if ( (L"leftUpArrow")				== sValue ) this->m_eValue = shapetypeLeftUpArrow;
            else if ( (L"lightningBolt")			== sValue ) this->m_eValue = shapetypeLightningBolt;
            else if ( (L"line")					== sValue ) this->m_eValue = shapetypeLine;
            else if ( (L"lineInv")					== sValue ) this->m_eValue = shapetypeLineInv;
            break;

        case 'm':
            if      ( (L"mathDivide")				== sValue ) this->m_eValue = shapetypeMathDivide;
            else if ( (L"mathEqual")				== sValue ) this->m_eValue = shapetypeMathEqual;
            else if ( (L"mathMinus")				== sValue ) this->m_eValue = shapetypeMathMinus;
            else if ( (L"mathMultiply")			== sValue ) this->m_eValue = shapetypeMathMultiply;
            else if ( (L"mathNotEqual")			== sValue ) this->m_eValue = shapetypeMathNotEqual;
            else if ( (L"mathPlus")				== sValue ) this->m_eValue = shapetypeMathPlus;
            else if ( (L"moon")					== sValue ) this->m_eValue = shapetypeMoon;
            break;

        case 'n':
            if      ( (L"nonIsoscelesTrapezoid")	== sValue ) this->m_eValue = shapetypeNonIsoscelesTrapezoid;
            else if ( (L"noSmoking")				== sValue ) this->m_eValue = shapetypeNoSmoking;
            else if ( (L"notchedRightArrow")		== sValue ) this->m_eValue = shapetypeNotchedRightArrow;
            break;

        case 'o':
            if      ( (L"octagon")					== sValue ) this->m_eValue = shapetypeOctagon;
            break;

        case 'p':
            if      ( (L"parallelogram")			== sValue ) this->m_eValue = shapetypeParallelogram;
            else if ( (L"pentagon")					== sValue ) this->m_eValue = shapetypePentagon;
            else if ( (L"pie")						== sValue ) this->m_eValue = shapetypePie;
            else if ( (L"pieWedge")					== sValue ) this->m_eValue = shapetypePieWedge;
            else if ( (L"plaque")					== sValue ) this->m_eValue = shapetypePlaque;
            else if ( (L"plaqueTabs")				== sValue ) this->m_eValue = shapetypePlaqueTabs;
            else if ( (L"plus")						== sValue ) this->m_eValue = shapetypePlus;
            break;

        case 'q':
            if      ( (L"quadArrow")				== sValue ) this->m_eValue = shapetypeQuadArrow;
            else if ( (L"quadArrowCallout")		== sValue ) this->m_eValue = shapetypeQuadArrowCallout;
            break;

        case 'r':
            if      ( (L"rect")					== sValue ) this->m_eValue = shapetypeRect;
            else if ( (L"ribbon")					== sValue ) this->m_eValue = shapetypeRibbon;
            else if ( (L"ribbon2")					== sValue ) this->m_eValue = shapetypeRibbon2;
            else if ( (L"rightArrow")				== sValue ) this->m_eValue = shapetypeRightArrow;
            else if ( (L"rightArrowCallout")		== sValue ) this->m_eValue = shapetypeRightArrowCallout;
            else if ( (L"rightBrace")				== sValue ) this->m_eValue = shapetypeRightBrace;
            else if ( (L"rightBracket")			== sValue ) this->m_eValue = shapetypeRightBracket;
            else if ( (L"round1Rect")				== sValue ) this->m_eValue = shapetypeRound1Rect;
            else if ( (L"round2DiagRect")			== sValue ) this->m_eValue = shapetypeRound2DiagRect;
            else if ( (L"round2SameRect")			== sValue ) this->m_eValue = shapetypeRound2SameRect;
            else if ( (L"roundRect")				== sValue ) this->m_eValue = shapetypeRoundRect;
            else if ( (L"rtTriangle")				== sValue ) this->m_eValue = shapetypeRtTriangle;
    ////new
            else if ( (L"rightUpArrow")			== sValue ) this->m_eValue = 	 shapetypeRightUpArrow;
            break;

        case 's':
            if      ( (L"smileyFace")				== sValue ) this->m_eValue = shapetypeSmileyFace;
            else if ( (L"snip1Rect")				== sValue ) this->m_eValue = shapetypeSnip1Rect;
            else if ( (L"snip2DiagRect")			== sValue ) this->m_eValue = shapetypeSnip2DiagRect;
            else if ( (L"snip2SameRect")			== sValue ) this->m_eValue = shapetypeSnip2SameRect;
            else if ( (L"snipRoundRect")			== sValue ) this->m_eValue = shapetypeSnipRoundRect;
            else if ( (L"squareTabs")				== sValue ) this->m_eValue = shapetypeSquareTabs;
            else if ( (L"star10")					== sValue ) this->m_eValue = shapetypeStar10;
            else if ( (L"star12")					== sValue ) this->m_eValue = shapetypeStar12;
            else if ( (L"star16")					== sValue ) this->m_eValue = shapetypeStar16;
            else if ( (L"star24")					== sValue ) this->m_eValue = shapetypeStar24;
            else if ( (L"star32")					== sValue ) this->m_eValue = shapetypeStar32;
            else if ( (L"star4")					== sValue ) this->m_eValue = shapetypeStar4;
            else if ( (L"star5")					== sValue ) this->m_eValue = shapetypeStar5;
            else if ( (L"star6")					== sValue ) this->m_eValue = shapetypeStar6;
            else if ( (L"star7")					== sValue ) this->m_eValue = shapetypeStar7;
            else if ( (L"star8")					== sValue ) this->m_eValue = shapetypeStar8;
            else if ( (L"straightConnector1")		== sValue ) this->m_eValue = shapetypeStraightConnector1;
            else if ( (L"stripedRightArrow")		== sValue ) this->m_eValue = shapetypeStripedRightArrow;
            else if ( (L"sun")						== sValue ) this->m_eValue = shapetypeSun;
            else if ( (L"swooshArrow")				== sValue ) this->m_eValue = shapetypeSwooshArrow;
            break;

        case 't':
            if      ( (L"teardrop")				== sValue ) this->m_eValue = shapetypeTeardrop;
            else if ( (L"trapezoid")				== sValue ) this->m_eValue = shapetypeTrapezoid;
            else if ( (L"triangle")				== sValue ) this->m_eValue = shapetypeTriangle;
    /////new
            else if ( (L"textArchDownPour")		== sValue ) this->m_eValue = 	 shapetypeTextArchDownPour;
            else if ( (L"textArchUpPour")			== sValue ) this->m_eValue = 	 shapetypeTextArchUpPour;
            else if ( (L"textCanDown")				== sValue ) this->m_eValue = 	 shapetypeTextCanDown;
            else if ( (L"textCanUp")				== sValue ) this->m_eValue = 	 shapetypeTextCanUp;
            else if ( (L"textCirclePour")			== sValue ) this->m_eValue = 	 shapetypeTextCirclePour;
            else if ( (L"textCurveDown")			== sValue ) this->m_eValue = 	 shapetypeTextCurveDown;
            else if ( (L"textCurveUp")				== sValue ) this->m_eValue = 	 shapetypeTextCurveUp;
            else if ( (L"textDeflate")				== sValue ) this->m_eValue = 	 shapetypeTextDeflate;
            else if ( (L"textDeflateBottom")		== sValue ) this->m_eValue = 	 shapetypeTextDeflateBottom;
            else if ( (L"textDeflateInflate")		== sValue ) this->m_eValue = 	 shapetypeTextDeflateInflate;
            else if ( (L"textDeflateInflateDeflate")	== sValue ) this->m_eValue = 	 shapetypeTextDeflateInflateDeflat;
            else if ( (L"textDeflateTop")			== sValue ) this->m_eValue = 	 shapetypeTextDeflateTop;
            else if ( (L"textDoubleWave1")			== sValue ) this->m_eValue = 	 shapetypeTextDoubleWave1;
            else if ( (L"textFadeDown")			== sValue ) this->m_eValue = 	 shapetypeTextFadeDown;
            else if ( (L"textFadeLeft")			== sValue ) this->m_eValue = 	 shapetypeTextFadeLeft;
            else if ( (L"textFadeRight")			== sValue ) this->m_eValue = 	 shapetypeTextFadeRight;
            else if ( (L"textFadeUp")				== sValue ) this->m_eValue = 	 shapetypeTextFadeUp;
            else if ( (L"textInflateBottom")		== sValue ) this->m_eValue = 	 shapetypeTextInflateBottom;
            else if ( (L"textInflateTop")			== sValue ) this->m_eValue = 	 shapetypeTextInflateTop;
            else if ( (L"textRingInside")			== sValue ) this->m_eValue = 	 shapetypeTextRingInside;
            else if ( (L"textRingOutside")			== sValue ) this->m_eValue = 	 shapetypeTextRingOutside;
            else if ( (L"textWave1")				== sValue ) this->m_eValue = 	 shapetypeTextWave1;
            else if ( (L"textWave2")				== sValue ) this->m_eValue = 	 shapetypeTextWave2;
            else if ( (L"textWave4")				== sValue ) this->m_eValue = 	 shapetypeTextWave4;
            else if ( (L"thickArrow")				== sValue ) this->m_eValue = 	 shapetypeThickArrow;
            break;
        case 'u':
            if      ( (L"upArrow")					== sValue ) this->m_eValue = shapetypeUpArrow;
            else if ( (L"upArrowCallout")			== sValue ) this->m_eValue = shapetypeUpArrowCallout;
            else if ( (L"upDownArrow")				== sValue ) this->m_eValue = shapetypeUpDownArrow;
            else if ( (L"upDownArrowCallout")		== sValue ) this->m_eValue = shapetypeUpDownArrowCallout;
            else if ( (L"uturnArrow")				== sValue ) this->m_eValue = shapetypeUturnArrow;
            break;

        case 'v':
            if      ( (L"verticalScroll")			== sValue ) this->m_eValue = shapetypeVerticalScroll;
            break;

        case 'w':
            if      ( (L"wave")					== sValue ) this->m_eValue = shapetypeWave;
            else if ( (L"wedgeEllipseCallout")		== sValue ) this->m_eValue = shapetypeWedgeEllipseCallout;
            else if ( (L"wedgeRectCallout")		== sValue ) this->m_eValue = shapetypeWedgeRectCallout;
            else if ( (L"wedgeRoundRectCallout")	== sValue ) this->m_eValue = shapetypeWedgeRoundRectCallout;
            break;
        }

        return this->m_eValue;
    }

    template<EShapeType eDefValue>
    std::wstring CShapeType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case shapetypeAccentBorderCallout1:			return (L"accentBorderCallout1");
        case shapetypeAccentBorderCallout2:			return (L"accentBorderCallout2");
        case shapetypeAccentBorderCallout3:			return (L"accentBorderCallout3");
        case shapetypeAccentCallout1:				return (L"accentCallout1");
        case shapetypeAccentCallout2:				return (L"accentCallout2");
        case shapetypeAccentCallout3:				return (L"accentCallout3");
        case shapetypeActionButtonBackPrevious:		return (L"actionButtonBackPrevious");
        case shapetypeActionButtonBeginning:		return (L"actionButtonBeginning");
        case shapetypeActionButtonBlank:			return (L"actionButtonBlank");
        case shapetypeActionButtonDocument:			return (L"actionButtonDocument");
        case shapetypeActionButtonEnd:				return (L"actionButtonEnd");
        case shapetypeActionButtonForwardNext:		return (L"actionButtonForwardNext");
        case shapetypeActionButtonHelp:				return (L"actionButtonHelp");
        case shapetypeActionButtonHome:				return (L"actionButtonHome");
        case shapetypeActionButtonInformation:		return (L"actionButtonInformation");
        case shapetypeActionButtonMovie:			return (L"actionButtonMovie");
        case shapetypeActionButtonReturn:			return (L"actionButtonReturn");
        case shapetypeActionButtonSound:			return (L"actionButtonSound");
        case shapetypeArc:							return (L"arc");
        case shapetypeBentArrow:					return (L"bentArrow");
        case shapetypeBentConnector2:				return (L"bentConnector2");
        case shapetypeBentConnector3:				return (L"bentConnector3");
        case shapetypeBentConnector4:				return (L"bentConnector4");
        case shapetypeBentConnector5:				return (L"bentConnector5");
        case shapetypeBentUpArrow:					return (L"bentUpArrow");
        case shapetypeBevel:						return (L"bevel");
        case shapetypeBlockArc:						return (L"blockArc");
        case shapetypeBorderCallout1:				return (L"borderCallout1");
        case shapetypeBorderCallout2:				return (L"borderCallout2");
        case shapetypeBorderCallout3:				return (L"borderCallout3");
        case shapetypeBracePair:					return (L"bracePair");
        case shapetypeBracketPair:					return (L"bracketPair");
        case shapetypeCallout1:						return (L"callout1");
        case shapetypeCallout2:						return (L"callout2");
        case shapetypeCallout3:						return (L"callout3");
        case shapetypeCan:							return (L"can");
        case shapetypeChartPlus:					return (L"chartPlus");
        case shapetypeChartStar:					return (L"chartStar");
        case shapetypeChartX:						return (L"chartX");
        case shapetypeChevron:						return (L"chevron");
        case shapetypeChord:						return (L"chord");
        case shapetypeCircularArrow:				return (L"circularArrow");
        case shapetypeCloud:						return (L"cloud");
        case shapetypeCloudCallout:					return (L"cloudCallout");
        case shapetypeCorner:						return (L"corner");
        case shapetypeCornerTabs:					return (L"cornerTabs");
        case shapetypeCube:							return (L"cube");
        case shapetypeCurvedConnector2:				return (L"curvedConnector2");
        case shapetypeCurvedConnector3: 			return (L"curvedConnector3");
        case shapetypeCurvedConnector4: 			return (L"curvedConnector4");
        case shapetypeCurvedConnector5: 			return (L"curvedConnector5");
        case shapetypeCurvedDownArrow:				return (L"curvedDownArrow");
        case shapetypeCurvedLeftArrow:				return (L"curvedLeftArrow");
        case shapetypeCurvedRightArrow:				return (L"curvedRightArrow");
        case shapetypeCurvedUpArrow:				return (L"curvedUpArrow");
        case shapetypeDecagon:						return (L"decagon");
        case shapetypeDiagStripe:					return (L"diagStripe");
        case shapetypeDiamond:						return (L"diamond");
        case shapetypeDodecagon:					return (L"dodecagon");
        case shapetypeDonut:						return (L"donut");
        case shapetypeDoubleWave:					return (L"doubleWave");
        case shapetypeDownArrow:					return (L"downArrow");
        case shapetypeDownArrowCallout:				return (L"downArrowCallout");
        case shapetypeEllipse:						return (L"ellipse");
        case shapetypeEllipseRibbon:				return (L"ellipseRibbon");
        case shapetypeEllipseRibbon2:				return (L"ellipseRibbon2");
        case shapetypeFlowChartAlternateProcess:	return (L"flowChartAlternateProcess");
        case shapetypeFlowChartCollate:				return (L"flowChartCollate");
        case shapetypeFlowChartConnector:			return (L"flowChartConnector");
        case shapetypeFlowChartDecision:			return (L"flowChartDecision");
        case shapetypeFlowChartDelay:				return (L"flowChartDelay");
        case shapetypeFlowChartDisplay:				return (L"flowChartDisplay");
        case shapetypeFlowChartDocument:			return (L"flowChartDocument");
        case shapetypeFlowChartExtract:				return (L"flowChartExtract");
        case shapetypeFlowChartInputOutput:			return (L"flowChartInputOutput");
        case shapetypeFlowChartInternalStorage:		return (L"flowChartInternalStorage");
        case shapetypeFlowChartMagneticDisk:		return (L"flowChartMagneticDisk");
        case shapetypeFlowChartMagneticDrum:		return (L"flowChartMagneticDrum");
        case shapetypeFlowChartMagneticTape:		return (L"flowChartMagneticTape");
        case shapetypeFlowChartManualInput:			return (L"flowChartManualInput");
        case shapetypeFlowChartManualOperation:		return (L"flowChartManualOperation");
        case shapetypeFlowChartMerge:				return (L"flowChartMerge");
        case shapetypeFlowChartMultidocument:		return (L"flowChartMultidocument");
        case shapetypeFlowChartOfflineStorage:		return (L"flowChartOfflineStorage");
        case shapetypeFlowChartOffpageConnector:	return (L"flowChartOffpageConnector");
        case shapetypeFlowChartOnlineStorage:		return (L"flowChartOnlineStorage");
        case shapetypeFlowChartOr:					return (L"flowChartOr");
        case shapetypeFlowChartPredefinedProcess:	return (L"flowChartPredefinedProcess");
        case shapetypeFlowChartPreparation:			return (L"flowChartPreparation");
        case shapetypeFlowChartProcess:				return (L"flowChartProcess");
        case shapetypeFlowChartPunchedCard:			return (L"flowChartPunchedCard");
        case shapetypeFlowChartPunchedTape:			return (L"flowChartPunchedTape");
        case shapetypeFlowChartSort:				return (L"flowChartSort");
        case shapetypeFlowChartSummingJunction:		return (L"flowChartSummingJunction");
        case shapetypeFlowChartTerminator:			return (L"flowChartTerminator");
        case shapetypeFoldedCorner:					return (L"foldedCorner");
        case shapetypeFrame:						return (L"frame");
        case shapetypeFunnel:						return (L"funnel");
        case shapetypeGear6:						return (L"gear6");
        case shapetypeGear9:						return (L"gear9");
        case shapetypeHalfFrame:					return (L"halfFrame");
        case shapetypeHeart:						return (L"heart");
        case shapetypeHeptagon:						return (L"heptagon");
        case shapetypeHexagon:						return (L"hexagon");
        case shapetypeHomePlate:					return (L"homePlate");
        case shapetypeHorizontalScroll:				return (L"horizontalScroll");
        case shapetypeIrregularSeal1:				return (L"irregularSeal1");
        case shapetypeIrregularSeal2:				return (L"irregularSeal2");
        case shapetypeLeftArrow:					return (L"leftArrow");
        case shapetypeLeftArrowCallout:				return (L"leftArrowCallout");
        case shapetypeLeftBrace:					return (L"leftBrace");
        case shapetypeLeftBracket:					return (L"leftBracket");
        case shapetypeLeftCircularArrow:			return (L"leftCircularArrow");
        case shapetypeLeftRightArrow:				return (L"leftRightArrow");
        case shapetypeLeftRightArrowCallout:		return (L"leftRightArrowCallout");
        case shapetypeLeftRightCircularArrow:		return (L"leftRightCircularArrow");
        case shapetypeLeftRightRibbon:				return (L"leftRightRibbon");
        case shapetypeLeftRightUpArrow:				return (L"leftRightUpArrow");
        case shapetypeLeftUpArrow:					return (L"leftUpArrow");
        case shapetypeLightningBolt:				return (L"lightningBolt");
        case shapetypeLine:							return (L"line");
        case shapetypeLineInv:						return (L"lineInv");
        case shapetypeMathDivide:					return (L"mathDivide");
        case shapetypeMathEqual:					return (L"mathEqual");
        case shapetypeMathMinus:					return (L"mathMinus");
        case shapetypeMathMultiply:					return (L"mathMultiply");
        case shapetypeMathNotEqual:					return (L"mathNotEqual");
        case shapetypeMathPlus:						return (L"mathPlus");
        case shapetypeMoon:							return (L"moon");
        case shapetypeNonIsoscelesTrapezoid:		return (L"nonIsoscelesTrapezoid");
        case shapetypeNoSmoking:					return (L"noSmoking");
        case shapetypeNotchedRightArrow:			return (L"notchedRightArrow");
        case shapetypeOctagon:						return (L"octagon");
        case shapetypeParallelogram:				return (L"parallelogram");
        case shapetypePentagon:						return (L"pentagon");
        case shapetypePie:							return (L"pie");
        case shapetypePieWedge:						return (L"pieWedge");
        case shapetypePlaque:						return (L"plaque");
        case shapetypePlaqueTabs:					return (L"plaqueTabs");
        case shapetypePlus:							return (L"plus");
        case shapetypeQuadArrow:					return (L"quadArrow");
        case shapetypeQuadArrowCallout:				return (L"quadArrowCallout");
        case shapetypeRect:							return (L"rect");
        case shapetypeRibbon:						return (L"ribbon");
        case shapetypeRibbon2:						return (L"ribbon2");
        case shapetypeRightArrow:					return (L"rightArrow");
        case shapetypeRightArrowCallout:			return (L"rightArrowCallout");
        case shapetypeRightBrace:					return (L"rightBrace");
        case shapetypeRightBracket:					return (L"rightBracket");
        case shapetypeRound1Rect:					return (L"round1Rect");
        case shapetypeRound2DiagRect:				return (L"round2DiagRect");
        case shapetypeRound2SameRect:				return (L"round2SameRect");
        case shapetypeRoundRect:					return (L"roundRect");
        case shapetypeRtTriangle:					return (L"rtTriangle");
        case shapetypeSmileyFace:					return (L"smileyFace");
        case shapetypeSnip1Rect:					return (L"snip1Rect");
        case shapetypeSnip2DiagRect:				return (L"snip2DiagRect");
        case shapetypeSnip2SameRect:				return (L"snip2SameRect");
        case shapetypeSnipRoundRect:				return (L"snipRoundRect");
        case shapetypeSquareTabs:					return (L"squareTabs");
        case shapetypeStar10:						return (L"star10");
        case shapetypeStar12:						return (L"star12");
        case shapetypeStar16:						return (L"star16");
        case shapetypeStar24:						return (L"star24");
        case shapetypeStar32:						return (L"star32");
        case shapetypeStar4:						return (L"star4");
        case shapetypeStar5:						return (L"star5");
        case shapetypeStar6:						return (L"star6");
        case shapetypeStar7:						return (L"star7");
        case shapetypeStar8:						return (L"star8");
        case shapetypeStraightConnector1:			return (L"straightConnector1");
        case shapetypeStripedRightArrow:			return (L"stripedRightArrow");
        case shapetypeSun:							return (L"sun");
        case shapetypeSwooshArrow:					return (L"swooshArrow");
        case shapetypeTeardrop:						return (L"teardrop");
        case shapetypeTrapezoid:					return (L"trapezoid");
        case shapetypeTriangle:						return (L"triangle");
        case shapetypeUpArrow:						return (L"upArrow");
        case shapetypeUpArrowCallout:				return (L"upArrowCallout");
        case shapetypeUpDownArrow:					return (L"upDownArrow");
        case shapetypeUpDownArrowCallout:			return (L"upDownArrowCallout");
        case shapetypeUturnArrow:					return (L"uturnArrow");
        case shapetypeVerticalScroll:				return (L"verticalScroll");
        case shapetypeWave:							return (L"wave");
        case shapetypeWedgeEllipseCallout:			return (L"wedgeEllipseCallout");
        case shapetypeWedgeRectCallout:				return (L"wedgeRectCallout");
        case shapetypeWedgeRoundRectCallout:		return (L"wedgeRoundRectCallout");

        case shapetypeBallon:						return (L"Balloon");
        case shapetypeRightUpArrow:					return (L"rightUpArrow");
        case shapetypeTextArchDownPour:				return (L"textArchDownPour");
        case shapetypeTextArchUpPour:				return (L"textArchUpPour");
        case shapetypeTextCanDown:					return (L"textCanDown");
        case shapetypeTextCanUp:					return (L"textCanUp");
        case shapetypeTextCirclePour:				return (L"textCirclePour");
        case shapetypeTextCurveDown:				return (L"textCurveDown");
        case shapetypeTextCurveUp:					return (L"textCurveUp");
        case shapetypeTextDeflate:					return (L"textDeflate");
        case shapetypeTextDeflateBottom:			return (L"textDeflateBottom");
        case shapetypeTextDeflateInflate:			return (L"textDeflateInflate");
        case shapetypeTextDeflateInflateDeflat:		return (L"textDeflateInflateDeflate");
        case shapetypeTextDeflateTop:				return (L"textDeflateTop");
        case shapetypeTextDoubleWave1:				return (L"textDoubleWave1");
        case shapetypeTextFadeDown:					return (L"textFadeDown");
        case shapetypeTextFadeLeft:					return (L"textFadeLeft");
        case shapetypeTextFadeRight:				return (L"textFadeRight");
        case shapetypeTextFadeUp:					return (L"textFadeUp");
        case shapetypeTextInflateBottom:			return (L"textInflateBottom");
        case shapetypeTextInflateTop:				return (L"textInflateTop");
        case shapetypeTextRingInside:				return (L"textRingInside");
        case shapetypeTextRingOutside:				return (L"textRingOutside");
        case shapetypeTextWave1:					return (L"textWave1");
        case shapetypeTextWave2:					return (L"textWave2");
        case shapetypeTextWave4:					return (L"textWave4");
        case shapetypeThickArrow:					return (L"thickArrow");

        default :									return (L"rect");
        }
    }

    template<EShapeType eDefValue>
    EShapeType CShapeType<eDefValue>::GetValue() const
    {
        return this->m_eValue;
    }
}
