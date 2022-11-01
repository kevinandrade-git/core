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
    template<EBlackWhiteMode eDefValue>
    CBlackWhiteMode<eDefValue>::CBlackWhiteMode() {}

    template<EBlackWhiteMode eDefValue>
    EBlackWhiteMode CBlackWhiteMode<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"auto")       == sValue ) this->m_eValue = blackwhitemodeAuto;
        else if ( (L"black")      == sValue ) this->m_eValue = blackwhitemodeBlack;
        else if ( (L"blackGray")  == sValue ) this->m_eValue = blackwhitemodeBlackGray;
        else if ( (L"blackWhite") == sValue ) this->m_eValue = blackwhitemodeBlackWhite;
        else if ( (L"clr")        == sValue ) this->m_eValue = blackwhitemodeClr;
        else if ( (L"gray")       == sValue ) this->m_eValue = blackwhitemodeGray;
        else if ( (L"grayWhite")  == sValue ) this->m_eValue = blackwhitemodeGrayWhite;
        else if ( (L"hidden")     == sValue ) this->m_eValue = blackwhitemodeHidden;
        else if ( (L"invGray")    == sValue ) this->m_eValue = blackwhitemodeInvGray;
        else if ( (L"ltGray")     == sValue ) this->m_eValue = blackwhitemodeLtGray;
        else if ( (L"white")      == sValue ) this->m_eValue = blackwhitemodeWhite;
        else                                   this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EBlackWhiteMode eDefValue>
    std::wstring CBlackWhiteMode<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case blackwhitemodeAuto       : return (L"auto");
        case blackwhitemodeBlack      : return (L"black");
        case blackwhitemodeBlackGray  : return (L"blackGray");
        case blackwhitemodeBlackWhite : return (L"blackWhite");
        case blackwhitemodeClr        : return (L"clr");
        case blackwhitemodeGray       : return (L"gray");
        case blackwhitemodeGrayWhite  : return (L"grayWhite");
        case blackwhitemodeHidden     : return (L"hidden");
        case blackwhitemodeInvGray    : return (L"invGray");
        case blackwhitemodeLtGray     : return (L"ltGray");
        case blackwhitemodeWhite      : return (L"white");
        default                       : return (L"auto");
        }
    }
}
