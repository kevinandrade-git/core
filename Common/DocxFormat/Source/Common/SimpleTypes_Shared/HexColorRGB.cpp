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
    template<int nDefValue>
    CHexColorRGB<nDefValue>::CHexColorRGB()
    {
        m_unR = 0;
        m_unG = 0;
        m_unB = 0;
        m_unA = 255;
    }

    template<int nDefValue>
    int CHexColorRGB<nDefValue>::FromString(std::wstring &sValue)
    {
        if ( 6 <= sValue.length() )
        {
            std::wstring midString = sValue.substr( 0, 6 );
            Parse( midString );
        }
        else
            this->m_eValue = nDefValue;

        return this->m_eValue;
    }

    template<int nDefValue>
    std::wstring CHexColorRGB<nDefValue>::ToString() const
    {
        return XmlUtils::IntToString(this->m_eValue, L"%06X");
    }

    template<int nDefValue>
    unsigned char CHexColorRGB<nDefValue>::Get_R() const
    {
        return m_unR;
    }

    template<int nDefValue>
    unsigned char CHexColorRGB<nDefValue>::Get_G() const
    {
        return m_unG;
    }

    template<int nDefValue>
    unsigned char CHexColorRGB<nDefValue>::Get_B() const
    {
        return m_unB;
    }

    template<int nDefValue>
    unsigned char CHexColorRGB<nDefValue>::Get_A() const
    {
        return m_unA;
    }

    template<int nDefValue>
    void CHexColorRGB<nDefValue>::Set_RGBA(unsigned char unR, unsigned char unG, unsigned char unB, unsigned char unA)
    {
        m_unR = unR;
        m_unG = unG;
        m_unB = unB;
        m_unA = unA;

        this->m_eValue = ((int)m_unR << 16) + ((int)m_unG << 8) + m_unB;
    }

    template<int nDefValue>
    void CHexColorRGB<nDefValue>::Parse(std::wstring& sValue)
    {
        if ( sValue.length() < 6 )
            return;

        m_unR = HexToInt( (int)sValue[1] ) + (unsigned char)(HexToInt( (int)sValue[0] ) << 4);
        m_unG = HexToInt( (int)sValue[3] ) + (unsigned char)(HexToInt( (int)sValue[2] ) << 4);
        m_unB = HexToInt( (int)sValue[5] ) + (unsigned char)(HexToInt( (int)sValue[4] ) << 4);
        m_unA = 255;

        this->m_eValue = ((int)m_unR << 16) + ((int)m_unG << 8) + m_unB;
    }

    template<int nDefValue>
    int	CHexColorRGB<nDefValue>::HexToInt(int nHex)
    {
        if ( nHex >= '0' && nHex <= '9' ) return (nHex - '0');
        if ( nHex >= 'a' && nHex <= 'f' ) return (nHex - 'a' + 10);
        if ( nHex >= 'A' && nHex <= 'F' ) return (nHex - 'A' + 10);

        return 0;
    }
}
