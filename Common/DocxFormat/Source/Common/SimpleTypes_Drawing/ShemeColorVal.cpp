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
    template<EShemeColorVal eDefValue>
    CShemeColorVal<eDefValue>::CShemeColorVal() {}

    template<EShemeColorVal eDefValue>
    EShemeColorVal CShemeColorVal<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;
        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'a':
            if      ( (L"accent1") == sValue ) this->m_eValue = shemecolorvalAccent1;
            else if ( (L"accent2") == sValue ) this->m_eValue = shemecolorvalAccent2;
            else if ( (L"accent3") == sValue ) this->m_eValue = shemecolorvalAccent3;
            else if ( (L"accent4") == sValue ) this->m_eValue = shemecolorvalAccent4;
            else if ( (L"accent5") == sValue ) this->m_eValue = shemecolorvalAccent5;
            else if ( (L"accent6") == sValue ) this->m_eValue = shemecolorvalAccent6;
            break;
        case 'b':
            if      ( (L"bg1") == sValue ) this->m_eValue = shemecolorvalBg1;
            else if ( (L"bg2") == sValue ) this->m_eValue = shemecolorvalBg2;
            break;
        case 'd':
            if      ( (L"dk1") == sValue ) this->m_eValue = shemecolorvalDk1;
            else if ( (L"dk2") == sValue ) this->m_eValue = shemecolorvalDk2;
            break;
        case 'f':
            if      ( (L"folHlink") == sValue ) this->m_eValue = shemecolorvalFolHlink;
            break;
        case 'h':
            if      ( (L"hlink") == sValue ) this->m_eValue = shemecolorvalHlink;
            break;
        case 'l':
            if      ( (L"lt1") == sValue ) this->m_eValue = shemecolorvalLt1;
            else if ( (L"lt2") == sValue ) this->m_eValue = shemecolorvalLt2;
            break;
        case 'p':
            if      ( (L"phClr") == sValue ) this->m_eValue = shemecolorvalPhClr;
            break;
        case 't':
            if      ( (L"tx1") == sValue ) this->m_eValue = shemecolorvalTx1;
            else if ( (L"tx2") == sValue ) this->m_eValue = shemecolorvalTx2;
            break;
        }

        return this->m_eValue;
    }

    template<EShemeColorVal eDefValue>
    std::wstring CShemeColorVal<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case shemecolorvalAccent1:  return (L"accent1");
        case shemecolorvalAccent2:  return (L"accent2");
        case shemecolorvalAccent3:  return (L"accent3");
        case shemecolorvalAccent4:  return (L"accent4");
        case shemecolorvalAccent5:  return (L"accent5");
        case shemecolorvalAccent6:  return (L"accent6");
        case shemecolorvalBg1:      return (L"bg1");
        case shemecolorvalBg2:      return (L"bg2");
        case shemecolorvalDk1:      return (L"dk1");
        case shemecolorvalDk2:      return (L"dk2");
        case shemecolorvalFolHlink: return (L"folHlink");
        case shemecolorvalHlink:    return (L"hlink");
        case shemecolorvalLt1:      return (L"lt1");
        case shemecolorvalLt2:      return (L"lt2");
        case shemecolorvalPhClr:    return (L"phClr");
        case shemecolorvalTx1:      return (L"tx1");
        case shemecolorvalTx2:      return (L"tx2");
        default :                   return (L"accent1");
        }
    }
}
