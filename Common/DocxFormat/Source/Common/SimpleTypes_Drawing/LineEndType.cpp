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
    template<ELineEndType eDefValue>
    CLineEndType<eDefValue>::CLineEndType() {}

    template<ELineEndType eDefValue>
    ELineEndType CLineEndType<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'a':
            if      ( (L"arrow")    == sValue ) this->m_eValue = lineendtypeArrow;
            break;
        case 'd':
            if      ( (L"diamond")  == sValue ) this->m_eValue = lineendtypeDiamond;
            break;
        case 'n':
            if      ( (L"none")     == sValue ) this->m_eValue = lineendtypeNone;
            break;
        case 'o':
            if      ( (L"oval")     == sValue ) this->m_eValue = lineendtypeOval;
            break;
        case 's':
            if      ( (L"stealth")  == sValue ) this->m_eValue = lineendtypeStealth;
            break;
        case 't':
            if      ( (L"triangle") == sValue ) this->m_eValue = lineendtypeTriangle;
            break;
        }

        return this->m_eValue;
    }

    template<ELineEndType eDefValue>
    std::wstring CLineEndType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case lineendtypeArrow:    return (L"arrow");
        case lineendtypeDiamond:  return (L"diamond");
        case lineendtypeNone:     return (L"none");
        case lineendtypeOval:     return (L"oval");
        case lineendtypeStealth:  return (L"stealth");
        case lineendtypeTriangle: return (L"triangle");
        default :                 return (L"none");
        }
    }
}
