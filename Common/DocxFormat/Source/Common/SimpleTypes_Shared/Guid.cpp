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
    CGuid::CGuid() {}

    bool CGuid::FromString(std::wstring &sValue)
    {
        // GUID "{00000000-5BD2-4BC8-9F70-7020E1357FB2}"

        TGuid oZeroGUID = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        m_oGUID = oZeroGUID;

        if ( sValue.length() != 38 )
            return false;

        T_ULONG64 unTemp = 0;

        std::wstring sMidValue;
        sMidValue = sValue.substr( 1, 8 );

        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.a = (unsigned int)unTemp;

        sMidValue = sValue.substr( 10, 4 );
        if ( !HexToInt(sMidValue, unTemp ) )
            return false;

        m_oGUID.b = (unsigned short)unTemp;

        sMidValue = sValue.substr( 15, 4 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.c = (unsigned short)unTemp;

        sMidValue = sValue.substr( 20, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.d = (unsigned char)unTemp;


        sMidValue = sValue.substr( 22, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.e = (unsigned char)unTemp;

        sMidValue = sValue.substr( 25, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.f = (unsigned char)unTemp;

        sMidValue = sValue.substr( 27, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.g = (unsigned char)unTemp;

        sMidValue = sValue.substr( 29, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.h = (unsigned char)unTemp;

        sMidValue = sValue.substr( 31, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.i = (unsigned char)unTemp;

        sMidValue = sValue.substr( 33, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.j = (unsigned char)unTemp;

        sMidValue = sValue.substr( 35, 2 );
        if ( !HexToInt( sMidValue, unTemp ) )
            return false;

        m_oGUID.k = (unsigned char)unTemp;

        return true;
    }

    bool CGuid::FromString(const std::wstring& wsStr)
    {
        // TO DO: переделать
        std::wstring sTemp( wsStr.c_str() );
        return FromString( (std::wstring &)sTemp );
    }

    bool CGuid::FromString(const wchar_t* cwsStr)
    {
        std::wstring wsStr = cwsStr;
        return FromString( (const std::wstring&)wsStr );
    }

    std::wstring CGuid::ToString() const
    {
        std::wstringstream sstream;
        sstream << boost::wformat( L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}" ) % m_oGUID.a % m_oGUID.b % m_oGUID.c % m_oGUID.d % m_oGUID.e % m_oGUID.f % m_oGUID.g % m_oGUID.h % m_oGUID.i % m_oGUID.j % m_oGUID.k;
        return sstream.str();
    }

    bool CGuid::IsZero()
    {
        return 0 == m_oGUID.a && 0 == m_oGUID.b && 0 == m_oGUID.c && 0 == m_oGUID.d && 0 == m_oGUID.e && 0 == m_oGUID.f && 0 == m_oGUID.g && 0 == m_oGUID.h && 0 == m_oGUID.i && 0 == m_oGUID.j && 0 == m_oGUID.k;
    }

    bool CGuid::HexToInt(std::wstring& sValue, T_ULONG64& unResult)
    {
        bool bResult = true;

        unResult = 0;
        for ( int nIndex = (int)sValue.length() - 1, nMult = 0; nIndex >= 0; nIndex--, nMult += 4 )
        {
            unResult += HexToInt( (int)sValue[nIndex], bResult ) << nMult;
        }

        return bResult;
    }

    int	CGuid::HexToInt(int nHex, bool &bResult)
    {
        if ( nHex >= '0' && nHex <= '9' ) return (nHex - '0');
        if ( nHex >= 'a' && nHex <= 'f' ) return (nHex - 'a' + 10);
        if ( nHex >= 'A' && nHex <= 'F' ) return (nHex - 'A' + 10);

        bResult = false;

        return 0;
    }
}
