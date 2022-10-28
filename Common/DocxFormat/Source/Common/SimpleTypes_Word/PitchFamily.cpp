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
    template<EPitchFamily eDefValue>
    CPitchFamily<eDefValue>::CPitchFamily() {}

    template<EPitchFamily eDefValue>
    EPitchFamily CPitchFamily<eDefValue>::FromString(std::wstring &sValue)
    {
        CUcharHexNumber<> oHex = sValue;
        int nValue = oHex.GetValue();

        switch ( nValue )
        {
        case 0x00: case 0x01: case 0x02:
        case 0x10: case 0x11: case 0x12:
        case 0x20: case 0x21: case 0x22:
        case 0x30: case 0x31: case 0x32:
        case 0x40: case 0x41: case 0x42:
        case 0x50: case 0x51: case 0x52:
            this->m_eValue = (EPitchFamily)nValue; break;
        default:
            this->m_eValue = eDefValue; break;
        }

        return this->m_eValue;
    }

    template<EPitchFamily eDefValue>
    std::wstring CPitchFamily<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case pitchfamilyDefUnk: return (L"00");
        case pitchfamilyFixUnk: return (L"01");
        case pitchfamilyVarUnk: return (L"02");
        case pitchfamilyDefRom: return (L"10");
        case pitchfamilyFixRom: return (L"11");
        case pitchfamilyVarRom: return (L"12");
        case pitchfamilyDefSwi: return (L"20");
        case pitchfamilyFixSwi: return (L"21");
        case pitchfamilyVarSwi: return (L"22");
        case pitchfamilyDefMod: return (L"30");
        case pitchfamilyFixMod: return (L"31");
        case pitchfamilyVarMod: return (L"32");
        case pitchfamilyDefScr: return (L"40");
        case pitchfamilyFixScr: return (L"41");
        case pitchfamilyVarScr: return (L"42");
        case pitchfamilyDefDec: return (L"50");
        case pitchfamilyFixDec: return (L"51");
        case pitchfamilyVarDec: return (L"52");
        default               : return (L"00");
        }
    }

    template<EPitchFamily eDefValue>
    unsigned char CPitchFamily<eDefValue>::GetPitch()
    {
        int nValue = (int)this->m_eValue;
        return nValue & 0x0F;
    }

    template<EPitchFamily eDefValue>
    unsigned char CPitchFamily<eDefValue>::GetFamily()
    {
        int nValue = (int)this->m_eValue;
        return nValue >> 4;
    }
}
