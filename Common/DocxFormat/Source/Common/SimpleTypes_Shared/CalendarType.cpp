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
    template<ECalendarType eDefValue>
    CCalendarType<eDefValue>::CCalendarType() {}

    template<ECalendarType eDefValue>
    ECalendarType CCalendarType<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( L"gregorian"            == sValue ) this->m_eValue = calendartypeGregorian;
        else if ( L"gregorianArabic"      == sValue ) this->m_eValue = calendartypeGregorianArabic;
        else if ( L"gregorianMeFrench"    == sValue ) this->m_eValue = calendartypeGregorianMeFrench;
        else if ( L"gregorianUs"          == sValue ) this->m_eValue = calendartypeGregorianUs;
        else if ( L"gregorianXlitEnglish" == sValue ) this->m_eValue = calendartypeGregorianXlitEnglish;
        else if ( L"gregorianXlitFrench"  == sValue ) this->m_eValue = calendartypeGregorianXlitFrench;
        else if ( L"hebrew"               == sValue ) this->m_eValue = calendartypeHebrew;
        else if ( L"hijri"                == sValue ) this->m_eValue = calendartypeHijri;
        else if ( L"japan"                == sValue ) this->m_eValue = calendartypeJapan;
        else if ( L"korea"                == sValue ) this->m_eValue = calendartypeKorea;
        else if ( L"none"                 == sValue ) this->m_eValue = calendartypeNone;
        else if ( L"saka"                 == sValue ) this->m_eValue = calendartypeSaka;
        else if ( L"taiwan"               == sValue ) this->m_eValue = calendartypeTaiwan;
        else if ( L"thai"                 == sValue ) this->m_eValue = calendartypeThai;
        else										   this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<ECalendarType eDefValue>
    std::wstring CCalendarType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case calendartypeGregorian            : return L"gregorian";
        case calendartypeGregorianArabic      : return L"gregorianArabic";
        case calendartypeGregorianMeFrench    : return L"gregorianMeFrench";
        case calendartypeGregorianUs          : return L"gregorianUs";
        case calendartypeGregorianXlitEnglish : return L"gregorianXlitEnglish";
        case calendartypeGregorianXlitFrench  : return L"gregorianXlitFrench";
        case calendartypeHebrew               : return L"hebrew";
        case calendartypeHijri                : return L"hijri";
        case calendartypeJapan                : return L"japan";
        case calendartypeKorea                : return L"korea";
        case calendartypeNone                 : return L"none";
        case calendartypeSaka                 : return L"saka";
        case calendartypeTaiwan               : return L"taiwan";
        case calendartypeThai                 : return L"thai";
        default                               : return L"none";
        }
    }
}
