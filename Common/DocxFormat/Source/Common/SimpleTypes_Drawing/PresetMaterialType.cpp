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
    template<EPresetMaterialType eDefValue>
    CPresetMaterialType<eDefValue>::CPresetMaterialType() {}

    template<EPresetMaterialType eDefValue>
    EPresetMaterialType CPresetMaterialType<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'c':
            if      ( (L"clear")             == sValue ) this->m_eValue = presetmaterialtypeClear;
            break;
        case 'd':
            if      ( (L"dkEdge")            == sValue ) this->m_eValue = presetmaterialtypeDkEdge;
            break;
        case 'f':
            if      ( (L"flat")              == sValue ) this->m_eValue = presetmaterialtypeFlat;
            break;
        case 'l':
            if      ( (L"legacyMatte")       == sValue ) this->m_eValue = presetmaterialtypeLegacyMatte;
            else if ( (L"legacyMetal")       == sValue ) this->m_eValue = presetmaterialtypeLegacyMetal;
            else if ( (L"legacyPlastic")     == sValue ) this->m_eValue = presetmaterialtypeLegacyPlastic;
            else if ( (L"legacyWireframe")   == sValue ) this->m_eValue = presetmaterialtypeLegacyWireframe;
            break;
        case 'm':
            if      ( (L"matte")             == sValue ) this->m_eValue = presetmaterialtypeMatte;
            else if ( (L"metal")             == sValue ) this->m_eValue = presetmaterialtypeMetal;
            break;
        case 'p':
            if      ( (L"plastic")           == sValue ) this->m_eValue = presetmaterialtypePlastic;
            else if ( (L"powder")            == sValue ) this->m_eValue = presetmaterialtypePowder;
            break;
        case 's':
            if      ( (L"softEdge")          == sValue ) this->m_eValue = presetmaterialtypeSoftEdge;
            else if ( (L"softmetal")         == sValue ) this->m_eValue = presetmaterialtypeSoftmetal;
            break;
        case 't':
            if      ( (L"translucentPowder") == sValue ) this->m_eValue = presetmaterialtypeTranslucentPowder;
            break;
        case 'w':
            if      ( (L"warmMatte")         == sValue ) this->m_eValue = presetmaterialtypeWarmMatte;
            break;
        }

        return this->m_eValue;
    }

    template<EPresetMaterialType eDefValue>
    std::wstring CPresetMaterialType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case presetmaterialtypeClear             : return (L"clear");
        case presetmaterialtypeDkEdge            : return (L"dkEdge");
        case presetmaterialtypeFlat              : return (L"flat");
        case presetmaterialtypeLegacyMatte       : return (L"legacyMatte");
        case presetmaterialtypeLegacyMetal       : return (L"legacyMetal");
        case presetmaterialtypeLegacyPlastic     : return (L"legacyPlastic");
        case presetmaterialtypeLegacyWireframe   : return (L"legacyWireframe");
        case presetmaterialtypeMatte             : return (L"matte");
        case presetmaterialtypeMetal             : return (L"metal");
        case presetmaterialtypePlastic           : return (L"plastic");
        case presetmaterialtypePowder            : return (L"powder");
        case presetmaterialtypeSoftEdge          : return (L"softEdge");
        case presetmaterialtypeSoftmetal         : return (L"softmetal");
        case presetmaterialtypeTranslucentPowder : return (L"translucentPowder");
        case presetmaterialtypeWarmMatte         : return (L"warmMatte");
        default                                  : return (L"clear");
        }
    }
}
