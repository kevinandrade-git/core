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
    template<unsigned short eDefValue>
    CCnf<eDefValue>::CCnf() {}

    template<unsigned short eDefValue>
    unsigned short CCnf<eDefValue>::FromString(std::wstring &sValue)
    {
        Parse( sValue );

        return this->m_eValue;
    }

    template<unsigned short eDefValue>
    std::wstring CCnf<eDefValue>::ToString() const
    {
        std::wstring sResult;

        for( int nIndex = 0, nMult = 1; nIndex < 12; nIndex++, nMult <<= 1 )
        {
            if ( this->m_eValue & nMult )
                sResult += '1';
            else
                sResult += '0';
        }

        return sResult;
    }

    template<unsigned short eDefValue>
    void CCnf<eDefValue>::Parse(std::wstring &sValue)
    {
        int nLen = (std::min)( (int)sValue.length(), 12 );

        for ( int nIndex = 0, nMult = 1; nIndex < nLen; nIndex++, nMult <<= 1 )
        {
            wchar_t wsChar = sValue[nIndex];

            if ( '0' == wsChar )
            {
                // Ничего не делаем
            }
            else if ( '1' == wsChar )
            {
                this->m_eValue ^= nMult;
            }
            else // Неправильный формат
                break;
        }
    }
}
