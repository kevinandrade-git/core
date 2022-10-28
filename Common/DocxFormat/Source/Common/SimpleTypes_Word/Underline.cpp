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

#include "../SimpleTypes_Word.h"

namespace SimpleTypes
{
    template<EUnderline eDefValue>
    CUnderline<eDefValue>::CUnderline() {}

    template<EUnderline eDefValue>
    EUnderline CUnderline<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"dash")            == sValue ) this->m_eValue = underlineDash;
        else if ( (L"dashDotDotHeavy") == sValue ) this->m_eValue = underlineDashDotDotHeavy;
        else if ( (L"dashDotHeavy")    == sValue ) this->m_eValue = underlineDashDotHeavy;
        else if ( (L"dashedHeavy")     == sValue ) this->m_eValue = underlineDashedHeavy;
        else if ( (L"dashLong")        == sValue ) this->m_eValue = underlineDashLong;
        else if ( (L"dashLongHeavy")   == sValue ) this->m_eValue = underlineDashLongHeavy;
        else if ( (L"dotDash")         == sValue ) this->m_eValue = underlineDotDash;
        else if ( (L"dotDotDash")      == sValue ) this->m_eValue = underlineDotDotDash;
        else if ( (L"dotted")          == sValue ) this->m_eValue = underlineDotted;
        else if ( (L"dottedHeavy")     == sValue ) this->m_eValue = underlineDottedHeavy;
        else if ( (L"double")          == sValue ) this->m_eValue = underlineDouble;
        else if ( (L"none")            == sValue ) this->m_eValue = underlineNone;
        else if ( (L"single")          == sValue ) this->m_eValue = underlineSingle;
        else if ( (L"thick")           == sValue ) this->m_eValue = underlineThick;
        else if ( (L"wave")            == sValue ) this->m_eValue = underlineWave;
        else if ( (L"wavyDouble")      == sValue ) this->m_eValue = underlineWavyDouble;
        else if ( (L"wavyHeavy")       == sValue ) this->m_eValue = underlineWavyHeavy;
        else if ( (L"words")           == sValue ) this->m_eValue = underlineWords;
        else                                        this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EUnderline eDefValue>
    std::wstring CUnderline<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case underlineDash            : return (L"dash");
        case underlineDashDotDotHeavy : return (L"dashDotDotHeavy");
        case underlineDashDotHeavy    : return (L"dashDotHeavy");
        case underlineDashedHeavy     : return (L"dashedHeavy");
        case underlineDashLong        : return (L"dashLong");
        case underlineDashLongHeavy   : return (L"dashLongHeavy");
        case underlineDotDash         : return (L"dotDash");
        case underlineDotDotDash      : return (L"dotDotDash");
        case underlineDotted          : return (L"dotted");
        case underlineDottedHeavy     : return (L"dottedHeavy");
        case underlineDouble          : return (L"double");
        case underlineNone            : return (L"none");
        case underlineSingle          : return (L"single");
        case underlineThick           : return (L"thick");
        case underlineWave            : return (L"wave");
        case underlineWavyDouble      : return (L"wavyDouble");
        case underlineWavyHeavy       : return (L"wavyHeavy");
        case underlineWords           : return (L"words");
        default                       : return (L"none");
        }
    }
}
