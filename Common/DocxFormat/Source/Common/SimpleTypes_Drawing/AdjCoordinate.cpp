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
    template<EAdjCoordinate eDefValue>
    CAdjCoordinate<eDefValue>::CAdjCoordinate()
    {
        this->m_eValue = eDefValue;
    }

    template<EAdjCoordinate eDefValue>
    void CAdjCoordinate<eDefValue>::SetValue(double dValue)
    {
        m_bUnit = false;
        m_dValue = FromEmu(dValue);
    }

    template<EAdjCoordinate eDefValue>
    double CAdjCoordinate<eDefValue>::FromString(std::wstring &sValue)
    {
        m_sGuide.clear();

        Parse2( sValue );

        return m_dValue;
    }

    template<EAdjCoordinate eDefValue>
    std::wstring CAdjCoordinate<eDefValue>::ToString() const
    {
        if ( adjcoordinateCoord == this->m_eValue )
        {
            if ( m_bUnit )
            {
                return XmlUtils::DoubleToString(m_dValue, L"%.2f") + L"pt";
            }
            else
            {
                return std::to_wstring( (int)Pt_To_Emu( m_dValue ) );
            }
        }
        else
        {
            return m_sGuide;
        }
    }

    template<EAdjCoordinate eDefValue>
    std::wstring CAdjCoordinate<eDefValue>::GetGuide() const
    {
        return m_sGuide;
    }

    template<EAdjCoordinate eDefValue>
    double CAdjCoordinate<eDefValue>::GetValue() const
    {
        return m_dValue;
    }

    template<EAdjCoordinate eDefValue>
    void CAdjCoordinate<eDefValue>::Parse2(std::wstring &sValue)
    {
        Parse( sValue, 12700 );

        bool bGuide = false;
        if ( !m_bUnit )
        {
            for ( size_t nIndex = 0; nIndex < sValue.length(); nIndex++ )
            {
                if ( !iswdigit( sValue[nIndex] ) )
                {
                    bGuide = true;
                    break;
                }
            }
        }
        else
        {
            // Последние два символа не проверяем
            for ( size_t nIndex = 0; nIndex < sValue.length() - 2; nIndex++ )
            {
                if ( !iswdigit( sValue[nIndex] ) && sValue[nIndex] != '.' && sValue[nIndex] != '-' )
                {
                    bGuide = true;
                    break;
                }
            }
        }


        if ( bGuide )
        {
            this->m_eValue = adjcoordinateGuide;
            m_sGuide = sValue;
        }
        else
        {
            this->m_eValue = adjcoordinateCoord;
            // Значение хранится в m_dValue
        }
    }
}
