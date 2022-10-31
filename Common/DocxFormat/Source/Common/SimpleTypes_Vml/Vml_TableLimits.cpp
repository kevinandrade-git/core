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

#include "../SimpleTypes_Vml.h"

namespace SimpleTypes
{
    namespace Vml
    {
        CVml_TableLimits::CVml_TableLimits()
        {
        }

        unsigned int CVml_TableLimits::GetSize() const
        {
            return (unsigned int)m_arrLimits.size();
        }

        double CVml_TableLimits::GetAt(int nIndex) const
        {
            if ( nIndex < 0 || nIndex >= (int)m_arrLimits.size() )
                return 0;

            return m_arrLimits[nIndex];
        }

        void CVml_TableLimits::AddValue(double dValue)
        {
            m_arrLimits.push_back( dValue );
        }

        int CVml_TableLimits::FromString(std::wstring &sValue)
        {
            int nPos = 0;
            int nLen = (int)sValue.length();

            int nSpacePos = 0;
            wchar_t wChar;
            while ( nPos < nLen )
            {
                while ( ' ' == ( wChar = sValue[nPos] ) )
                {
                    nPos++;
                    if ( nPos >= nLen )
                        return 0;
                }

                nSpacePos = (int)sValue.find( _T(" "), nPos );
                if ( -1 == nSpacePos )
                    nSpacePos = nLen;

                SimpleTypes::CPoint oPoint = sValue.substr( nPos, nSpacePos - nPos );
                nPos = nSpacePos + 1;

                m_arrLimits.push_back( oPoint.ToPoints() );
            }

            return 0;
        }

        std::wstring CVml_TableLimits::ToString() const
        {
            std::wstring sResult;

            for ( unsigned int nIndex = 0; nIndex < m_arrLimits.size(); nIndex++ )
            {
                sResult += boost::lexical_cast<std::wstring>(m_arrLimits[nIndex]) + L"pt ";
            }

            return sResult;
        }
    }
}
