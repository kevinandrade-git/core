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
    // PresetColorVal 20.1.10.48 (Part 1)
    //--------------------------------------------------------------------------------	

    template<EPresetColorVal eDefValue>
    CPresetColorVal<eDefValue>::CPresetColorVal() {}

    template<EPresetColorVal eDefValue>
    EPresetColorVal CPresetColorVal<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = presetcolorvalBlack;
        SetRGBA( 0, 0, 0, 255 );

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'a':
            if      ( (L"aliceBlue")			== sValue ) { this->m_eValue = presetcolorvalAliceBlue; SetRGBA(240,248,255); }
            else if ( (L"antiqueWhite")		== sValue ) { this->m_eValue = presetcolorvalAntiqueWhite; SetRGBA(250,235,215); }
            else if ( (L"aqua")				== sValue ) { this->m_eValue = presetcolorvalAqua; SetRGBA(0,255,255); }
            else if ( (L"aquamarine")			== sValue ) { this->m_eValue = presetcolorvalAquamarine; SetRGBA(127,255,212); }
            else if ( (L"azure")				== sValue ) { this->m_eValue = presetcolorvalAzure; SetRGBA(240,255,255); }
            break;
        case 'b':
            if      ( (L"beige")				== sValue ) { this->m_eValue = presetcolorvalBeige; SetRGBA(245,245,220); }
            else if ( (L"bisque")				== sValue ) { this->m_eValue = presetcolorvalBisque ; SetRGBA(255,228,196); }
            else if ( (L"black")				== sValue ) { this->m_eValue = presetcolorvalBlack ; SetRGBA(0,0,0); }
            else if ( (L"blanchedAlmond")		== sValue ) { this->m_eValue = presetcolorvalBlanchedAlmond ; SetRGBA(255,235,205); }
            else if ( (L"blue")				== sValue ) { this->m_eValue = presetcolorvalBlue ; SetRGBA(0,0,255); }
            else if ( (L"blueViolet")			== sValue ) { this->m_eValue = presetcolorvalBlueViolet ; SetRGBA(138,43,226); }
            else if ( (L"brown")				== sValue ) { this->m_eValue = presetcolorvalBrown ; SetRGBA(165,42,42); }
            else if ( (L"burlyWood")			== sValue ) { this->m_eValue = presetcolorvalBurlyWood ; SetRGBA(222,184,135); }
            break;
        case 'c':
            if      ( (L"cadetBlue")			== sValue ) { this->m_eValue = presetcolorvalCadetBlue ; SetRGBA(95,158,160); }
            else if ( (L"chartreuse")			== sValue ) { this->m_eValue = presetcolorvalChartreuse ; SetRGBA(127,255,0); }
            else if ( (L"chocolate")			== sValue ) { this->m_eValue = presetcolorvalChocolate ; SetRGBA(210,105,30); }
            else if ( (L"coral")				== sValue ) { this->m_eValue = presetcolorvalCoral ; SetRGBA(255,127,80); }
            else if ( (L"cornflowerBlue")		== sValue ) { this->m_eValue = presetcolorvalCornflowerBlue ; SetRGBA(100,149,237); }
            else if ( (L"cornsilk")			== sValue ) { this->m_eValue = presetcolorvalCornsilk ; SetRGBA(255,248,220); }
            else if ( (L"crimson")				== sValue ) { this->m_eValue = presetcolorvalCrimson ; SetRGBA(220,20,60); }
            else if ( (L"cyan")				== sValue ) { this->m_eValue = presetcolorvalCyan ; SetRGBA(0,255,255); }
            break;
        case 'd':
            if      ( (L"darkBlue")			== sValue ) { this->m_eValue = presetcolorvalDarkBlue ; SetRGBA(0,0,139); }
            else if ( (L"darkCyan")			== sValue ) { this->m_eValue = presetcolorvalDarkCyan ; SetRGBA(0,139,139); }
            else if ( (L"darkGoldenrod")		== sValue ) { this->m_eValue = presetcolorvalDarkGoldenrod ; SetRGBA(184,134,11); }
            else if ( (L"darkGray")			== sValue ) { this->m_eValue = presetcolorvalDarkGray ; SetRGBA(169,169,169); }
            else if ( (L"darkGreen")			== sValue ) { this->m_eValue = presetcolorvalDarkGreen ; SetRGBA(0,100,0); }
            else if ( (L"darkGrey")			== sValue ) { this->m_eValue = presetcolorvalDarkGrey ; SetRGBA(169,169,169); }
            else if ( (L"darkKhaki")			== sValue ) { this->m_eValue = presetcolorvalDarkKhaki ; SetRGBA(189,183,107); }
            else if ( (L"darkMagenta")			== sValue ) { this->m_eValue = presetcolorvalDarkMagenta ; SetRGBA(139,0,139); }
            else if ( (L"darkOliveGreen")		== sValue ) { this->m_eValue = presetcolorvalDarkOliveGreen ; SetRGBA(85,107,47); }
            else if ( (L"darkOrange")			== sValue ) { this->m_eValue = presetcolorvalDarkOrange ; SetRGBA(255,140,0); }
            else if ( (L"darkOrchid")			== sValue ) { this->m_eValue = presetcolorvalDarkOrchid ; SetRGBA(153,50,204); }
            else if ( (L"darkRed")				== sValue ) { this->m_eValue = presetcolorvalDarkRed ; SetRGBA(139,0,0); }
            else if ( (L"darkSalmon")			== sValue ) { this->m_eValue = presetcolorvalDarkSalmon ; SetRGBA(233,150,122); }
            else if ( (L"darkSeaGreen")		== sValue ) { this->m_eValue = presetcolorvalDarkSeaGreen ; SetRGBA(143,188,143); }
            else if ( (L"darkSlateBlue")		== sValue ) { this->m_eValue = presetcolorvalDarkSlateBlue ; SetRGBA(72,61,139); }
            else if ( (L"darkSlateGray")		== sValue ) { this->m_eValue = presetcolorvalDarkSlateGray ; SetRGBA(47,79,79); }
            else if ( (L"darkSlateGrey")		== sValue ) { this->m_eValue = presetcolorvalDarkSlateGrey ; SetRGBA(47,79,79); }
            else if ( (L"darkTurquoise")		== sValue ) { this->m_eValue = presetcolorvalDarkTurquoise ; SetRGBA(0,206,209); }
            else if ( (L"darkViolet")			== sValue ) { this->m_eValue = presetcolorvalDarkViolet ; SetRGBA(148,0,211); }
            else if ( (L"deepPink")			== sValue ) { this->m_eValue = presetcolorvalDeepPink ; SetRGBA(255,20,147); }
            else if ( (L"deepSkyBlue")			== sValue ) { this->m_eValue = presetcolorvalDeepSkyBlue ; SetRGBA(0,191,255); }
            else if ( (L"dimGray")				== sValue ) { this->m_eValue = presetcolorvalDimGray ; SetRGBA(105,105,105); }
            else if ( (L"dimGrey")				== sValue ) { this->m_eValue = presetcolorvalDimGrey ; SetRGBA(105,105,105); }
            else if ( (L"dkBlue")				== sValue ) { this->m_eValue = presetcolorvalDkBlue ; SetRGBA(0,0,139); }
            else if ( (L"dkCyan")				== sValue ) { this->m_eValue = presetcolorvalDkCyan ; SetRGBA(0,139,139); }
            else if ( (L"dkGoldenrod")			== sValue ) { this->m_eValue = presetcolorvalDkGoldenrod ; SetRGBA(184,134,11); }
            else if ( (L"dkGray")				== sValue ) { this->m_eValue = presetcolorvalDkGray ; SetRGBA(169,169,169); }
            else if ( (L"dkGreen")				== sValue ) { this->m_eValue = presetcolorvalDkGreen ; SetRGBA(0,100,0); }
            else if ( (L"dkGrey")				== sValue ) { this->m_eValue = presetcolorvalDkGrey ; SetRGBA(169,169,169); }
            else if ( (L"dkKhaki")				== sValue ) { this->m_eValue = presetcolorvalDkKhaki ; SetRGBA(189,183,107); }
            else if ( (L"dkMagenta")			== sValue ) { this->m_eValue = presetcolorvalDkMagenta ; SetRGBA(139,0,139); }
            else if ( (L"dkOliveGreen")		== sValue ) { this->m_eValue = presetcolorvalDkOliveGreen ; SetRGBA(85,107,47); }
            else if ( (L"dkOrange")			== sValue ) { this->m_eValue = presetcolorvalDkOrange ; SetRGBA(255,140,0); }
            else if ( (L"dkOrchid")			== sValue ) { this->m_eValue = presetcolorvalDkOrchid ; SetRGBA(153,50,204); }
            else if ( (L"dkRed")				== sValue ) { this->m_eValue = presetcolorvalDkRed ; SetRGBA(139,0,0); }
            else if ( (L"dkSalmon")			== sValue ) { this->m_eValue = presetcolorvalDkSalmon ; SetRGBA(233,150,122); }
            else if ( (L"dkSeaGreen")			== sValue ) { this->m_eValue = presetcolorvalDkSeaGreen ; SetRGBA(143,188,139); }
            else if ( (L"dkSlateBlue")			== sValue ) { this->m_eValue = presetcolorvalDkSlateBlue ; SetRGBA(72,61,139); }
            else if ( (L"dkSlateGray")			== sValue ) { this->m_eValue = presetcolorvalDkSlateGray ; SetRGBA(47,79,79); }
            else if ( (L"dkSlateGrey")			== sValue ) { this->m_eValue = presetcolorvalDkSlateGrey ; SetRGBA(47,79,79); }
            else if ( (L"dkTurquoise")			== sValue ) { this->m_eValue = presetcolorvalDkTurquoise ; SetRGBA(0,206,209); }
            else if ( (L"dkViolet")			== sValue ) { this->m_eValue = presetcolorvalDkViolet ; SetRGBA(148,0,211); }
            else if ( (L"dodgerBlue")			== sValue ) { this->m_eValue = presetcolorvalDodgerBlue ; SetRGBA(30,144,255); }
            break;
        case 'f':
            if      ( (L"firebrick")			== sValue ) { this->m_eValue = presetcolorvalFirebrick ; SetRGBA(178,34,34); }
            else if ( (L"floralWhite")			== sValue ) { this->m_eValue = presetcolorvalFloralWhite ; SetRGBA(255,250,240); }
            else if ( (L"forestGreen")			== sValue ) { this->m_eValue = presetcolorvalForestGreen ; SetRGBA(34,139,34); }
            else if ( (L"fuchsia")				== sValue ) { this->m_eValue = presetcolorvalFuchsia ; SetRGBA(255,0,255); }
            break;
        case 'g':
            if      ( (L"gainsboro")			== sValue ) { this->m_eValue = presetcolorvalGainsboro ; SetRGBA(220,220,220); }
            else if ( (L"ghostWhite")			== sValue ) { this->m_eValue = presetcolorvalGhostWhite ; SetRGBA(248,248,255); }
            else if ( (L"gold")				== sValue ) { this->m_eValue = presetcolorvalGold ; SetRGBA(255,215,0); }
            else if ( (L"goldenrod")			== sValue ) { this->m_eValue = presetcolorvalGoldenrod ; SetRGBA(218,165,32); }
            else if ( (L"gray")				== sValue ) { this->m_eValue = presetcolorvalGray ; SetRGBA(128,128,128); }
            else if ( (L"green")				== sValue ) { this->m_eValue = presetcolorvalGreen ; SetRGBA(0,128,0); }
            else if ( (L"greenYellow")			== sValue ) { this->m_eValue = presetcolorvalGreenYellow ; SetRGBA(173,255,47); }
            else if ( (L"grey")				== sValue ) { this->m_eValue = presetcolorvalGrey ; SetRGBA(128,128,128); }
            break;
        case 'h':
            if      ( (L"honeydew")			== sValue ) { this->m_eValue = presetcolorvalHoneydew ; SetRGBA(240,255,240); }
            else if ( (L"hotPink")				== sValue ) { this->m_eValue = presetcolorvalHotPink ; SetRGBA(255,105,180); }
            break;
        case 'i':
            if      ( (L"indianRed")			== sValue ) { this->m_eValue = presetcolorvalIndianRed ; SetRGBA(205,92,92); }
            else if ( (L"indigo")				== sValue ) { this->m_eValue = presetcolorvalIndigo ; SetRGBA(75,0,130); }
            else if ( (L"ivory")				== sValue ) { this->m_eValue = presetcolorvalIvory ; SetRGBA(255,255,240); }
            break;
        case 'k':
            if      ( (L"khaki")				== sValue ) { this->m_eValue = presetcolorvalKhaki ; SetRGBA(240,230,140); }
            break;
        case 'l':
            if      ( (L"lavender")			== sValue ) { this->m_eValue = presetcolorvalLavender ; SetRGBA(230,230,250); }
            else if ( (L"lavenderBlush")		== sValue ) { this->m_eValue = presetcolorvalLavenderBlush ; SetRGBA(255,240,245); }
            else if ( (L"lawnGreen")			== sValue ) { this->m_eValue = presetcolorvalLawnGreen ; SetRGBA(124,252,0); }
            else if ( (L"lemonChiffon")		== sValue ) { this->m_eValue = presetcolorvalLemonChiffon ; SetRGBA(255,250,205); }
            else if ( (L"lightBlue")			== sValue ) { this->m_eValue = presetcolorvalLightBlue ; SetRGBA(173,216,230); }
            else if ( (L"lightCoral")			== sValue ) { this->m_eValue = presetcolorvalLightCoral ; SetRGBA(240,128,128); }
            else if ( (L"lightCyan")			== sValue ) { this->m_eValue = presetcolorvalLightCyan ; SetRGBA(224,255,255); }
            else if ( (L"lightGoldenrodYellow")== sValue ) { this->m_eValue = presetcolorvalLightGoldenrodYellow; SetRGBA(250,250,210); }
            else if ( (L"lightGray")			== sValue ) { this->m_eValue = presetcolorvalLightGray ; SetRGBA(211,211,211); }
            else if ( (L"lightGreen")			== sValue ) { this->m_eValue = presetcolorvalLightGreen ; SetRGBA(144,238,144); }
            else if ( (L"lightGrey")			== sValue ) { this->m_eValue = presetcolorvalLightGrey ; SetRGBA(211,211,211); }
            else if ( (L"lightPink")			== sValue ) { this->m_eValue = presetcolorvalLightPink ; SetRGBA(255,182,193); }
            else if ( (L"lightSalmon")			== sValue ) { this->m_eValue = presetcolorvalLightSalmon ; SetRGBA(255,160,122); }
            else if ( (L"lightSeaGreen")		== sValue ) { this->m_eValue = presetcolorvalLightSeaGreen ; SetRGBA(32,178,170); }
            else if ( (L"lightSkyBlue")		== sValue ) { this->m_eValue = presetcolorvalLightSkyBlue ; SetRGBA(135,206,250); }
            else if ( (L"lightSlateGray")		== sValue ) { this->m_eValue = presetcolorvalLightSlateGray ; SetRGBA(119,136,153); }
            else if ( (L"lightSlateGrey")		== sValue ) { this->m_eValue = presetcolorvalLightSlateGrey ; SetRGBA(119,136,153); }
            else if ( (L"lightSteelBlue")		== sValue ) { this->m_eValue = presetcolorvalLightSteelBlue ; SetRGBA(176,196,222); }
            else if ( (L"lightYellow")			== sValue ) { this->m_eValue = presetcolorvalLightYellow ; SetRGBA(255,255,224); }
            else if ( (L"lime")				== sValue ) { this->m_eValue = presetcolorvalLime ; SetRGBA(0,255,0); }
            else if ( (L"limeGreen")			== sValue ) { this->m_eValue = presetcolorvalLimeGreen ; SetRGBA(50,205,50); }
            else if ( (L"linen")				== sValue ) { this->m_eValue = presetcolorvalLinen; SetRGBA(250,240,230); }
            else if ( (L"ltBlue")				== sValue ) { this->m_eValue = presetcolorvalLtBlue ; SetRGBA(173,216,230); }
            else if ( (L"ltCoral")				== sValue ) { this->m_eValue = presetcolorvalLtCoral ; SetRGBA(240,128,128); }
            else if ( (L"ltCyan")				== sValue ) { this->m_eValue = presetcolorvalLtCyan ; SetRGBA(224,255,255); }
            else if ( (L"ltGoldenrodYellow")	== sValue ) { this->m_eValue = presetcolorvalLtGoldenrodYellow; SetRGBA(250,250,120); }
            else if ( (L"ltGray")				== sValue ) { this->m_eValue = presetcolorvalLtGray ; SetRGBA(211,211,211); }
            else if ( (L"ltGreen")				== sValue ) { this->m_eValue = presetcolorvalLtGreen ; SetRGBA(144,238,144); }
            else if ( (L"ltGrey")				== sValue ) { this->m_eValue = presetcolorvalLtGrey ; SetRGBA(211,211,211); }
            else if ( (L"ltPink")				== sValue ) { this->m_eValue = presetcolorvalLtPink ; SetRGBA(255,182,193); }
            else if ( (L"ltSalmon")			== sValue ) { this->m_eValue = presetcolorvalLtSalmon ; SetRGBA(255,160,122); }
            else if ( (L"ltSeaGreen")			== sValue ) { this->m_eValue = presetcolorvalLtSeaGreen ; SetRGBA(32,178,170); }
            else if ( (L"ltSkyBlue")			== sValue ) { this->m_eValue = presetcolorvalLtSkyBlue ; SetRGBA(135,206,250); }
            else if ( (L"ltSlateGray")			== sValue ) { this->m_eValue = presetcolorvalLtSlateGray ; SetRGBA(119,136,153); }
            else if ( (L"ltSlateGrey")			== sValue ) { this->m_eValue = presetcolorvalLtSlateGrey ; SetRGBA(119,136,153); }
            else if ( (L"ltSteelBlue")			== sValue ) { this->m_eValue = presetcolorvalLtSteelBlue ; SetRGBA(176,196,222); }
            else if ( (L"ltYellow")			== sValue ) { this->m_eValue = presetcolorvalLtYellow ; SetRGBA(255,255,224); }
            break;
        case 'm':
            if      ( (L"magenta")				== sValue ) { this->m_eValue = presetcolorvalMagenta ; SetRGBA(255,0,255); }
            else if ( (L"maroon")				== sValue ) { this->m_eValue = presetcolorvalMaroon ; SetRGBA(128,0,0); }
            else if ( (L"medAquamarine")		== sValue ) { this->m_eValue = presetcolorvalMedAquamarine ; SetRGBA(102,205,170); }
            else if ( (L"medBlue")				== sValue ) { this->m_eValue = presetcolorvalMedBlue ; SetRGBA(0,0,205); }
            else if ( (L"mediumAquamarine")	== sValue ) { this->m_eValue = presetcolorvalMediumAquamarine; SetRGBA(102,205,170); }
            else if ( (L"mediumBlue")			== sValue ) { this->m_eValue = presetcolorvalMediumBlue ; SetRGBA(0,0,205); }
            else if ( (L"mediumOrchid")		== sValue ) { this->m_eValue = presetcolorvalMediumOrchid ; SetRGBA(186,85,211); }
            else if ( (L"mediumPurple")		== sValue ) { this->m_eValue = presetcolorvalMediumPurple ; SetRGBA(147,112,219); }
            else if ( (L"mediumSeaGreen")		== sValue ) { this->m_eValue = presetcolorvalMediumSeaGreen ; SetRGBA(60,179,113); }
            else if ( (L"mediumSlateBlue")		== sValue ) { this->m_eValue = presetcolorvalMediumSlateBlue ; SetRGBA(123,104,238); }
            else if ( (L"mediumSpringGreen")	== sValue ) { this->m_eValue = presetcolorvalMediumSpringGreen; SetRGBA(0,250,154); }
            else if ( (L"mediumTurquoise")		== sValue ) { this->m_eValue = presetcolorvalMediumTurquoise ; SetRGBA(72,209,204); }
            else if ( (L"mediumVioletRed")		== sValue ) { this->m_eValue = presetcolorvalMediumVioletRed ; SetRGBA(199,21,133); }
            else if ( (L"medOrchid")			== sValue ) { this->m_eValue = presetcolorvalMedOrchid ; SetRGBA(186,85,211); }
            else if ( (L"medPurple")			== sValue ) { this->m_eValue = presetcolorvalMedPurple ; SetRGBA(147,112,219); }
            else if ( (L"medSeaGreen")			== sValue ) { this->m_eValue = presetcolorvalMedSeaGreen ; SetRGBA(60,179,113); }
            else if ( (L"medSlateBlue")		== sValue ) { this->m_eValue = presetcolorvalMedSlateBlue ; SetRGBA(123,104,238); }
            else if ( (L"medSpringGreen")		== sValue ) { this->m_eValue = presetcolorvalMedSpringGreen ; SetRGBA(0,250,154); }
            else if ( (L"medTurquoise")		== sValue ) { this->m_eValue = presetcolorvalMedTurquoise ; SetRGBA(72,209,204); }
            else if ( (L"medVioletRed")		== sValue ) { this->m_eValue = presetcolorvalMedVioletRed ; SetRGBA(199,21,133); }
            else if ( (L"midnightBlue")		== sValue ) { this->m_eValue = presetcolorvalMidnightBlue ; SetRGBA(25,25,112); }
            else if ( (L"mintCream")			== sValue ) { this->m_eValue = presetcolorvalMintCream ; SetRGBA(245,255,250); }
            else if ( (L"mistyRose")			== sValue ) { this->m_eValue = presetcolorvalMistyRose ; SetRGBA(255,228,225); }
            else if ( (L"moccasin")			== sValue ) { this->m_eValue = presetcolorvalMoccasin ; SetRGBA(255,228,181); }
            break;
        case 'n':
            if      ( (L"navajoWhite")			== sValue ) { this->m_eValue = presetcolorvalNavajoWhite ; SetRGBA(255,222,173); }
            else if ( (L"navy")				== sValue ) { this->m_eValue = presetcolorvalNavy ; SetRGBA(0,0,128); }
            break;
        case 'o':
            if      ( (L"oldLace")				== sValue ) { this->m_eValue = presetcolorvalOldLace ; SetRGBA(253,245,230); }
            else if ( (L"olive")				== sValue ) { this->m_eValue = presetcolorvalOlive ; SetRGBA(128,128,0); }
            else if ( (L"oliveDrab")			== sValue ) { this->m_eValue = presetcolorvalOliveDrab ; SetRGBA(107,142,35); }
            else if ( (L"orange")				== sValue ) { this->m_eValue = presetcolorvalOrange ; SetRGBA(255,165,0); }
            else if ( (L"orangeRed")			== sValue ) { this->m_eValue = presetcolorvalOrangeRed ; SetRGBA(255,69,0); }
            else if ( (L"orchid")				== sValue ) { this->m_eValue = presetcolorvalOrchid ; SetRGBA(218,112,214); }
            break;
        case 'p':
            if      ( (L"paleGoldenrod")		== sValue ) { this->m_eValue = presetcolorvalPaleGoldenrod ; SetRGBA(238,232,170); }
            else if ( (L"paleGreen")			== sValue ) { this->m_eValue = presetcolorvalPaleGreen ; SetRGBA(152,251,152); }
            else if ( (L"paleTurquoise")		== sValue ) { this->m_eValue = presetcolorvalPaleTurquoise ; SetRGBA(175,238,238); }
            else if ( (L"paleVioletRed")		== sValue ) { this->m_eValue = presetcolorvalPaleVioletRed ; SetRGBA(219,112,147); }
            else if ( (L"papayaWhip")			== sValue ) { this->m_eValue = presetcolorvalPapayaWhip ; SetRGBA(255,239,213); }
            else if ( (L"peachPuff")			== sValue ) { this->m_eValue = presetcolorvalPeachPuff ; SetRGBA(255,218,185); }
            else if ( (L"peru")				== sValue ) { this->m_eValue = presetcolorvalPeru ; SetRGBA(205,133,63); }
            else if ( (L"pink")				== sValue ) { this->m_eValue = presetcolorvalPink ; SetRGBA(255,192,203); }
            else if ( (L"plum")				== sValue ) { this->m_eValue = presetcolorvalPlum ; SetRGBA(221,160,221); }
            else if ( (L"powderBlue")			== sValue ) { this->m_eValue = presetcolorvalPowderBlue ; SetRGBA(176,224,230); }
            else if ( (L"purple")				== sValue ) { this->m_eValue = presetcolorvalPurple ; SetRGBA(128,0,128); }
            break;
        case 'r':
            if      ( (L"red")					== sValue ) { this->m_eValue = presetcolorvalRed ; SetRGBA(255,0,0); }
            else if ( (L"rosyBrown")			== sValue ) { this->m_eValue = presetcolorvalRosyBrown ; SetRGBA(188,143,143); }
            else if ( (L"royalBlue")			== sValue ) { this->m_eValue = presetcolorvalRoyalBlue ; SetRGBA(65,105,225); }
            break;
        case 's':
            if      ( (L"saddleBrown")			== sValue ) { this->m_eValue = presetcolorvalSaddleBrown ; SetRGBA(139,69,19); }
            else if ( (L"salmon")				== sValue ) { this->m_eValue = presetcolorvalSalmon ; SetRGBA(250,128,114); }
            else if ( (L"sandyBrown")			== sValue ) { this->m_eValue = presetcolorvalSandyBrown ; SetRGBA(244,164,96); }
            else if ( (L"seaGreen")			== sValue ) { this->m_eValue = presetcolorvalSeaGreen ; SetRGBA(46,139,87); }
            else if ( (L"seaShell")			== sValue ) { this->m_eValue = presetcolorvalSeaShell ; SetRGBA(255,245,238); }
            else if ( (L"sienna")				== sValue ) { this->m_eValue = presetcolorvalSienna ; SetRGBA(160,82,45); }
            else if ( (L"silver")				== sValue ) { this->m_eValue = presetcolorvalSilver ; SetRGBA(192,192,192); }
            else if ( (L"skyBlue")				== sValue ) { this->m_eValue = presetcolorvalSkyBlue ; SetRGBA(135,206,235); }
            else if ( (L"slateBlue")			== sValue ) { this->m_eValue = presetcolorvalSlateBlue ; SetRGBA(106,90,205); }
            else if ( (L"slateGray")			== sValue ) { this->m_eValue = presetcolorvalSlateGray ; SetRGBA(112,128,144); }
            else if ( (L"slateGrey")			== sValue ) { this->m_eValue = presetcolorvalSlateGrey ; SetRGBA(112,128,144); }
            else if ( (L"snow")				== sValue ) { this->m_eValue = presetcolorvalSnow ; SetRGBA(255,250,250); }
            else if ( (L"springGreen")			== sValue ) { this->m_eValue = presetcolorvalSpringGreen ; SetRGBA(0,255,127); }
            else if ( (L"steelBlue")			== sValue ) { this->m_eValue = presetcolorvalSteelBlue ; SetRGBA(70,130,180); }
            break;
        case 't':
            if      ( (L"tan")					== sValue ) { this->m_eValue = presetcolorvalTan ; SetRGBA(210,180,140); }
            else if ( (L"teal")				== sValue ) { this->m_eValue = presetcolorvalTeal ; SetRGBA(0,128,128); }
            else if ( (L"thistle")				== sValue ) { this->m_eValue = presetcolorvalThistle ; SetRGBA(216,191,216); }
            else if ( (L"tomato")				== sValue ) { this->m_eValue = presetcolorvalTomato ; SetRGBA(255,99,71); }
            else if ( (L"turquoise")			== sValue ) { this->m_eValue = presetcolorvalTurquoise ; SetRGBA(64,224,208); }
            break;
        case 'v':
            if      ( (L"violet")				== sValue ) { this->m_eValue = presetcolorvalViolet ; SetRGBA(238,130,238); }
            break;
        case 'w':
            if      ( (L"wheat")				== sValue ) { this->m_eValue = presetcolorvalWheat ; SetRGBA(245,222,179); }
            else if ( (L"white")				== sValue ) { this->m_eValue = presetcolorvalWhite ; SetRGBA(255,255,255); }
            else if ( (L"whiteSmoke")			== sValue ) { this->m_eValue = presetcolorvalWhiteSmoke ; SetRGBA(245,245,245); }
            break;
        case 'y':
            if      ( (L"yellow")				== sValue ) { this->m_eValue = presetcolorvalYellow ; SetRGBA(255,255,0); }
            else if ( (L"yellowGreen")			== sValue ) { this->m_eValue = presetcolorvalYellowGreen ; SetRGBA(154,205,50); }
            break;
        }

        return this->m_eValue;
    }

    template<EPresetColorVal eDefValue>
    bool CPresetColorVal<eDefValue>::FromStringIgnoreCase(std::wstring &sValue)
	{
		this->m_eValue = presetcolorvalBlack;
		SetRGBA( 0, 0, 0, 255 );

		if ( sValue.empty() )
			return false;

		std::wstring sValueLower = sValue;
		NSStringExt::ToLower(sValueLower);
		wchar_t wChar = sValueLower[0];
		switch ( wChar )
		{
		case 'a':
			if      ( (L"aliceblue")			== sValueLower ) { this->m_eValue = presetcolorvalAliceBlue; SetRGBA(240,248,255); }
			else if ( (L"antiquewhite")		== sValueLower ) { this->m_eValue = presetcolorvalAntiqueWhite; SetRGBA(250,235,215); }
			else if ( (L"aqua")				== sValueLower ) { this->m_eValue = presetcolorvalAqua; SetRGBA(0,255,255); }
			else if ( (L"aquamarine")			== sValueLower ) { this->m_eValue = presetcolorvalAquamarine; SetRGBA(127,255,212); }
			else if ( (L"azure")				== sValueLower ) { this->m_eValue = presetcolorvalAzure; SetRGBA(240,255,255); }
			break;
		case 'b':
			if      ( (L"beige")				== sValueLower ) { this->m_eValue = presetcolorvalBeige; SetRGBA(245,245,220); }
			else if ( (L"bisque")				== sValueLower ) { this->m_eValue = presetcolorvalBisque ; SetRGBA(255,228,196); }
			else if ( (L"black")				== sValueLower ) { return true; }
			else if ( (L"blanchedalmond")		== sValueLower ) { this->m_eValue = presetcolorvalBlanchedAlmond ; SetRGBA(255,235,205); }
			else if ( (L"blue")				== sValueLower ) { this->m_eValue = presetcolorvalBlue ; SetRGBA(0,0,255); }
			else if ( (L"blueviolet")			== sValueLower ) { this->m_eValue = presetcolorvalBlueViolet ; SetRGBA(138,43,226); }
			else if ( (L"brown")				== sValueLower ) { this->m_eValue = presetcolorvalBrown ; SetRGBA(165,42,42); }
			else if ( (L"burlywood")			== sValueLower ) { this->m_eValue = presetcolorvalBurlyWood ; SetRGBA(222,184,135); }
			break;
		case 'c':
			if      ( (L"cadetblue")			== sValueLower ) { this->m_eValue = presetcolorvalCadetBlue ; SetRGBA(95,158,160); }
			else if ( (L"chartreuse")			== sValueLower ) { this->m_eValue = presetcolorvalChartreuse ; SetRGBA(127,255,0); }
			else if ( (L"chocolate")			== sValueLower ) { this->m_eValue = presetcolorvalChocolate ; SetRGBA(210,105,30); }
			else if ( (L"coral")				== sValueLower ) { this->m_eValue = presetcolorvalCoral ; SetRGBA(255,127,80); }
			else if ( (L"cornflowerblue")		== sValueLower ) { this->m_eValue = presetcolorvalCornflowerBlue ; SetRGBA(100,149,237); }
			else if ( (L"cornsilk")			== sValueLower ) { this->m_eValue = presetcolorvalCornsilk ; SetRGBA(255,248,220); }
			else if ( (L"crimson")				== sValueLower ) { this->m_eValue = presetcolorvalCrimson ; SetRGBA(220,20,60); }
			else if ( (L"cyan")				== sValueLower ) { this->m_eValue = presetcolorvalCyan ; SetRGBA(0,255,255); }
			break;
		case 'd':
			if      ( (L"darkblue")			== sValueLower ) { this->m_eValue = presetcolorvalDarkBlue ; SetRGBA(0,0,139); }
			else if ( (L"darkcyan")			== sValueLower ) { this->m_eValue = presetcolorvalDarkCyan ; SetRGBA(0,139,139); }
			else if ( (L"darkgoldenrod")		== sValueLower ) { this->m_eValue = presetcolorvalDarkGoldenrod ; SetRGBA(184,134,11); }
			else if ( (L"darkgray")			== sValueLower ) { this->m_eValue = presetcolorvalDarkGray ; SetRGBA(169,169,169); }
			else if ( (L"darkgreen")			== sValueLower ) { this->m_eValue = presetcolorvalDarkGreen ; SetRGBA(0,100,0); }
			else if ( (L"darkgrey")			== sValueLower ) { this->m_eValue = presetcolorvalDarkGrey ; SetRGBA(169,169,169); }
			else if ( (L"darkkhaki")			== sValueLower ) { this->m_eValue = presetcolorvalDarkKhaki ; SetRGBA(189,183,107); }
			else if ( (L"darkmagenta")			== sValueLower ) { this->m_eValue = presetcolorvalDarkMagenta ; SetRGBA(139,0,139); }
			else if ( (L"darkolivegreen")		== sValueLower ) { this->m_eValue = presetcolorvalDarkOliveGreen ; SetRGBA(85,107,47); }
			else if ( (L"darkorange")			== sValueLower ) { this->m_eValue = presetcolorvalDarkOrange ; SetRGBA(255,140,0); }
			else if ( (L"darkorchid")			== sValueLower ) { this->m_eValue = presetcolorvalDarkOrchid ; SetRGBA(153,50,204); }
			else if ( (L"darkred")				== sValueLower ) { this->m_eValue = presetcolorvalDarkRed ; SetRGBA(139,0,0); }
			else if ( (L"darksalmon")			== sValueLower ) { this->m_eValue = presetcolorvalDarkSalmon ; SetRGBA(233,150,122); }
			else if ( (L"darkseagreen")		== sValueLower ) { this->m_eValue = presetcolorvalDarkSeaGreen ; SetRGBA(143,188,143); }
			else if ( (L"darkslateblue")		== sValueLower ) { this->m_eValue = presetcolorvalDarkSlateBlue ; SetRGBA(72,61,139); }
			else if ( (L"darkslategray")		== sValueLower ) { this->m_eValue = presetcolorvalDarkSlateGray ; SetRGBA(47,79,79); }
			else if ( (L"darkslategrey")		== sValueLower ) { this->m_eValue = presetcolorvalDarkSlateGrey ; SetRGBA(47,79,79); }
			else if ( (L"darkturquoise")		== sValueLower ) { this->m_eValue = presetcolorvalDarkTurquoise ; SetRGBA(0,206,209); }
			else if ( (L"darkviolet")			== sValueLower ) { this->m_eValue = presetcolorvalDarkViolet ; SetRGBA(148,0,211); }
			else if ( (L"deeppink")			== sValueLower ) { this->m_eValue = presetcolorvalDeepPink ; SetRGBA(255,20,147); }
			else if ( (L"deepskyblue")			== sValueLower ) { this->m_eValue = presetcolorvalDeepSkyBlue ; SetRGBA(0,191,255); }
			else if ( (L"dimgray")				== sValueLower ) { this->m_eValue = presetcolorvalDimGray ; SetRGBA(105,105,105); }
			else if ( (L"dimgrey")				== sValueLower ) { this->m_eValue = presetcolorvalDimGrey ; SetRGBA(105,105,105); }
			else if ( (L"dkblue")				== sValueLower ) { this->m_eValue = presetcolorvalDkBlue ; SetRGBA(0,0,139); }
			else if ( (L"dkcyan")				== sValueLower ) { this->m_eValue = presetcolorvalDkCyan ; SetRGBA(0,139,139); }
			else if ( (L"dkgoldenrod")			== sValueLower ) { this->m_eValue = presetcolorvalDkGoldenrod ; SetRGBA(184,134,11); }
			else if ( (L"dkgray")				== sValueLower ) { this->m_eValue = presetcolorvalDkGray ; SetRGBA(169,169,169); }
			else if ( (L"dkgreen")				== sValueLower ) { this->m_eValue = presetcolorvalDkGreen ; SetRGBA(0,100,0); }
			else if ( (L"dkgrey")				== sValueLower ) { this->m_eValue = presetcolorvalDkGrey ; SetRGBA(169,169,169); }
			else if ( (L"dkkhaki")				== sValueLower ) { this->m_eValue = presetcolorvalDkKhaki ; SetRGBA(189,183,107); }
			else if ( (L"dkmagenta")			== sValueLower ) { this->m_eValue = presetcolorvalDkMagenta ; SetRGBA(139,0,139); }
			else if ( (L"dkolivegreen")		== sValueLower ) { this->m_eValue = presetcolorvalDkOliveGreen ; SetRGBA(85,107,47); }
			else if ( (L"dkorange")			== sValueLower ) { this->m_eValue = presetcolorvalDkOrange ; SetRGBA(255,140,0); }
			else if ( (L"dkorchid")			== sValueLower ) { this->m_eValue = presetcolorvalDkOrchid ; SetRGBA(153,50,204); }
			else if ( (L"dkred")				== sValueLower ) { this->m_eValue = presetcolorvalDkRed ; SetRGBA(139,0,0); }
			else if ( (L"dksalmon")			== sValueLower ) { this->m_eValue = presetcolorvalDkSalmon ; SetRGBA(233,150,122); }
			else if ( (L"dkseagreen")			== sValueLower ) { this->m_eValue = presetcolorvalDkSeaGreen ; SetRGBA(143,188,139); }
			else if ( (L"dkslateblue")			== sValueLower ) { this->m_eValue = presetcolorvalDkSlateBlue ; SetRGBA(72,61,139); }
			else if ( (L"dkslategray")			== sValueLower ) { this->m_eValue = presetcolorvalDkSlateGray ; SetRGBA(47,79,79); }
			else if ( (L"dkslategrey")			== sValueLower ) { this->m_eValue = presetcolorvalDkSlateGrey ; SetRGBA(47,79,79); }
			else if ( (L"dkturquoise")			== sValueLower ) { this->m_eValue = presetcolorvalDkTurquoise ; SetRGBA(0,206,209); }
			else if ( (L"dkviolet")			== sValueLower ) { this->m_eValue = presetcolorvalDkViolet ; SetRGBA(148,0,211); }
			else if ( (L"dodgerblue")			== sValueLower ) { this->m_eValue = presetcolorvalDodgerBlue ; SetRGBA(30,144,255); }
			break;
		case 'f':
			if      ( (L"firebrick")			== sValueLower ) { this->m_eValue = presetcolorvalFirebrick ; SetRGBA(178,34,34); }
			else if ( (L"floralwhite")			== sValueLower ) { this->m_eValue = presetcolorvalFloralWhite ; SetRGBA(255,250,240); }
			else if ( (L"forestgreen")			== sValueLower ) { this->m_eValue = presetcolorvalForestGreen ; SetRGBA(34,139,34); }
			else if ( (L"fuchsia")				== sValueLower ) { this->m_eValue = presetcolorvalFuchsia ; SetRGBA(255,0,255); }
			break;
		case 'g':
			if      ( (L"gainsboro")			== sValueLower ) { this->m_eValue = presetcolorvalGainsboro ; SetRGBA(220,220,220); }
			else if ( (L"ghostwhite")			== sValueLower ) { this->m_eValue = presetcolorvalGhostWhite ; SetRGBA(248,248,255); }
			else if ( (L"gold")				== sValueLower ) { this->m_eValue = presetcolorvalGold ; SetRGBA(255,215,0); }
			else if ( (L"goldenrod")			== sValueLower ) { this->m_eValue = presetcolorvalGoldenrod ; SetRGBA(218,165,32); }
			else if ( (L"gray")				== sValueLower ) { this->m_eValue = presetcolorvalGray ; SetRGBA(128,128,128); }
			else if ( (L"green")				== sValueLower ) { this->m_eValue = presetcolorvalGreen ; SetRGBA(0,128,0); }
			else if ( (L"greenyellow")			== sValueLower ) { this->m_eValue = presetcolorvalGreenYellow ; SetRGBA(173,255,47); }
			else if ( (L"grey")				== sValueLower ) { this->m_eValue = presetcolorvalGrey ; SetRGBA(128,128,128); }
			break;
		case 'h':
			if      ( (L"honeydew")			== sValueLower ) { this->m_eValue = presetcolorvalHoneydew ; SetRGBA(240,255,240); }
			else if ( (L"hotpink")				== sValueLower ) { this->m_eValue = presetcolorvalHotPink ; SetRGBA(255,105,180); }
			break;
		case 'i':
			if      ( (L"indianred")			== sValueLower ) { this->m_eValue = presetcolorvalIndianRed ; SetRGBA(205,92,92); }
			else if ( (L"indigo")				== sValueLower ) { this->m_eValue = presetcolorvalIndigo ; SetRGBA(75,0,130); }
			else if ( (L"ivory")				== sValueLower ) { this->m_eValue = presetcolorvalIvory ; SetRGBA(255,255,240); }
			break;
		case 'k':
			if      ( (L"khaki")				== sValueLower ) { this->m_eValue = presetcolorvalKhaki ; SetRGBA(240,230,140); }
			break;
		case 'l':
			if      ( (L"lavender")			== sValueLower ) { this->m_eValue = presetcolorvalLavender ; SetRGBA(230,230,250); }
			else if ( (L"lavenderblush")		== sValueLower ) { this->m_eValue = presetcolorvalLavenderBlush ; SetRGBA(255,240,245); }
			else if ( (L"lawngreen")			== sValueLower ) { this->m_eValue = presetcolorvalLawnGreen ; SetRGBA(124,252,0); }
			else if ( (L"lemonchiffon")		== sValueLower ) { this->m_eValue = presetcolorvalLemonChiffon ; SetRGBA(255,250,205); }
			else if ( (L"lightblue")			== sValueLower ) { this->m_eValue = presetcolorvalLightBlue ; SetRGBA(173,216,230); }
			else if ( (L"lightcoral")			== sValueLower ) { this->m_eValue = presetcolorvalLightCoral ; SetRGBA(240,128,128); }
			else if ( (L"lightcyan")			== sValueLower ) { this->m_eValue = presetcolorvalLightCyan ; SetRGBA(224,255,255); }
			else if ( (L"lightgoldenrodyellow")== sValueLower ) { this->m_eValue = presetcolorvalLightGoldenrodYellow; SetRGBA(250,250,210); }
			else if ( (L"lightgray")			== sValueLower ) { this->m_eValue = presetcolorvalLightGray ; SetRGBA(211,211,211); }
			else if ( (L"lightgreen")			== sValueLower ) { this->m_eValue = presetcolorvalLightGreen ; SetRGBA(144,238,144); }
			else if ( (L"lightgrey")			== sValueLower ) { this->m_eValue = presetcolorvalLightGrey ; SetRGBA(211,211,211); }
			else if ( (L"lightpink")			== sValueLower ) { this->m_eValue = presetcolorvalLightPink ; SetRGBA(255,182,193); }
			else if ( (L"lightsalmon")			== sValueLower ) { this->m_eValue = presetcolorvalLightSalmon ; SetRGBA(255,160,122); }
			else if ( (L"lightseagreen")		== sValueLower ) { this->m_eValue = presetcolorvalLightSeaGreen ; SetRGBA(32,178,170); }
			else if ( (L"lightskyblue")		== sValueLower ) { this->m_eValue = presetcolorvalLightSkyBlue ; SetRGBA(135,206,250); }
			else if ( (L"lightslategray")		== sValueLower ) { this->m_eValue = presetcolorvalLightSlateGray ; SetRGBA(119,136,153); }
			else if ( (L"lightslategrey")		== sValueLower ) { this->m_eValue = presetcolorvalLightSlateGrey ; SetRGBA(119,136,153); }
			else if ( (L"lightsteelblue")		== sValueLower ) { this->m_eValue = presetcolorvalLightSteelBlue ; SetRGBA(176,196,222); }
			else if ( (L"lightyellow")			== sValueLower ) { this->m_eValue = presetcolorvalLightYellow ; SetRGBA(255,255,224); }
			else if ( (L"lime")				== sValueLower ) { this->m_eValue = presetcolorvalLime ; SetRGBA(0,255,0); }
			else if ( (L"limegreen")			== sValueLower ) { this->m_eValue = presetcolorvalLimeGreen ; SetRGBA(50,205,50); }
			else if ( (L"linen")				== sValueLower ) { this->m_eValue = presetcolorvalLinen; SetRGBA(250,240,230); }
			else if ( (L"ltblue")				== sValueLower ) { this->m_eValue = presetcolorvalLtBlue ; SetRGBA(173,216,230); }
			else if ( (L"ltcoral")				== sValueLower ) { this->m_eValue = presetcolorvalLtCoral ; SetRGBA(240,128,128); }
			else if ( (L"ltcyan")				== sValueLower ) { this->m_eValue = presetcolorvalLtCyan ; SetRGBA(224,255,255); }
			else if ( (L"ltgoldenrodyellow")	== sValueLower ) { this->m_eValue = presetcolorvalLtGoldenrodYellow; SetRGBA(250,250,120); }
			else if ( (L"ltgray")				== sValueLower ) { this->m_eValue = presetcolorvalLtGray ; SetRGBA(211,211,211); }
			else if ( (L"ltgreen")				== sValueLower ) { this->m_eValue = presetcolorvalLtGreen ; SetRGBA(144,238,144); }
			else if ( (L"ltgrey")				== sValueLower ) { this->m_eValue = presetcolorvalLtGrey ; SetRGBA(211,211,211); }
			else if ( (L"ltpink")				== sValueLower ) { this->m_eValue = presetcolorvalLtPink ; SetRGBA(255,182,193); }
			else if ( (L"ltsalmon")			== sValueLower ) { this->m_eValue = presetcolorvalLtSalmon ; SetRGBA(255,160,122); }
			else if ( (L"ltseagreen")			== sValueLower ) { this->m_eValue = presetcolorvalLtSeaGreen ; SetRGBA(32,178,170); }
			else if ( (L"ltskyblue")			== sValueLower ) { this->m_eValue = presetcolorvalLtSkyBlue ; SetRGBA(135,206,250); }
			else if ( (L"ltslategray")			== sValueLower ) { this->m_eValue = presetcolorvalLtSlateGray ; SetRGBA(119,136,153); }
			else if ( (L"ltslategrey")			== sValueLower ) { this->m_eValue = presetcolorvalLtSlateGrey ; SetRGBA(119,136,153); }
			else if ( (L"ltsteelblue")			== sValueLower ) { this->m_eValue = presetcolorvalLtSteelBlue ; SetRGBA(176,196,222); }
			else if ( (L"ltyellow")			== sValueLower ) { this->m_eValue = presetcolorvalLtYellow ; SetRGBA(255,255,224); }
			break;
		case 'm':
			if      ( (L"magenta")				== sValueLower ) { this->m_eValue = presetcolorvalMagenta ; SetRGBA(255,0,255); }
			else if ( (L"maroon")				== sValueLower ) { this->m_eValue = presetcolorvalMaroon ; SetRGBA(128,0,0); }
			else if ( (L"medaquamarine")		== sValueLower ) { this->m_eValue = presetcolorvalMedAquamarine ; SetRGBA(102,205,170); }
			else if ( (L"medblue")				== sValueLower ) { this->m_eValue = presetcolorvalMedBlue ; SetRGBA(0,0,205); }
			else if ( (L"mediumaquamarine")	== sValueLower ) { this->m_eValue = presetcolorvalMediumAquamarine; SetRGBA(102,205,170); }
			else if ( (L"mediumblue")			== sValueLower ) { this->m_eValue = presetcolorvalMediumBlue ; SetRGBA(0,0,205); }
			else if ( (L"mediumorchid")		== sValueLower ) { this->m_eValue = presetcolorvalMediumOrchid ; SetRGBA(186,85,211); }
			else if ( (L"mediumpurple")		== sValueLower ) { this->m_eValue = presetcolorvalMediumPurple ; SetRGBA(147,112,219); }
			else if ( (L"mediumseagreen")		== sValueLower ) { this->m_eValue = presetcolorvalMediumSeaGreen ; SetRGBA(60,179,113); }
			else if ( (L"mediumslateblue")		== sValueLower ) { this->m_eValue = presetcolorvalMediumSlateBlue ; SetRGBA(123,104,238); }
			else if ( (L"mediumspringgreen")	== sValueLower ) { this->m_eValue = presetcolorvalMediumSpringGreen; SetRGBA(0,250,154); }
			else if ( (L"mediumturquoise")		== sValueLower ) { this->m_eValue = presetcolorvalMediumTurquoise ; SetRGBA(72,209,204); }
			else if ( (L"mediumvioletred")		== sValueLower ) { this->m_eValue = presetcolorvalMediumVioletRed ; SetRGBA(199,21,133); }
			else if ( (L"medorchid")			== sValueLower ) { this->m_eValue = presetcolorvalMedOrchid ; SetRGBA(186,85,211); }
			else if ( (L"medpurple")			== sValueLower ) { this->m_eValue = presetcolorvalMedPurple ; SetRGBA(147,112,219); }
			else if ( (L"medseagreen")			== sValueLower ) { this->m_eValue = presetcolorvalMedSeaGreen ; SetRGBA(60,179,113); }
			else if ( (L"medslateblue")		== sValueLower ) { this->m_eValue = presetcolorvalMedSlateBlue ; SetRGBA(123,104,238); }
			else if ( (L"medspringgreen")		== sValueLower ) { this->m_eValue = presetcolorvalMedSpringGreen ; SetRGBA(0,250,154); }
			else if ( (L"medturquoise")		== sValueLower ) { this->m_eValue = presetcolorvalMedTurquoise ; SetRGBA(72,209,204); }
			else if ( (L"medvioletred")		== sValueLower ) { this->m_eValue = presetcolorvalMedVioletRed ; SetRGBA(199,21,133); }
			else if ( (L"midnightblue")		== sValueLower ) { this->m_eValue = presetcolorvalMidnightBlue ; SetRGBA(25,25,112); }
			else if ( (L"mintcream")			== sValueLower ) { this->m_eValue = presetcolorvalMintCream ; SetRGBA(245,255,250); }
			else if ( (L"mistyrose")			== sValueLower ) { this->m_eValue = presetcolorvalMistyRose ; SetRGBA(255,228,225); }
			else if ( (L"moccasin")			== sValueLower ) { this->m_eValue = presetcolorvalMoccasin ; SetRGBA(255,228,181); }
			break;
		case 'n':
			if      ( (L"navajowhite")			== sValueLower ) { this->m_eValue = presetcolorvalNavajoWhite ; SetRGBA(255,222,173); }
			else if ( (L"navy")				== sValueLower ) { this->m_eValue = presetcolorvalNavy ; SetRGBA(0,0,128); }
			break;
		case 'o':
			if      ( (L"oldlace")				== sValueLower ) { this->m_eValue = presetcolorvalOldLace ; SetRGBA(253,245,230); }
			else if ( (L"olive")				== sValueLower ) { this->m_eValue = presetcolorvalOlive ; SetRGBA(128,128,0); }
			else if ( (L"olivedrab")			== sValueLower ) { this->m_eValue = presetcolorvalOliveDrab ; SetRGBA(107,142,35); }
			else if ( (L"orange")				== sValueLower ) { this->m_eValue = presetcolorvalOrange ; SetRGBA(255,165,0); }
			else if ( (L"orangered")			== sValueLower ) { this->m_eValue = presetcolorvalOrangeRed ; SetRGBA(255,69,0); }
			else if ( (L"orchid")				== sValueLower ) { this->m_eValue = presetcolorvalOrchid ; SetRGBA(218,112,214); }
			break;
		case 'p':
			if      ( (L"palegoldenrod")		== sValueLower ) { this->m_eValue = presetcolorvalPaleGoldenrod ; SetRGBA(238,232,170); }
			else if ( (L"palegreen")			== sValueLower ) { this->m_eValue = presetcolorvalPaleGreen ; SetRGBA(152,251,152); }
			else if ( (L"paleturquoise")		== sValueLower ) { this->m_eValue = presetcolorvalPaleTurquoise ; SetRGBA(175,238,238); }
			else if ( (L"palevioletred")		== sValueLower ) { this->m_eValue = presetcolorvalPaleVioletRed ; SetRGBA(219,112,147); }
			else if ( (L"papayawhip")			== sValueLower ) { this->m_eValue = presetcolorvalPapayaWhip ; SetRGBA(255,239,213); }
			else if ( (L"peachpuff")			== sValueLower ) { this->m_eValue = presetcolorvalPeachPuff ; SetRGBA(255,218,185); }
			else if ( (L"peru")				== sValueLower ) { this->m_eValue = presetcolorvalPeru ; SetRGBA(205,133,63); }
			else if ( (L"pink")				== sValueLower ) { this->m_eValue = presetcolorvalPink ; SetRGBA(255,192,203); }
			else if ( (L"plum")				== sValueLower ) { this->m_eValue = presetcolorvalPlum ; SetRGBA(221,160,221); }
			else if ( (L"powderblue")			== sValueLower ) { this->m_eValue = presetcolorvalPowderBlue ; SetRGBA(176,224,230); }
			else if ( (L"purple")				== sValueLower ) { this->m_eValue = presetcolorvalPurple ; SetRGBA(128,0,128); }
			break;
		case 'r':
			if      ( (L"red")					== sValueLower ) { this->m_eValue = presetcolorvalRed ; SetRGBA(255,0,0); }
			else if ( (L"rosybrown")			== sValueLower ) { this->m_eValue = presetcolorvalRosyBrown ; SetRGBA(188,143,143); }
			else if ( (L"royalblue")			== sValueLower ) { this->m_eValue = presetcolorvalRoyalBlue ; SetRGBA(65,105,225); }
			break;
		case 's':
			if      ( (L"saddlebrown")			== sValueLower ) { this->m_eValue = presetcolorvalSaddleBrown ; SetRGBA(139,69,19); }
			else if ( (L"salmon")				== sValueLower ) { this->m_eValue = presetcolorvalSalmon ; SetRGBA(250,128,114); }
			else if ( (L"sandybrown")			== sValueLower ) { this->m_eValue = presetcolorvalSandyBrown ; SetRGBA(244,164,96); }
			else if ( (L"seagreen")			== sValueLower ) { this->m_eValue = presetcolorvalSeaGreen ; SetRGBA(46,139,87); }
			else if ( (L"seashell")			== sValueLower ) { this->m_eValue = presetcolorvalSeaShell ; SetRGBA(255,245,238); }
			else if ( (L"sienna")				== sValueLower ) { this->m_eValue = presetcolorvalSienna ; SetRGBA(160,82,45); }
			else if ( (L"silver")				== sValueLower ) { this->m_eValue = presetcolorvalSilver ; SetRGBA(192,192,192); }
			else if ( (L"skyblue")				== sValueLower ) { this->m_eValue = presetcolorvalSkyBlue ; SetRGBA(135,206,235); }
			else if ( (L"slateblue")			== sValueLower ) { this->m_eValue = presetcolorvalSlateBlue ; SetRGBA(106,90,205); }
			else if ( (L"slategray")			== sValueLower ) { this->m_eValue = presetcolorvalSlateGray ; SetRGBA(112,128,144); }
			else if ( (L"slategrey")			== sValueLower ) { this->m_eValue = presetcolorvalSlateGrey ; SetRGBA(112,128,144); }
			else if ( (L"snow")				== sValueLower ) { this->m_eValue = presetcolorvalSnow ; SetRGBA(255,250,250); }
			else if ( (L"springgreen")			== sValueLower ) { this->m_eValue = presetcolorvalSpringGreen ; SetRGBA(0,255,127); }
			else if ( (L"steelblue")			== sValueLower ) { this->m_eValue = presetcolorvalSteelBlue ; SetRGBA(70,130,180); }
			break;
		case 't':
			if      ( (L"tan")					== sValueLower ) { this->m_eValue = presetcolorvalTan ; SetRGBA(210,180,140); }
			else if ( (L"teal")				== sValueLower ) { this->m_eValue = presetcolorvalTeal ; SetRGBA(0,128,128); }
			else if ( (L"thistle")				== sValueLower ) { this->m_eValue = presetcolorvalThistle ; SetRGBA(216,191,216); }
			else if ( (L"tomato")				== sValueLower ) { this->m_eValue = presetcolorvalTomato ; SetRGBA(255,99,71); }
			else if ( (L"turquoise")			== sValueLower ) { this->m_eValue = presetcolorvalTurquoise ; SetRGBA(64,224,208); }
			break;
		case 'v':
			if      ( (L"violet")				== sValueLower ) { this->m_eValue = presetcolorvalViolet ; SetRGBA(238,130,238); }
			break;
		case 'w':
			if      ( (L"wheat")				== sValueLower ) { this->m_eValue = presetcolorvalWheat ; SetRGBA(245,222,179); }
			else if ( (L"white")				== sValueLower ) { this->m_eValue = presetcolorvalWhite ; SetRGBA(255,255,255); }
			else if ( (L"whitesmoke")			== sValueLower ) { this->m_eValue = presetcolorvalWhiteSmoke ; SetRGBA(245,245,245); }
			break;
		case 'y':
			if      ( (L"yellow")				== sValueLower ) { this->m_eValue = presetcolorvalYellow ; SetRGBA(255,255,0); }
			else if ( (L"yellowgreen")			== sValueLower ) { this->m_eValue = presetcolorvalYellowGreen ; SetRGBA(154,205,50); }
			break;
		}
		//would exit earlier if 'black' == sValue therefore here presetcolorvalBlack is default value
		return presetcolorvalBlack != this->m_eValue;
	}

    template<EPresetColorVal eDefValue>
    std::wstring CPresetColorVal<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case presetcolorvalAliceBlue:			return (L"aliceBlue");
        case presetcolorvalAntiqueWhite:		return (L"antiqueWhite");
        case presetcolorvalAqua:				return (L"aqua");
        case presetcolorvalAquamarine:			return (L"aquamarine");
        case presetcolorvalAzure:				return (L"azure");
        case presetcolorvalBeige:				return (L"beige");
        case presetcolorvalBisque:				return (L"bisque");
        case presetcolorvalBlack :				return (L"black");
        case presetcolorvalBlanchedAlmond :		return (L"blanchedAlmond");
        case presetcolorvalBlue :				return (L"blue");
        case presetcolorvalBlueViolet :			return (L"blueViolet");
        case presetcolorvalBrown :				return (L"brown");
        case presetcolorvalBurlyWood :			return (L"burlyWood");
        case presetcolorvalCadetBlue :			return (L"cadetBlue");
        case presetcolorvalChartreuse :			return (L"chartreuse");
        case presetcolorvalChocolate :			return (L"chocolate");
        case presetcolorvalCoral :				return (L"coral");
        case presetcolorvalCornflowerBlue :		return (L"cornflowerBlue");
        case presetcolorvalCornsilk :			return (L"cornsilk");
        case presetcolorvalCrimson :			return (L"crimson");
        case presetcolorvalCyan :				return (L"cyan");
        case presetcolorvalDarkBlue :			return (L"darkBlue");
        case presetcolorvalDarkCyan :			return (L"darkCyan");
        case presetcolorvalDarkGoldenrod :		return (L"darkGoldenrod");
        case presetcolorvalDarkGray :			return (L"darkGray");
        case presetcolorvalDarkGreen:			return (L"darkGreen");
        case presetcolorvalDarkGrey :			return (L"darkGrey");
        case presetcolorvalDarkKhaki:			return (L"darkKhaki");
        case presetcolorvalDarkMagenta :		return (L"darkMagenta");
        case presetcolorvalDarkOliveGreen :		return (L"darkOliveGreen");
        case presetcolorvalDarkOrange :			return (L"darkOrange");
        case presetcolorvalDarkOrchid :			return (L"darkOrchid");
        case presetcolorvalDarkRed :			return (L"darkRed");
        case presetcolorvalDarkSalmon :			return (L"darkSalmon");
        case presetcolorvalDarkSeaGreen :		return (L"darkSeaGreen");
        case presetcolorvalDarkSlateBlue :		return (L"darkSlateBlue");
        case presetcolorvalDarkSlateGray :		return (L"darkSlateGray");
        case presetcolorvalDarkSlateGrey :		return (L"darkSlateGrey");
        case presetcolorvalDarkTurquoise :		return (L"darkTurquoise");
        case presetcolorvalDarkViolet :			return (L"darkViolet");
        case presetcolorvalDeepPink :			return (L"deepPink");
        case presetcolorvalDeepSkyBlue :		return (L"deepSkyBlue");
        case presetcolorvalDimGray :			return (L"dimGray");
        case presetcolorvalDimGrey :			return (L"dimGrey");
        case presetcolorvalDkBlue :				return (L"dkBlue");
        case presetcolorvalDkCyan :				return (L"dkCyan");
        case presetcolorvalDkGoldenrod :		return (L"dkGoldenrod");
        case presetcolorvalDkGray :				return (L"dkGray");
        case presetcolorvalDkGreen :			return (L"dkGreen");
        case presetcolorvalDkGrey :				return (L"dkGrey");
        case presetcolorvalDkKhaki :			return (L"dkKhaki");
        case presetcolorvalDkMagenta :			return (L"dkMagenta");
        case presetcolorvalDkOliveGreen :		return (L"dkOliveGreen");
        case presetcolorvalDkOrange :			return (L"dkOrange");
        case presetcolorvalDkOrchid :			return (L"dkOrchid");
        case presetcolorvalDkRed :				return (L"dkRed");
        case presetcolorvalDkSalmon :			return (L"dkSalmon");
        case presetcolorvalDkSeaGreen :			return (L"dkSeaGreen");
        case presetcolorvalDkSlateBlue :		return (L"dkSlateBlue");
        case presetcolorvalDkSlateGray :		return (L"dkSlateGray");
        case presetcolorvalDkSlateGrey :		return (L"dkSlateGrey");
        case presetcolorvalDkTurquoise :		return (L"dkTurquoise");
        case presetcolorvalDkViolet :			return (L"dkViolet");
        case presetcolorvalDodgerBlue :			return (L"dodgerBlue");
        case presetcolorvalFirebrick :			return (L"firebrick");
        case presetcolorvalFloralWhite :		return (L"floralWhite");
        case presetcolorvalForestGreen :		return (L"forestGreen");
        case presetcolorvalFuchsia :			return (L"fuchsia");
        case presetcolorvalGainsboro :			return (L"gainsboro");
        case presetcolorvalGhostWhite :			return (L"ghostWhite");
        case presetcolorvalGold :				return (L"gold");
        case presetcolorvalGoldenrod :			return (L"goldenrod");
        case presetcolorvalGray :				return (L"gray");
        case presetcolorvalGreen :				return (L"green");
        case presetcolorvalGreenYellow :		return (L"greenYellow");
        case presetcolorvalGrey :				return (L"grey");
        case presetcolorvalHoneydew :			return (L"honeydew");
        case presetcolorvalHotPink :			return (L"hotPink");
        case presetcolorvalIndianRed :			return (L"indianRed");
        case presetcolorvalIndigo :				return (L"indigo");
        case presetcolorvalIvory :				return (L"ivory");
        case presetcolorvalKhaki :				return (L"khaki");
        case presetcolorvalLavender :			return (L"lavender");
        case presetcolorvalLavenderBlush :		return (L"lavenderBlush");
        case presetcolorvalLawnGreen:			return (L"lawnGreen");
        case presetcolorvalLemonChiffon :		return (L"lemonChiffon");
        case presetcolorvalLightBlue :			return (L"lightBlue");
        case presetcolorvalLightCoral :			return (L"lightCoral");
        case presetcolorvalLightCyan :			return (L"lightCyan");
        case presetcolorvalLightGoldenrodYellow:return (L"lightGoldenrodYellow");
        case presetcolorvalLightGray :			return (L"lightGray");
        case presetcolorvalLightGreen :			return (L"lightGreen");
        case presetcolorvalLightGrey :			return (L"lightGrey");
        case presetcolorvalLightPink :			return (L"lightPink");
        case presetcolorvalLightSalmon :		return (L"lightSalmon");
        case presetcolorvalLightSeaGreen :		return (L"lightSeaGreen");
        case presetcolorvalLightSkyBlue :		return (L"lightSkyBlue");
        case presetcolorvalLightSlateGray :		return (L"lightSlateGray");
        case presetcolorvalLightSlateGrey :		return (L"lightSlateGrey");
        case presetcolorvalLightSteelBlue :		return (L"lightSteelBlue");
        case presetcolorvalLightYellow :		return (L"lightYellow");
        case presetcolorvalLime :				return (L"lime");
        case presetcolorvalLimeGreen :			return (L"limeGreen");
        case presetcolorvalLinen:				return (L"linen");
        case presetcolorvalLtBlue :				return (L"ltBlue");
        case presetcolorvalLtCoral :			return (L"ltCoral");
        case presetcolorvalLtCyan :				return (L"ltCyan");
        case presetcolorvalLtGoldenrodYellow:	return (L"ltGoldenrodYellow");
        case presetcolorvalLtGray :				return (L"ltGray");
        case presetcolorvalLtGreen :			return (L"ltGreen");
        case presetcolorvalLtGrey :				return (L"ltGrey");
        case presetcolorvalLtPink :				return (L"ltPink");
        case presetcolorvalLtSalmon :			return (L"ltSalmon");
        case presetcolorvalLtSeaGreen :			return (L"ltSeaGreen");
        case presetcolorvalLtSkyBlue :			return (L"ltSkyBlue");
        case presetcolorvalLtSlateGray :		return (L"ltSlateGray");
        case presetcolorvalLtSlateGrey :		return (L"ltSlateGrey");
        case presetcolorvalLtSteelBlue :		return (L"ltSteelBlue");
        case presetcolorvalLtYellow :			return (L"ltYellow");
        case presetcolorvalMagenta :			return (L"magenta");
        case presetcolorvalMaroon :				return (L"maroon");
        case presetcolorvalMedAquamarine :		return (L"medAquamarine");
        case presetcolorvalMedBlue :			return (L"medBlue");
        case presetcolorvalMediumAquamarine:	return (L"mediumAquamarine");
        case presetcolorvalMediumBlue :			return (L"mediumBlue");
        case presetcolorvalMediumOrchid :		return (L"mediumOrchid");
        case presetcolorvalMediumPurple :		return (L"mediumPurple");
        case presetcolorvalMediumSeaGreen :		return (L"mediumSeaGreen");
        case presetcolorvalMediumSlateBlue :	return (L"mediumSlateBlue");
        case presetcolorvalMediumSpringGreen:	return (L"mediumSpringGreen");
        case presetcolorvalMediumTurquoise :	return (L"mediumTurquoise");
        case presetcolorvalMediumVioletRed :	return (L"mediumVioletRed");
        case presetcolorvalMedOrchid :			return (L"medOrchid");
        case presetcolorvalMedPurple :			return (L"medPurple");
        case presetcolorvalMedSeaGreen :		return (L"medSeaGreen");
        case presetcolorvalMedSlateBlue :		return (L"medSlateBlue");
        case presetcolorvalMedSpringGreen :		return (L"medSpringGreen");
        case presetcolorvalMedTurquoise :		return (L"medTurquoise");
        case presetcolorvalMedVioletRed :		return (L"medVioletRed");
        case presetcolorvalMidnightBlue :		return (L"midnightBlue");
        case presetcolorvalMintCream :			return (L"mintCream");
        case presetcolorvalMistyRose :			return (L"mistyRose");
        case presetcolorvalMoccasin :			return (L"moccasin");
        case presetcolorvalNavajoWhite :		return (L"navajoWhite");
        case presetcolorvalNavy :				return (L"navy");
        case presetcolorvalOldLace :			return (L"oldLace");
        case presetcolorvalOlive :				return (L"olive");
        case presetcolorvalOliveDrab :			return (L"oliveDrab");
        case presetcolorvalOrange :				return (L"orange");
        case presetcolorvalOrangeRed :			return (L"orangeRed");
        case presetcolorvalOrchid :				return (L"orchid");
        case presetcolorvalPaleGoldenrod :		return (L"paleGoldenrod");
        case presetcolorvalPaleGreen :			return (L"paleGreen");
        case presetcolorvalPaleTurquoise :		return (L"paleTurquoise");
        case presetcolorvalPaleVioletRed :		return (L"paleVioletRed");
        case presetcolorvalPapayaWhip :			return (L"papayaWhip");
        case presetcolorvalPeachPuff :			return (L"peachPuff");
        case presetcolorvalPeru :				return (L"peru");
        case presetcolorvalPink :				return (L"pink");
        case presetcolorvalPlum :				return (L"plum");
        case presetcolorvalPowderBlue :			return (L"powderBlue");
        case presetcolorvalPurple :				return (L"purple");
        case presetcolorvalRed :				return (L"red");
        case presetcolorvalRosyBrown :			return (L"rosyBrown");
        case presetcolorvalRoyalBlue :			return (L"royalBlue");
        case presetcolorvalSaddleBrown :		return (L"saddleBrown");
        case presetcolorvalSalmon :				return (L"salmon");
        case presetcolorvalSandyBrown :			return (L"sandyBrown");
        case presetcolorvalSeaGreen :			return (L"seaGreen");
        case presetcolorvalSeaShell :			return (L"seaShell");
        case presetcolorvalSienna :				return (L"sienna");
        case presetcolorvalSilver :				return (L"silver");
        case presetcolorvalSkyBlue :			return (L"skyBlue");
        case presetcolorvalSlateBlue :			return (L"slateBlue");
        case presetcolorvalSlateGray :			return (L"slateGray");
        case presetcolorvalSlateGrey :			return (L"slateGrey");
        case presetcolorvalSnow :				return (L"snow");
        case presetcolorvalSpringGreen :		return (L"springGreen");
        case presetcolorvalSteelBlue :			return (L"steelBlue");
        case presetcolorvalTan :				return (L"tan");
        case presetcolorvalTeal :				return (L"teal");
        case presetcolorvalThistle :			return (L"thistle");
        case presetcolorvalTomato :				return (L"tomato");
        case presetcolorvalTurquoise :			return (L"turquoise");
        case presetcolorvalViolet :				return (L"violet");
        case presetcolorvalWheat :				return (L"wheat");
        case presetcolorvalWhite :				return (L"white");
        case presetcolorvalWhiteSmoke :			return (L"whiteSmoke");
        case presetcolorvalYellow :				return (L"yellow");
        case presetcolorvalYellowGreen :		return (L"yellowGreen");
        default :								return (L"black");
        }
    }

    template<EPresetColorVal eDefValue>
    unsigned char CPresetColorVal<eDefValue>::Get_R() const
    {
        return m_unR;
    }

    template<EPresetColorVal eDefValue>
    unsigned char CPresetColorVal<eDefValue>::Get_G() const
    {
        return m_unG;
    }

    template<EPresetColorVal eDefValue>
    unsigned char CPresetColorVal<eDefValue>::Get_B() const
    {
        return m_unB;
    }

    template<EPresetColorVal eDefValue>
    unsigned char CPresetColorVal<eDefValue>::Get_A() const
    {
        return m_unA;
    }

    template<EPresetColorVal eDefValue>
    void CPresetColorVal<eDefValue>::SetRGBA(unsigned char unR, unsigned char unG, unsigned char unB, unsigned char unA)
    {
        m_unR = unR;
        m_unG = unG;
        m_unB = unB;
        m_unA = unA;
    }
}
