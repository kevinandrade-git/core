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

#include "../SimpleTypes_Shared.h"

namespace SimpleTypes
{
    CPanose::CPanose() {}

    std::wstring CPanose::GetValue() const
    {
        return m_sValue;
    }

    void CPanose::SetValue(std::wstring &sValue)
    {
        m_sValue = sValue;
    }


    std::wstring CPanose::FromString(std::wstring &sValue)
    {
        if ( 20 > sValue.length() )
        {
            m_sValue = sValue;
            for ( size_t nIndex = 0; nIndex < 20 - sValue.length(); nIndex++ )
            {
                m_sValue += L"0";
            }
        }
        else if ( 20 == sValue.length() )
            m_sValue = sValue;
        else
        {
            m_sValue = sValue.substr( 0, 20 );
        }

        return m_sValue;
    }

    std::wstring CPanose::ToString() const
    {
        return m_sValue;
    }

    unsigned char CPanose::Get_Number(int nIndex)
    {
        if ( m_sValue.length() < 20 )
            return 0;

        nIndex = (std::max)( 0, (std::min)( 9, nIndex ) );

        unsigned int unChar1 = XmlUtils::GetDigit( m_sValue[2 * nIndex] );
        unsigned int unChar2 = XmlUtils::GetDigit( m_sValue[2 * nIndex + 1] );

        return (unChar2 + (unsigned char)(unChar1 << 4));
    }
}
