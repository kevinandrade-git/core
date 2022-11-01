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
    template<EBevelPresetType eDefValue>
    CBevelPresetType<eDefValue>::CBevelPresetType() {}

    template<EBevelPresetType eDefValue>
    EBevelPresetType CBevelPresetType<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"angle")        == sValue ) this->m_eValue = bevelpresettypeAngle;
        else if ( (L"artDeco")      == sValue ) this->m_eValue = bevelpresettypeArtDeco;
        else if ( (L"circle")       == sValue ) this->m_eValue = bevelpresettypeCircle;
        else if ( (L"convex")       == sValue ) this->m_eValue = bevelpresettypeConvex;
        else if ( (L"coolSlant")    == sValue ) this->m_eValue = bevelpresettypeCoolSlant;
        else if ( (L"cross")        == sValue ) this->m_eValue = bevelpresettypeCross;
        else if ( (L"divot")        == sValue ) this->m_eValue = bevelpresettypeDivot;
        else if ( (L"hardEdge")     == sValue ) this->m_eValue = bevelpresettypeHardEdge;
        else if ( (L"relaxedInset") == sValue ) this->m_eValue = bevelpresettypeRelaxedInset;
        else if ( (L"riblet")       == sValue ) this->m_eValue = bevelpresettypeRiblet;
        else if ( (L"slope")        == sValue ) this->m_eValue = bevelpresettypeSlope;
        else if ( (L"softRound")    == sValue ) this->m_eValue = bevelpresettypeSoftRound;
        else                                     this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EBevelPresetType eDefValue>
    std::wstring CBevelPresetType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case bevelpresettypeAngle        : return (L"angle");
        case bevelpresettypeArtDeco      : return (L"artDeco");
        case bevelpresettypeCircle       : return (L"circle");
        case bevelpresettypeConvex       : return (L"convex");
        case bevelpresettypeCoolSlant    : return (L"coolSlant");
        case bevelpresettypeCross        : return (L"cross");
        case bevelpresettypeDivot        : return (L"divot");
        case bevelpresettypeHardEdge     : return (L"hardEdge");
        case bevelpresettypeRelaxedInset : return (L"relaxedInset");
        case bevelpresettypeRiblet       : return (L"riblet");
        case bevelpresettypeSlope        : return (L"slope");
        case bevelpresettypeSoftRound    : return (L"softRound");
        default                          : return (L"angle");
        }
    }
}
