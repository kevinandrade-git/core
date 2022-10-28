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
    template<EJc eDefValue>
    CJc<eDefValue>::CJc() {}

    template<EJc eDefValue>
    EJc CJc<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"both")           == sValue ) this->m_eValue = jcBoth;
        else if ( (L"center")         == sValue ) this->m_eValue = jcCenter;
        else if ( (L"distribute")     == sValue ) this->m_eValue = jcDistribute;
        else if ( (L"end")            == sValue ) this->m_eValue = jcEnd;
        else if ( (L"highKashida")    == sValue ) this->m_eValue = jcHighKashida;
        else if ( (L"lowKashida")     == sValue ) this->m_eValue = jcLowKashida;
        else if ( (L"mediumKashida")  == sValue ) this->m_eValue = jcMediumKashida;
        else if ( (L"numTab")         == sValue ) this->m_eValue = jcNumTab;
        else if ( (L"start")          == sValue ) this->m_eValue = jcStart;
        else if ( (L"thaiDistribute") == sValue ) this->m_eValue = jcThaiDistribute;
        else if ( (L"left")           == sValue ) this->m_eValue = jcLeft;
        else if ( (L"right")          == sValue ) this->m_eValue = jcRight;
        else                                       this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EJc eDefValue>
    std::wstring CJc<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case jcBoth            : return (L"both");
        case jcCenter          : return (L"center");
        case jcDistribute      : return (L"distribute");
        case jcEnd             : return (L"end");
        case jcHighKashida     : return (L"highKashida");
        case jcLowKashida      : return (L"lowKashida");
        case jcMediumKashida   : return (L"mediumKashida");
        case jcNumTab          : return (L"numTab");
        case jcStart           : return (L"start");
        case jcThaiDistribute  : return (L"thaiDistribute");
        case jcLeft            : return (L"left");
        case jcRight           : return (L"right");
        default                : return (L"left");
        }
    }
}
