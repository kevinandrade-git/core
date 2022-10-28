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
    template<ELightRigType eDefValue>
    CLightRigType<eDefValue>::CLightRigType() {}

    template<ELightRigType eDefValue>
    ELightRigType CLightRigType<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'b':
            if      ( (L"balanced")    == sValue ) this->m_eValue = lightrigtypeBalanced;
            else if ( (L"brightRoom")  == sValue ) this->m_eValue = lightrigtypeBrightRoom;
            break;
        case 'c':
            if      ( (L"chilly")      == sValue ) this->m_eValue = lightrigtypeChilly;
            else if ( (L"contrasting") == sValue ) this->m_eValue = lightrigtypeContrasting;
            break;
        case 'f':
            if      ( (L"flat")        == sValue ) this->m_eValue = lightrigtypeFlat;
            else if ( (L"flood")       == sValue ) this->m_eValue = lightrigtypeFlood;
            else if ( (L"freezing")    == sValue ) this->m_eValue = lightrigtypeFreezing;
            break;
        case 'g':
            if      ( (L"glow")        == sValue ) this->m_eValue = lightrigtypeGlow;
            break;
        case 'h':
            if      ( (L"harsh")       == sValue ) this->m_eValue = lightrigtypeHarsh;
            break;
        case 'l':
            if      ( (L"legacyFlat1")   == sValue ) this->m_eValue = lightrigtypeLegacyFlat1;
            else if ( (L"legacyFlat2")   == sValue ) this->m_eValue = lightrigtypeLegacyFlat2;
            else if ( (L"legacyFlat3")   == sValue ) this->m_eValue = lightrigtypeLegacyFlat3;
            else if ( (L"legacyFlat4")   == sValue ) this->m_eValue = lightrigtypeLegacyFlat4;
            else if ( (L"legacyHarsh1")  == sValue ) this->m_eValue = lightrigtypeLegacyHarsh1;
            else if ( (L"legacyHarsh2")  == sValue ) this->m_eValue = lightrigtypeLegacyHarsh2;
            else if ( (L"legacyHarsh3")  == sValue ) this->m_eValue = lightrigtypeLegacyHarsh3;
            else if ( (L"legacyHarsh4")  == sValue ) this->m_eValue = lightrigtypeLegacyHarsh4;
            else if ( (L"legacyNormal1") == sValue ) this->m_eValue = lightrigtypeLegacyNormal1;
            else if ( (L"legacyNormal2") == sValue ) this->m_eValue = lightrigtypeLegacyNormal2;
            else if ( (L"legacyNormal3") == sValue ) this->m_eValue = lightrigtypeLegacyNormal3;
            else if ( (L"legacyNormal4") == sValue ) this->m_eValue = lightrigtypeLegacyNormal4;
            break;
        case 'm':
            if      ( (L"morning") == sValue ) this->m_eValue = lightrigtypeMorning;
            break;
        case 's':
            if      ( (L"soft")    == sValue ) this->m_eValue = lightrigtypeSoft;
            else if ( (L"sunrise") == sValue ) this->m_eValue = lightrigtypeSunrise;
            else if ( (L"sunset")  == sValue ) this->m_eValue = lightrigtypeSunset;
            break;
        case 't':
            if      ( (L"threePt") == sValue ) this->m_eValue = lightrigtypeThreePt;
            else if ( (L"twoPt")   == sValue ) this->m_eValue = lightrigtypeTwoPt;
            break;
        }

        return this->m_eValue;
    }

    template<ELightRigType eDefValue>
    std::wstring CLightRigType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case lightrigtypeBalanced      : return (L"balanced");
        case lightrigtypeBrightRoom    : return (L"brightRoom");
        case lightrigtypeChilly        : return (L"chilly");
        case lightrigtypeContrasting   : return (L"contrasting");
        case lightrigtypeFlat          : return (L"flat");
        case lightrigtypeFlood         : return (L"flood");
        case lightrigtypeFreezing      : return (L"freezing");
        case lightrigtypeGlow          : return (L"glow");
        case lightrigtypeHarsh         : return (L"harsh");
        case lightrigtypeLegacyFlat1   : return (L"legacyFlat1");
        case lightrigtypeLegacyFlat2   : return (L"legacyFlat2");
        case lightrigtypeLegacyFlat3   : return (L"legacyFlat3");
        case lightrigtypeLegacyFlat4   : return (L"legacyFlat4");
        case lightrigtypeLegacyHarsh1  : return (L"legacyHarsh1");
        case lightrigtypeLegacyHarsh2  : return (L"legacyHarsh2");
        case lightrigtypeLegacyHarsh3  : return (L"legacyHarsh3");
        case lightrigtypeLegacyHarsh4  : return (L"legacyHarsh4");
        case lightrigtypeLegacyNormal1 : return (L"legacyNormal1");
        case lightrigtypeLegacyNormal2 : return (L"legacyNormal2");
        case lightrigtypeLegacyNormal3 : return (L"legacyNormal3");
        case lightrigtypeLegacyNormal4 : return (L"legacyNormal4");
        case lightrigtypeMorning       : return (L"morning");
        case lightrigtypeSoft          : return (L"soft");
        case lightrigtypeSunrise       : return (L"sunrise");
        case lightrigtypeSunset        : return (L"sunset");
        case lightrigtypeThreePt       : return (L"threePt");
        case lightrigtypeTwoPt         : return (L"twoPt");
        default                        : return (L"balanced");
        }
    }
}
