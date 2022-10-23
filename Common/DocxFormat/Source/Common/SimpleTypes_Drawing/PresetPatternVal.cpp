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
    template<EPresetPatternVal eDefValue>
    CPresetPatternVal<eDefValue>::CPresetPatternVal() {}

    template<EPresetPatternVal eDefValue>
    EPresetPatternVal CPresetPatternVal<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'c':
            if      ( (L"cross")      == sValue ) this->m_eValue = presetpatternvalCross;
            break;
        case 'd':
            if      ( (L"dashDnDiag") == sValue ) this->m_eValue = presetpatternvalDashDnDiag;
            else if ( (L"dashHorz")   == sValue ) this->m_eValue = presetpatternvalDashHorz;
            else if ( (L"dashUpDiag") == sValue ) this->m_eValue = presetpatternvalDashUpDiag;
            else if ( (L"dashVert")   == sValue ) this->m_eValue = presetpatternvalDashVert;
            else if ( (L"diagBrick")  == sValue ) this->m_eValue = presetpatternvalDiagBrick;
            else if ( (L"diagCross")  == sValue ) this->m_eValue = presetpatternvalDiagCross;
            else if ( (L"divot")      == sValue ) this->m_eValue = presetpatternvalDivot;
            else if ( (L"dkDnDiag")   == sValue ) this->m_eValue = presetpatternvalDkDnDiag;
            else if ( (L"dkHorz")     == sValue ) this->m_eValue = presetpatternvalDkHorz;
            else if ( (L"dkUpDiag")   == sValue ) this->m_eValue = presetpatternvalDkUpDiag;
            else if ( (L"dkVert")     == sValue ) this->m_eValue = presetpatternvalDkVert;
            else if ( (L"dnDiag")     == sValue ) this->m_eValue = presetpatternvalDnDiag;
            else if ( (L"dotDmnd")    == sValue ) this->m_eValue = presetpatternvalDotDmnd;
            else if ( (L"dotGrid")    == sValue ) this->m_eValue = presetpatternvalDotGrid;
            break;
        case 'h':
            if      ( (L"horz")       == sValue ) this->m_eValue = presetpatternvalHorz;
            else if ( (L"horzBrick")  == sValue ) this->m_eValue = presetpatternvalHorzBrick;
            break;
        case 'l':
            if      ( (L"lgCheck")    == sValue ) this->m_eValue = presetpatternvalLgCheck;
            else if ( (L"lgConfetti") == sValue ) this->m_eValue = presetpatternvalLgConfetti;
            else if ( (L"lgGrid")     == sValue ) this->m_eValue = presetpatternvalLgGrid;
            else if ( (L"ltDnDiag")   == sValue ) this->m_eValue = presetpatternvalLtDnDiag;
            else if ( (L"ltHorz")     == sValue ) this->m_eValue = presetpatternvalLtHorz;
            else if ( (L"ltUpDiag")   == sValue ) this->m_eValue = presetpatternvalLtUpDiag;
            else if ( (L"ltVert")     == sValue ) this->m_eValue = presetpatternvalLtVert;
            break;
        case 'n':
            if      ( (L"narHorz")    == sValue ) this->m_eValue = presetpatternvalNarHorz;
            else if ( (L"narVert")    == sValue ) this->m_eValue = presetpatternvalNarVert;
            break;
        case 'o':
            if      ( (L"openDmnd")   == sValue ) this->m_eValue = presetpatternvalOpenDmnd;
            break;
        case 'p':
            if      ( (L"pct10")      == sValue ) this->m_eValue = presetpatternvalPct10;
            else if ( (L"pct20")      == sValue ) this->m_eValue = presetpatternvalPct20;
            else if ( (L"pct25")      == sValue ) this->m_eValue = presetpatternvalPct25;
            else if ( (L"pct30")      == sValue ) this->m_eValue = presetpatternvalPct30;
            else if ( (L"pct40")      == sValue ) this->m_eValue = presetpatternvalPct40;
            else if ( (L"pct5")       == sValue ) this->m_eValue = presetpatternvalPct5;
            else if ( (L"pct50")      == sValue ) this->m_eValue = presetpatternvalPct50;
            else if ( (L"pct60")      == sValue ) this->m_eValue = presetpatternvalPct60;
            else if ( (L"pct70")      == sValue ) this->m_eValue = presetpatternvalPct70;
            else if ( (L"pct75")      == sValue ) this->m_eValue = presetpatternvalPct75;
            else if ( (L"pct80")      == sValue ) this->m_eValue = presetpatternvalPct80;
            else if ( (L"pct90")      == sValue ) this->m_eValue = presetpatternvalPct90;
            else if ( (L"plaid")      == sValue ) this->m_eValue = presetpatternvalPlaid;
            break;
        case 's':
            if      ( (L"shingle")    == sValue ) this->m_eValue = presetpatternvalShingle;
            else if ( (L"smCheck")    == sValue ) this->m_eValue = presetpatternvalSmCheck;
            else if ( (L"smConfetti") == sValue ) this->m_eValue = presetpatternvalSmConfetti;
            else if ( (L"smGrid")     == sValue ) this->m_eValue = presetpatternvalSmGrid;
            else if ( (L"solidDmnd")  == sValue ) this->m_eValue = presetpatternvalSolidDmnd;
            else if ( (L"sphere")     == sValue ) this->m_eValue = presetpatternvalSphere;
            break;
        case 't':
            if      ( (L"trellis")    == sValue ) this->m_eValue = presetpatternvalTrellis;
            break;
        case 'u':
            if      ( (L"upDiag")     == sValue ) this->m_eValue = presetpatternvalUpDiag;
            break;
        case 'v':
            if      ( (L"vert")       == sValue ) this->m_eValue = presetpatternvalVert;
            break;
        case 'w':
            if      ( (L"wave")       == sValue ) this->m_eValue = presetpatternvalWave;
            else if ( (L"wdDnDiag")   == sValue ) this->m_eValue = presetpatternvalWdDnDiag;
            else if ( (L"wdUpDiag")   == sValue ) this->m_eValue = presetpatternvalWdUpDiag;
            else if ( (L"weave")      == sValue ) this->m_eValue = presetpatternvalWeave;
            break;
        case 'z':
            if      ( (L"zigZag")     == sValue ) this->m_eValue = presetpatternvalZigZag;
            break;
        }

        return this->m_eValue;
    }

    template<EPresetPatternVal eDefValue>
    std::wstring CPresetPatternVal<eDefValue>::ToString  () const
    {
        switch(this->m_eValue)
        {
        case presetpatternvalCross:      return (L"cross");
        case presetpatternvalDashDnDiag: return (L"dashDnDiag");
        case presetpatternvalDashHorz:   return (L"dashHorz");
        case presetpatternvalDashUpDiag: return (L"dashUpDiag");
        case presetpatternvalDashVert:   return (L"dashVert");
        case presetpatternvalDiagBrick:  return (L"diagBrick");
        case presetpatternvalDiagCross:  return (L"diagCross");
        case presetpatternvalDivot:      return (L"divot");
        case presetpatternvalDkDnDiag:   return (L"dkDnDiag");
        case presetpatternvalDkHorz:     return (L"dkHorz");
        case presetpatternvalDkUpDiag:   return (L"dkUpDiag");
        case presetpatternvalDkVert:     return (L"dkVert");
        case presetpatternvalDnDiag:     return (L"dnDiag");
        case presetpatternvalDotDmnd:    return (L"dotDmnd");
        case presetpatternvalDotGrid:    return (L"dotGrid");
        case presetpatternvalHorz:       return (L"horz");
        case presetpatternvalHorzBrick:  return (L"horzBrick");
        case presetpatternvalLgCheck:    return (L"lgCheck");
        case presetpatternvalLgConfetti: return (L"lgConfetti");
        case presetpatternvalLgGrid:     return (L"lgGrid");
        case presetpatternvalLtDnDiag:   return (L"ltDnDiag");
        case presetpatternvalLtHorz:     return (L"ltHorz");
        case presetpatternvalLtUpDiag:   return (L"ltUpDiag");
        case presetpatternvalLtVert:     return (L"ltVert");
        case presetpatternvalNarHorz:    return (L"narHorz");
        case presetpatternvalNarVert:    return (L"narVert");
        case presetpatternvalOpenDmnd:   return (L"openDmnd");
        case presetpatternvalPct10:      return (L"pct10");
        case presetpatternvalPct20:      return (L"pct20");
        case presetpatternvalPct25:      return (L"pct25");
        case presetpatternvalPct30:      return (L"pct30");
        case presetpatternvalPct40:      return (L"pct40");
        case presetpatternvalPct5:       return (L"pct5");
        case presetpatternvalPct50:      return (L"pct50");
        case presetpatternvalPct60:      return (L"pct60");
        case presetpatternvalPct70:      return (L"pct70");
        case presetpatternvalPct75:      return (L"pct75");
        case presetpatternvalPct80:      return (L"pct80");
        case presetpatternvalPct90:      return (L"pct90");
        case presetpatternvalPlaid:      return (L"plaid");
        case presetpatternvalShingle:    return (L"shingle");
        case presetpatternvalSmCheck:    return (L"smCheck");
        case presetpatternvalSmConfetti: return (L"smConfetti");
        case presetpatternvalSmGrid:     return (L"smGrid");
        case presetpatternvalSolidDmnd:  return (L"solidDmnd");
        case presetpatternvalSphere:     return (L"sphere");
        case presetpatternvalTrellis:    return (L"trellis");
        case presetpatternvalUpDiag:     return (L"upDiag");
        case presetpatternvalVert:       return (L"vert");
        case presetpatternvalWave:       return (L"wave");
        case presetpatternvalWdDnDiag:   return (L"wdDnDiag");
        case presetpatternvalWdUpDiag:   return (L"wdUpDiag");
        case presetpatternvalWeave:      return (L"weave");
        case presetpatternvalZigZag:     return (L"zigZag Zag");
        default :                        return (L"pct10");
        }
    }
}
