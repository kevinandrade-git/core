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
    template<ECryptAlgoritmName eDefValue>
    CCryptAlgoritmName<eDefValue>::CCryptAlgoritmName() {}

    template<ECryptAlgoritmName eDefValue>
    ECryptAlgoritmName CCryptAlgoritmName<eDefValue>::FromString(std::wstring &sValue)
    {
        if       ( L"MD2"        == sValue || L"1"	== sValue ) this->m_eValue = cryptalgoritmnameMD2;
        else if  ( L"MD4"        == sValue || L"2"	== sValue ) this->m_eValue = cryptalgoritmnameMD4;
        else if  ( L"MD5"        == sValue || L"3"	== sValue ) this->m_eValue = cryptalgoritmnameMD5;
        else if  ( L"RIPEMD-128" == sValue || L"6"	== sValue ) this->m_eValue = cryptalgoritmnameRIPEMD128;
        else if  ( L"RIPEMD-160" == sValue || L"7"	== sValue ) this->m_eValue = cryptalgoritmnameRIPEMD160;
        else if  ( L"SHA-1"      == sValue || L"4"	== sValue ) this->m_eValue = cryptalgoritmnameSHA1;
        else if  ( L"SHA-256"    == sValue || L"12"	== sValue ) this->m_eValue = cryptalgoritmnameSHA256;
        else if  ( L"SHA-384"    == sValue || L"13"	== sValue ) this->m_eValue = cryptalgoritmnameSHA384;
        else if  ( L"SHA-512"    == sValue || L"14"	== sValue ) this->m_eValue = cryptalgoritmnameSHA512;
        else if  ( L"WHIRLPOOL"  == sValue ) this->m_eValue = cryptalgoritmnameWHIRLPOOL;
        else
            this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<ECryptAlgoritmName eDefValue>
    std::wstring CCryptAlgoritmName<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case cryptalgoritmnameMD2       : return (L"MD2");
        case cryptalgoritmnameMD4       : return (L"MD4");
        case cryptalgoritmnameMD5       : return (L"MD5");
        case cryptalgoritmnameRIPEMD128 : return (L"RIPEMD-128");
        case cryptalgoritmnameRIPEMD160 : return (L"RIPEMD-160");
        case cryptalgoritmnameSHA1      : return (L"SHA-1");
        case cryptalgoritmnameSHA256    : return (L"SHA-256");
        case cryptalgoritmnameSHA384    : return (L"SHA-384");
        case cryptalgoritmnameSHA512    : return (L"SHA-512");
        case cryptalgoritmnameWHIRLPOOL : return (L"WHIRLPOOL");
        default                         : return (L"");
        }
    }
}
