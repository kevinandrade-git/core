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
    CDecimalNumberOrPercent::CDecimalNumberOrPercent()
    {
        m_dValue = 0;
        m_bTrailingPercentSign = false;
    }

    double CDecimalNumberOrPercent::GetValue() const
    {
        return m_dValue;
    }

    int CDecimalNumberOrPercent::GetValueIntegerPercent() const
    {
        if(m_bTrailingPercentSign)
        {
            return (int)((m_dValue / 2) * 100);
        }
        else
        {
            return (int)m_dValue;
        }
    }

    void CDecimalNumberOrPercent::SetValue(double dValue)
    {
        m_dValue = dValue;
    }

    double CDecimalNumberOrPercent::FromString(std::wstring &sValue, double dDefValue)
    {
        if ( sValue.empty() )
        {
            m_dValue = dDefValue;
            return m_dValue;
        }

        int nLen = (int)sValue.length();
        wchar_t wsLastChar = sValue[nLen - 1 ];
        if ( wsLastChar == '%' )
        {
            nLen--;
            m_bTrailingPercentSign = true;
        }
        else
            m_bTrailingPercentSign = false;

        m_dValue = XmlUtils::GetDouble( sValue.substr(0, nLen));

        return m_dValue;
    }

    std::wstring CDecimalNumberOrPercent::ToString() const
    {
        std::wstring sResult;

        if ( !m_bTrailingPercentSign )
            sResult = std::to_wstring( (int)m_dValue);
        else
            sResult = boost::lexical_cast<std::wstring>(m_dValue) + L"%";

        return sResult;
    }

    bool CDecimalNumberOrPercent::IsPercent() const
    {
        return m_bTrailingPercentSign;
    }

    void CDecimalNumberOrPercent::SetPercent(bool bPercent)
    {
        m_bTrailingPercentSign = bPercent;
    }
}
