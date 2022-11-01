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
    template<EAdjAngle eDefValue>
    CAdjAngle<eDefValue>::CAdjAngle()
    {
        m_nAngle = 0;
    }

    template<EAdjAngle eDefValue>
    EAdjAngle CAdjAngle<eDefValue>::FromString(std::wstring &sValue)
    {
        m_nAngle = 0;
        m_sGuide.clear();

        Parse( sValue );

        return this->m_eValue;
    }

    template<EAdjAngle eDefValue>
    std::wstring CAdjAngle<eDefValue>::ToString() const
    {
        if ( adjangleAngle == this->m_eValue )
        {
            return std::to_wstring( m_nAngle );
        }
        else
        {
            return m_sGuide;
        }
    }

    template<EAdjAngle eDefValue>
    double CAdjAngle<eDefValue>::GetAngle() const
    {
        return m_nAngle / 60000.0;
    }

    template<EAdjAngle eDefValue>
    std::wstring CAdjAngle<eDefValue>::GetGuide() const
    {
        return m_sGuide;
    }

    template<EAdjAngle eDefValue>
    void CAdjAngle<eDefValue>::Parse(std::wstring &sValue)
    {
        bool bAngleValue = true;

        for ( size_t nIndex = 0; nIndex < sValue.length(); nIndex++ )
        {
            if ( !iswdigit( sValue[nIndex] ) )
            {
                bAngleValue = false;
                break;
            }
        }

        if ( bAngleValue )
        {
            this->m_eValue = adjangleAngle;
            m_nAngle = _wtoi( sValue.c_str() );
        }
        else
        {
            this->m_eValue = adjangleGuide;
            m_sGuide = sValue;
        }
    }
}
