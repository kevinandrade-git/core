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

#include "../SimpleTypes_Base.h"

namespace SimpleTypes
{
    CUniversalMeasure::CUniversalMeasure() {}
    CUniversalMeasure::~CUniversalMeasure() {}

    double CUniversalMeasure::GetValue() const
    {
        return m_dValue;
    }
    double CUniversalMeasure::ToPoints() const
    {
        return m_dValue;
    }
    double CUniversalMeasure::ToInches() const
    {
        return m_dValue / 72.0;
    }
    double CUniversalMeasure::ToMm() const
    {
        return m_dValue * 25.4 / 72;
    }
    long CUniversalMeasure::ToTwips() const
    {
        return (long)Pt_To_Dx(m_dValue);
    }
    long CUniversalMeasure::ToHps() const
    {
        return (long)(m_dValue * 2);
    }
    unsigned long CUniversalMeasure::ToUnsignedTwips() const
    {
        return (unsigned long)Pt_To_Dx(m_dValue);
    }
    double CUniversalMeasure::FromHps(double dValue)
    {
        m_dValue = (dValue / 2);
        return m_dValue;
    }
    double CUniversalMeasure::FromPoints(double dValue)
    {
        m_dValue = dValue;
        return m_dValue;
    }
    double CUniversalMeasure::FromTwips(double dValue)
    {
        m_dValue = Dx_To_Pt(dValue);
        return m_dValue;
    }
    double CUniversalMeasure::FromMm(double dValue)
    {
        m_dValue = Mm_To_Pt(dValue);
        return m_dValue;
    }
    double CUniversalMeasure::FromInches(double dValue)
    {
        m_dValue = Inch_To_Pt( dValue );
        return m_dValue;
    }
    double CUniversalMeasure::FromEmu   (double dValue)
    {
        m_dValue = Emu_To_Pt( dValue );
        return m_dValue;
    }

    bool CUniversalMeasure::IsUnits() const
    {
        return m_bUnit;
    }

    void CUniversalMeasure::Parse(std::wstring &sValue, double dKoef)
    {
        m_bUnit = false;
        m_dValue = 0;

        if (sValue.empty()) return;

        if ( sValue.length() <= 2 )
        {
            m_dValue = XmlUtils::GetDouble( sValue.c_str() ) / dKoef;

            return;
        }

        // Проверим последние два символа
        std::wstring sUnit = sValue.substr( sValue.length() - 2, 2 );
        m_bUnit = true;

        if ( _T("cm") == sUnit )
        {
            double dValue = XmlUtils::GetDouble( sValue.substr( 0, sValue.length() - 2 ).c_str() );
            m_dValue = Cm_To_Pt( dValue );
        }
        else if ( _T("mm") == sUnit )
        {
            double dValue = XmlUtils::GetDouble( sValue.substr( 0, sValue.length() - 2 ).c_str() );
            m_dValue = Mm_To_Pt( dValue );
        }
        else if ( _T("in") == sUnit )
        {
            double dValue = XmlUtils::GetDouble( sValue.substr( 0, sValue.length() - 2 ).c_str() );
            m_dValue = Inch_To_Pt( dValue );
        }
        else if ( _T("pt") == sUnit )
        {
            m_dValue = XmlUtils::GetDouble( sValue.substr( 0, sValue.length() - 2 ).c_str() );
        }
        else if ( _T("pc") == sUnit )
        {
            double dValue = XmlUtils::GetDouble( sValue.substr( 0, sValue.length() - 2 ).c_str() );
            m_dValue = dValue * 12.0;
        }
        else if ( _T("pi") == sUnit )
        {
            double dValue = XmlUtils::GetDouble( sValue.substr( 0, sValue.length() - 2 ).c_str() );
            m_dValue = dValue * 12.0;
        }
        else
        {
            m_bUnit = false;
            m_dValue = XmlUtils::GetDouble( sValue.c_str() ) / dKoef;

            return;
        }
    }
}
