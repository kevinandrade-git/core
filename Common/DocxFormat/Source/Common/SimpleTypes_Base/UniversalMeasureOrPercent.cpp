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
    CUniversalMeasureOrPercent::CUniversalMeasureOrPercent() {}
    CUniversalMeasureOrPercent::~CUniversalMeasureOrPercent() {}

    void CUniversalMeasureOrPercent::SetValue(double dValue)
    {
        m_bUnit = false;
        m_dValue = dValue;
    }

    double CUniversalMeasureOrPercent::FromString(std::wstring &sValue)
    {
        m_bUnit = false;
        m_bTrailingPercentSign = false;
        if ( sValue.empty() )
        {
            m_dValue = 0;
            return m_dValue;
        }
        if('%' == sValue[sValue.length() - 1])
        {
            m_bTrailingPercentSign = true;
            m_dValue = XmlUtils::GetDouble( sValue.substr(0, sValue.length() - 1).c_str() );
        }
        else
        {
            Parse(sValue, 1);
        }
        return m_dValue;
    }

    std::wstring CUniversalMeasureOrPercent::ToString  () const
    {
        std::wstring sResult;

        if ( m_bUnit )
            sResult = boost::lexical_cast<std::wstring>(m_dValue) + L"pt";
        else if ( m_bTrailingPercentSign )
            sResult = boost::lexical_cast<std::wstring>(m_dValue) + L"%";
        else
            sResult = std::to_wstring( (int)(m_dValue) );

        return sResult;
    }

    bool CUniversalMeasureOrPercent::IsPercent() const
    {
        return m_bTrailingPercentSign;
    }
}