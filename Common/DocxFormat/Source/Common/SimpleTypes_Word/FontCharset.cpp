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
    template<EFontCharset eDefValue>
    CFontCharset<eDefValue>::CFontCharset() {}

    template<EFontCharset eDefValue>
    EFontCharset CFontCharset<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"00") == sValue ) this->m_eValue = fontcharsetANSI;
        else if ( (L"01") == sValue ) this->m_eValue = fontcharsetDefault;
        else if ( (L"02") == sValue ) this->m_eValue = fontcharsetSymbol;
        else if ( (L"4D") == sValue ) this->m_eValue = fontcharsetMacintosh;
        else if ( (L"80") == sValue ) this->m_eValue = fontcharsetShitJIS;
        else if ( (L"81") == sValue ) this->m_eValue = fontcharsetHangeul;
        else if ( (L"82") == sValue ) this->m_eValue = fontcharsetJohab;
        else if ( (L"86") == sValue ) this->m_eValue = fontcharsetGB2313;
        else if ( (L"88") == sValue ) this->m_eValue = fontcharsetChineseBig5;
        else if ( (L"A1") == sValue ) this->m_eValue = fontcharsetGreek;
        else if ( (L"A2") == sValue ) this->m_eValue = fontcharsetTurkish;
        else if ( (L"A3") == sValue ) this->m_eValue = fontcharsetVietnamese;
        else if ( (L"B1") == sValue ) this->m_eValue = fontcharsetHebrew;
        else if ( (L"B2") == sValue ) this->m_eValue = fontcharsetArabic;
        else if ( (L"BA") == sValue ) this->m_eValue = fontcharsetBaltic;
        else if ( (L"CC") == sValue ) this->m_eValue = fontcharsetRussian;
        else if ( (L"DE") == sValue ) this->m_eValue = fontcharsetThai;
        else if ( (L"EE") == sValue ) this->m_eValue = fontcharsetEastEurope;
        else if ( (L"FF") == sValue ) this->m_eValue = fontcharsetOEM;
        else                           this->m_eValue = fontcharsetANSI;

        return this->m_eValue;
    }

    template<EFontCharset eDefValue>
    std::wstring CFontCharset<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case fontcharsetANSI        : return (L"00");
        case fontcharsetDefault     : return (L"01");
        case fontcharsetSymbol      : return (L"02");
        case fontcharsetMacintosh   : return (L"4D");
        case fontcharsetShitJIS     : return (L"80");
        case fontcharsetHangeul     : return (L"81");
        case fontcharsetJohab       : return (L"82");
        case fontcharsetGB2313      : return (L"86");
        case fontcharsetChineseBig5 : return (L"88");
        case fontcharsetGreek       : return (L"A1");
        case fontcharsetTurkish     : return (L"A2");
        case fontcharsetVietnamese  : return (L"A3");
        case fontcharsetHebrew      : return (L"B1");
        case fontcharsetArabic      : return (L"B2");
        case fontcharsetBaltic      : return (L"BA");
        case fontcharsetRussian     : return (L"CC");
        case fontcharsetThai        : return (L"DE");
        case fontcharsetEastEurope  : return (L"EE");
        case fontcharsetOEM         : return (L"FF");
        default                     : return (L"00");
        }
    }
}
