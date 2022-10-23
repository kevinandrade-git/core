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

#pragma once

#include "../SimpleTypes_Word.h"

namespace SimpleTypes
{
    template<EThemeColor eDefValue>
    CThemeColor<eDefValue>::CThemeColor() {}

    template<EThemeColor eDefValue>
    EThemeColor CThemeColor<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"accent1")           == sValue ) this->m_eValue = themecolorAccent1;
        else if ( (L"accent2")           == sValue ) this->m_eValue = themecolorAccent2;
        else if ( (L"accent3")           == sValue ) this->m_eValue = themecolorAccent3;
        else if ( (L"accent4")           == sValue ) this->m_eValue = themecolorAccent4;
        else if ( (L"accent5")           == sValue ) this->m_eValue = themecolorAccent5;
        else if ( (L"accent6")           == sValue ) this->m_eValue = themecolorAccent6;
        else if ( (L"background1")       == sValue ) this->m_eValue = themecolorBackground1;
        else if ( (L"background2")       == sValue ) this->m_eValue = themecolorBackground2;
        else if ( (L"dark1")             == sValue ) this->m_eValue = themecolorDark1;
        else if ( (L"dark2")             == sValue ) this->m_eValue = themecolorDark2;
        else if ( (L"followedHyperlink") == sValue ) this->m_eValue = themecolorFollowedHyperlink;
        else if ( (L"hyperlink")         == sValue ) this->m_eValue = themecolorHyperlink;
        else if ( (L"light1")            == sValue ) this->m_eValue = themecolorLight1;
        else if ( (L"light2")            == sValue ) this->m_eValue = themecolorLight2;
        else if ( (L"none")              == sValue ) this->m_eValue = themecolorNone;
        else if ( (L"text1")             == sValue ) this->m_eValue = themecolorText1;
        else if ( (L"text2")             == sValue ) this->m_eValue = themecolorText2;
        else                                          this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EThemeColor eDefValue>
    std::wstring CThemeColor<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case themecolorAccent1           : return (L"accent1");
        case themecolorAccent2           : return (L"accent2");
        case themecolorAccent3           : return (L"accent3");
        case themecolorAccent4           : return (L"accent4");
        case themecolorAccent5           : return (L"accent5");
        case themecolorAccent6           : return (L"accent6");
        case themecolorBackground1       : return (L"background1");
        case themecolorBackground2       : return (L"background2");
        case themecolorDark1             : return (L"dark1");
        case themecolorDark2             : return (L"dark2");
        case themecolorFollowedHyperlink : return (L"followedHyperlink");
        case themecolorHyperlink         : return (L"hyperlink");
        case themecolorLight1            : return (L"light1");
        case themecolorLight2            : return (L"light2");
        case themecolorNone              : return (L"none");
        case themecolorText1             : return (L"text1");
        case themecolorText2             : return (L"text2");
        default                          : return (L"none");
        }
    }
}
