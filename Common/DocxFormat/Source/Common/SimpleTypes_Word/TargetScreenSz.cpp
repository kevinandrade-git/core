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
    template<ETargetScreenSz eDefValue>
    CTargetScreenSz<eDefValue>::CTargetScreenSz() {}

    template<ETargetScreenSz eDefValue>
    ETargetScreenSz CTargetScreenSz<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"1024x768")  == sValue ) this->m_eValue = targetscreensz1024x768;
        else if ( (L"1152x882")  == sValue ) this->m_eValue = targetscreensz1152x882;
        else if ( (L"1152x900")  == sValue ) this->m_eValue = targetscreensz1152x900;
        else if ( (L"1280x1024") == sValue ) this->m_eValue = targetscreensz1280x1024;
        else if ( (L"1600x1200") == sValue ) this->m_eValue = targetscreensz1600x1200;
        else if ( (L"1800x1440") == sValue ) this->m_eValue = targetscreensz1800x1440;
        else if ( (L"1920x1200") == sValue ) this->m_eValue = targetscreensz1920x1200;
        else if ( (L"544x376")   == sValue ) this->m_eValue = targetscreensz544x376;
        else if ( (L"640x480")   == sValue ) this->m_eValue = targetscreensz640x480;
        else if ( (L"720x512")   == sValue ) this->m_eValue = targetscreensz720x512;
        else if ( (L"800x600")   == sValue ) this->m_eValue = targetscreensz800x600;
        else                                  this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<ETargetScreenSz eDefValue>
    std::wstring CTargetScreenSz<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case targetscreensz1024x768  : return (L"1024x768");
        case targetscreensz1152x882  : return (L"1152x882");
        case targetscreensz1152x900  : return (L"1152x900");
        case targetscreensz1280x1024 : return (L"1280x1024");
        case targetscreensz1600x1200 : return (L"1600x1200");
        case targetscreensz1800x1440 : return (L"1800x1440");
        case targetscreensz1920x1200 : return (L"1920x1200");
        case targetscreensz544x376   : return (L"544x376");
        case targetscreensz640x480   : return (L"640x480");
        case targetscreensz720x512   : return (L"720x512");
        case targetscreensz800x600   : return (L"800x600");
        default                      : return (L"1280x1024");
        }
    }
}
