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
    template<EShd eDefValue>
    CShd<eDefValue>::CShd() {}

    template<EShd eDefValue>
    EShd CShd<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"clear")                 == sValue ) this->m_eValue = shdClear;
        else if ( (L"diagCross")             == sValue ) this->m_eValue = shdDiagCross;
        else if ( (L"diagStripe")            == sValue ) this->m_eValue = shdDiagStripe;
        else if ( (L"horzCross")             == sValue ) this->m_eValue = shdHorzCross;
        else if ( (L"horzStripe")            == sValue ) this->m_eValue = shdHorzStripe;
        else if ( (L"nil")                   == sValue ) this->m_eValue = shdNil;
        else if ( (L"pct10")                 == sValue ) this->m_eValue = shdPct10;
        else if ( (L"pct12")                 == sValue ) this->m_eValue = shdPct12;
        else if ( (L"pct15")                 == sValue ) this->m_eValue = shdPct15;
        else if ( (L"pct20")                 == sValue ) this->m_eValue = shdPct20;
        else if ( (L"pct25")                 == sValue ) this->m_eValue = shdPct25;
        else if ( (L"pct30")                 == sValue ) this->m_eValue = shdPct30;
        else if ( (L"pct35")                 == sValue ) this->m_eValue = shdPct35;
        else if ( (L"pct37")                 == sValue ) this->m_eValue = shdPct37;
        else if ( (L"pct40")                 == sValue ) this->m_eValue = shdPct40;
        else if ( (L"pct45")                 == sValue ) this->m_eValue = shdPct45;
        else if ( (L"pct5")                  == sValue ) this->m_eValue = shdPct5;
        else if ( (L"pct50")                 == sValue ) this->m_eValue = shdPct50;
        else if ( (L"pct55")                 == sValue ) this->m_eValue = shdPct55;
        else if ( (L"pct60")                 == sValue ) this->m_eValue = shdPct60;
        else if ( (L"pct62")                 == sValue ) this->m_eValue = shdPct62;
        else if ( (L"pct65")                 == sValue ) this->m_eValue = shdPct65;
        else if ( (L"pct70")                 == sValue ) this->m_eValue = shdPct70;
        else if ( (L"pct75")                 == sValue ) this->m_eValue = shdPct75;
        else if ( (L"pct80")                 == sValue ) this->m_eValue = shdPct80;
        else if ( (L"pct85")                 == sValue ) this->m_eValue = shdPct85;
        else if ( (L"pct87")                 == sValue ) this->m_eValue = shdPct87;
        else if ( (L"pct90")                 == sValue ) this->m_eValue = shdPct90;
        else if ( (L"pct95")                 == sValue ) this->m_eValue = shdPct95;
        else if ( (L"reverseDiagStripe")     == sValue ) this->m_eValue = shdReverseDiagStripe;
        else if ( (L"solid")                 == sValue ) this->m_eValue = shdSolid;
        else if ( (L"thinDiagCross")         == sValue ) this->m_eValue = shdThinDiagCross;
        else if ( (L"thinDiagStripe")        == sValue ) this->m_eValue = shdThinDiagStripe;
        else if ( (L"thinHorzCross")         == sValue ) this->m_eValue = shdThinHorzCross;
        else if ( (L"thinHorzStripe")        == sValue ) this->m_eValue = shdThinHorzStripe;
        else if ( (L"thinReverseDiagStripe") == sValue ) this->m_eValue = shdThinReverseDiagStripe;
        else if ( (L"thinVertStripe")        == sValue ) this->m_eValue = shdThinVertStripe;
        else if ( (L"vertStripe")            == sValue ) this->m_eValue = shdVertStripe;
        else                                              this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EShd eDefValue>
    std::wstring CShd<eDefValue>::ToString  () const
    {
        switch(this->m_eValue)
        {
        case shdClear                 : return (L"clear");
        case shdDiagCross             : return (L"diagCross");
        case shdDiagStripe            : return (L"diagStripe");
        case shdHorzCross             : return (L"horzCross");
        case shdHorzStripe            : return (L"horzStripe");
        case shdNil                   : return (L"nil");
        case shdPct10                 : return (L"pct10");
        case shdPct12                 : return (L"pct12");
        case shdPct15                 : return (L"pct15");
        case shdPct20                 : return (L"pct20");
        case shdPct25                 : return (L"pct25");
        case shdPct30                 : return (L"pct30");
        case shdPct35                 : return (L"pct35");
        case shdPct37                 : return (L"pct37");
        case shdPct40                 : return (L"pct40");
        case shdPct45                 : return (L"pct45");
        case shdPct5                  : return (L"pct5");
        case shdPct50                 : return (L"pct50");
        case shdPct55                 : return (L"pct55");
        case shdPct60                 : return (L"pct60");
        case shdPct62                 : return (L"pct62");
        case shdPct65                 : return (L"pct65");
        case shdPct70                 : return (L"pct70");
        case shdPct75                 : return (L"pct75");
        case shdPct80                 : return (L"pct80");
        case shdPct85                 : return (L"pct85");
        case shdPct87                 : return (L"pct87");
        case shdPct90                 : return (L"pct90");
        case shdPct95                 : return (L"pct95");
        case shdReverseDiagStripe     : return (L"reverseDiagStripe");
        case shdSolid                 : return (L"solid");
        case shdThinDiagCross         : return (L"thinDiagCross");
        case shdThinDiagStripe        : return (L"thinDiagStripe");
        case shdThinHorzCross         : return (L"thinHorzCross");
        case shdThinHorzStripe        : return (L"thinHorzStripe");
        case shdThinReverseDiagStripe : return (L"thinReverseDiagStripe");
        case shdThinVertStripe        : return (L"thinVertStripe");
        case shdVertStripe            : return (L"vertStripe");
        default                       : return (L"solid");
        }
    }
}
