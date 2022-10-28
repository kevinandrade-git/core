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
    template<ETblStyleOverrideType eDefValue>
    CTblStyleOverrideType<eDefValue>::CTblStyleOverrideType() {}

    template<ETblStyleOverrideType eDefValue>
    ETblStyleOverrideType CTblStyleOverrideType<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"band1Horz")  == sValue ) this->m_eValue = tblstyleoverridetypeBand1Horz;
        else if ( (L"band1Vert")  == sValue ) this->m_eValue = tblstyleoverridetypeBand1Vert;
        else if ( (L"band2Horz")  == sValue ) this->m_eValue = tblstyleoverridetypeBand2Horz;
        else if ( (L"band2Vert")  == sValue ) this->m_eValue = tblstyleoverridetypeBand2Vert;
        else if ( (L"firstCol")   == sValue ) this->m_eValue = tblstyleoverridetypeFirstCol;
        else if ( (L"firstRow")   == sValue ) this->m_eValue = tblstyleoverridetypeFirstRow;
        else if ( (L"lastCol")    == sValue ) this->m_eValue = tblstyleoverridetypeLastCol;
        else if ( (L"lastRow")    == sValue ) this->m_eValue = tblstyleoverridetypeLastRow;
        else if ( (L"neCell")     == sValue ) this->m_eValue = tblstyleoverridetypeNeCell;
        else if ( (L"nwCell")     == sValue ) this->m_eValue = tblstyleoverridetypeNwCell;
        else if ( (L"seCell")     == sValue ) this->m_eValue = tblstyleoverridetypeSeCell;
        else if ( (L"swCell")     == sValue ) this->m_eValue = tblstyleoverridetypeSwCell;
        else if ( (L"wholeTable") == sValue ) this->m_eValue = tblstyleoverridetypeWholeTable;
        else                                   this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<ETblStyleOverrideType eDefValue>
    std::wstring CTblStyleOverrideType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case tblstyleoverridetypeBand1Horz  : return (L"band1Horz");
        case tblstyleoverridetypeBand1Vert  : return (L"band1Vert");
        case tblstyleoverridetypeBand2Horz  : return (L"band2Horz");
        case tblstyleoverridetypeBand2Vert  : return (L"band2Vert");
        case tblstyleoverridetypeFirstCol   : return (L"firstCol");
        case tblstyleoverridetypeFirstRow   : return (L"firstRow");
        case tblstyleoverridetypeLastCol    : return (L"lastCol");
        case tblstyleoverridetypeLastRow    : return (L"lastRow");
        case tblstyleoverridetypeNeCell     : return (L"neCell");
        case tblstyleoverridetypeNwCell     : return (L"nwCell");
        case tblstyleoverridetypeSeCell     : return (L"seCell");
        case tblstyleoverridetypeSwCell     : return (L"swCell");
        case tblstyleoverridetypeWholeTable : return (L"wholeTable");
        default                             : return (L"wholeTable");
        }
    }
}
