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
    template<EWmlColorSchemeIndex eDefValue>
    CWmlColorSchemeIndex<eDefValue>::CWmlColorSchemeIndex() {}

    template<EWmlColorSchemeIndex eDefValue>
    EWmlColorSchemeIndex CWmlColorSchemeIndex<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"accent1")           == sValue ) this->m_eValue = wmlcolorschemeindexAccent1;
        else if ( (L"accent2")           == sValue ) this->m_eValue = wmlcolorschemeindexAccent2;
        else if ( (L"accent3")           == sValue ) this->m_eValue = wmlcolorschemeindexAccent3;
        else if ( (L"accent4")           == sValue ) this->m_eValue = wmlcolorschemeindexAccent4;
        else if ( (L"accent5")           == sValue ) this->m_eValue = wmlcolorschemeindexAccent5;
        else if ( (L"accent6")           == sValue ) this->m_eValue = wmlcolorschemeindexAccent6;
        else if ( (L"dark1")             == sValue ) this->m_eValue = wmlcolorschemeindexDark1;
        else if ( (L"dark2")             == sValue ) this->m_eValue = wmlcolorschemeindexDark2;
        else if ( (L"followedHyperlink") == sValue ) this->m_eValue = wmlcolorschemeindexFollowedHyperlink;
        else if ( (L"hyperlink")         == sValue ) this->m_eValue = wmlcolorschemeindexHyperlink;
        else if ( (L"light1")            == sValue ) this->m_eValue = wmlcolorschemeindexLight1;
        else if ( (L"light2")            == sValue ) this->m_eValue = wmlcolorschemeindexLight2;
        else                                          this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EWmlColorSchemeIndex eDefValue>
    std::wstring CWmlColorSchemeIndex<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case wmlcolorschemeindexAccent1           : return (L"accent1");
        case wmlcolorschemeindexAccent2           : return (L"accent2");
        case wmlcolorschemeindexAccent3           : return (L"accent3");
        case wmlcolorschemeindexAccent4           : return (L"accent4");
        case wmlcolorschemeindexAccent5           : return (L"accent5");
        case wmlcolorschemeindexAccent6           : return (L"accent6");
        case wmlcolorschemeindexDark1             : return (L"dark1");
        case wmlcolorschemeindexDark2             : return (L"dark2");
        case wmlcolorschemeindexFollowedHyperlink : return (L"followedHyperlink");
        case wmlcolorschemeindexHyperlink         : return (L"hyperlink");
        case wmlcolorschemeindexLight1            : return (L"light1");
        case wmlcolorschemeindexLight2            : return (L"light2");
        default                                   : return (L"accent1");
        }
    }
}
