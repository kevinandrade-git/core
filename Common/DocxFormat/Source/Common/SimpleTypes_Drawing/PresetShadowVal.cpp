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
    template<EPresetShadowVal eDefValue>
    CPresetShadowVal<eDefValue>::CPresetShadowVal() {}

    template<EPresetShadowVal eDefValue>
    EPresetShadowVal CPresetShadowVal<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"shdw1")  == sValue ) this->m_eValue = presetshadowvalShdw1;
        else if ( (L"shdw10") == sValue ) this->m_eValue = presetshadowvalShdw10;
        else if ( (L"shdw11") == sValue ) this->m_eValue = presetshadowvalShdw11;
        else if ( (L"shdw12") == sValue ) this->m_eValue = presetshadowvalShdw12;
        else if ( (L"shdw13") == sValue ) this->m_eValue = presetshadowvalShdw13;
        else if ( (L"shdw14") == sValue ) this->m_eValue = presetshadowvalShdw14;
        else if ( (L"shdw15") == sValue ) this->m_eValue = presetshadowvalShdw15;
        else if ( (L"shdw16") == sValue ) this->m_eValue = presetshadowvalShdw16;
        else if ( (L"shdw17") == sValue ) this->m_eValue = presetshadowvalShdw17;
        else if ( (L"shdw18") == sValue ) this->m_eValue = presetshadowvalShdw18;
        else if ( (L"shdw19") == sValue ) this->m_eValue = presetshadowvalShdw19;
        else if ( (L"shdw2")  == sValue ) this->m_eValue = presetshadowvalShdw2;
        else if ( (L"shdw20") == sValue ) this->m_eValue = presetshadowvalShdw20;
        else if ( (L"shdw3")  == sValue ) this->m_eValue = presetshadowvalShdw3;
        else if ( (L"shdw4")  == sValue ) this->m_eValue = presetshadowvalShdw4;
        else if ( (L"shdw5")  == sValue ) this->m_eValue = presetshadowvalShdw5;
        else if ( (L"shdw6")  == sValue ) this->m_eValue = presetshadowvalShdw6;
        else if ( (L"shdw7")  == sValue ) this->m_eValue = presetshadowvalShdw7;
        else if ( (L"shdw8")  == sValue ) this->m_eValue = presetshadowvalShdw8;
        else if ( (L"shdw9")  == sValue ) this->m_eValue = presetshadowvalShdw9;
        else                               this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EPresetShadowVal eDefValue>
    std::wstring CPresetShadowVal<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case presetshadowvalShdw1:  return (L"shdw1");
        case presetshadowvalShdw2:  return (L"shdw2");
        case presetshadowvalShdw3:  return (L"shdw3");
        case presetshadowvalShdw4:  return (L"shdw4");
        case presetshadowvalShdw5:  return (L"shdw5");
        case presetshadowvalShdw6:  return (L"shdw6");
        case presetshadowvalShdw7:  return (L"shdw7");
        case presetshadowvalShdw8:  return (L"shdw8");
        case presetshadowvalShdw9:  return (L"shdw9");
        case presetshadowvalShdw10: return (L"shdw10");
        case presetshadowvalShdw11: return (L"shdw11");
        case presetshadowvalShdw12: return (L"shdw12");
        case presetshadowvalShdw13: return (L"shdw13");
        case presetshadowvalShdw14: return (L"shdw14");
        case presetshadowvalShdw15: return (L"shdw15");
        case presetshadowvalShdw16: return (L"shdw16");
        case presetshadowvalShdw17: return (L"shdw17");
        case presetshadowvalShdw18: return (L"shdw18");
        case presetshadowvalShdw19: return (L"shdw19");
        case presetshadowvalShdw20: return (L"shdw20");
        default :                   return (L"shdw14");
        }
    }
}
