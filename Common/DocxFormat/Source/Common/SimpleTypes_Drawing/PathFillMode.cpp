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
    template<EPathFillMode eDefValue>
    CPathFillMode<eDefValue>::CPathFillMode() {}

    template<EPathFillMode eDefValue>
    EPathFillMode CPathFillMode<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'd':
            if      ( (L"darken")     == sValue ) this->m_eValue = pathfillmodeDarken;
            else if ( (L"darkenLess") == sValue ) this->m_eValue = pathfillmodeDarkenLess;
            break;
        case 'l':
            if      ( (L"lighten")    == sValue ) this->m_eValue = pathfillmodeLighten;
            else if ( (L"darkenLess") == sValue ) this->m_eValue = pathfillmodeLightenLess;
            break;
        case 'n':
            if      ( (L"none")       == sValue ) this->m_eValue = pathfillmodeNone;
            else if ( (L"norm")       == sValue ) this->m_eValue = pathfillmodeNorm;
            break;
        }

        return this->m_eValue;
    }

    template<EPathFillMode eDefValue>
    std::wstring CPathFillMode<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case pathfillmodeDarken:      return (L"darken");
        case pathfillmodeDarkenLess:  return (L"darkenLess");
        case pathfillmodeLighten:     return (L"lighten");
        case pathfillmodeLightenLess: return (L"lightenLess");
        case pathfillmodeNone:        return (L"none");
        case pathfillmodeNorm:        return (L"norm");
        default :                     return (L"none");
        }
    }
}
