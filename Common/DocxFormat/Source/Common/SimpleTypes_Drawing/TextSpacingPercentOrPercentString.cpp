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
    CTextSpacingPercentOrPercentString::CTextSpacingPercentOrPercentString()
    {
        m_dValue = 0;
    }

    double CTextSpacingPercentOrPercentString::GetValue() const
    {
        return m_dValue;
    }

    void CTextSpacingPercentOrPercentString::SetValue(double dValue)
    {
        m_dValue = dValue;
    }

    double CTextSpacingPercentOrPercentString::FromString(std::wstring &sValue)
    {
        int nPos = (int)sValue.find( '%' );
        int nLen = (int)sValue.length();
        if ( -1 == nPos || nPos != (int)sValue.length() - 1 || nLen <= 0  )
        {
            if ( -1 == nPos && nLen > 0)
            {
                // Поправка 12.1.2.7 (Part4)
                int nValue = (std::min)( 13200000, (std::max)( 0, _wtoi( sValue.c_str() ) ) );
                m_dValue = nValue / 1000.0;
            }
            return m_dValue;
        }
        else
            m_dValue = XmlUtils::GetDouble( sValue.substr( 0, nLen - 1 ));

        return m_dValue;
    }

    std::wstring CTextSpacingPercentOrPercentString::ToString  () const
    {
        return boost::lexical_cast<std::wstring>(m_dValue) + L"%";
    }
}
