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
        CVml_Polygon2D_Units::CVml_Polygon2D_Units()
        {
            m_wcDelimiter = 0x20;
        }
        CVml_Polygon2D_Units::CVml_Polygon2D_Units(const CVml_Polygon2D_Units &oOther)\
        {
            m_wcDelimiter = 0x20;
            FromString( oOther.ToString() );
        }
        CVml_Polygon2D_Units::CVml_Polygon2D_Units(std::wstring &sValue)
        {
            m_wcDelimiter = 0x20;
            FromString( sValue );
        }
        CVml_Polygon2D_Units::CVml_Polygon2D_Units(const wchar_t* cwsValue)
        {
            m_wcDelimiter = 0x20;
            FromString( cwsValue );
        }
        CVml_Polygon2D_Units::CVml_Polygon2D_Units(const std::wstring& wsStr)
        {
            m_wcDelimiter = 0x20;
            FromString( wsStr );
        }
        const CVml_Polygon2D_Units & CVml_Polygon2D_Units::operator =(std::wstring &sValue)
        {
            FromString( sValue );
            return *this;
        }
        const CVml_Polygon2D_Units & CVml_Polygon2D_Units::operator =(const wchar_t* cwsString)
        {
            FromString( cwsString );
            return *this;
        }
        const CVml_Polygon2D_Units & CVml_Polygon2D_Units::operator =(const std::wstring& wsStr)
        {
            FromString( wsStr );
            return *this;
        }

        void CVml_Polygon2D_Units::SetDelimiter(wchar_t wcNew)
        {
            m_wcDelimiter = wcNew;
        }
        double CVml_Polygon2D_Units::GetX(int nIndex) const
        {
            if ( nIndex < 0 || nIndex >= (int)m_arrPoints.size()  )
                return 0;

            return m_arrPoints[nIndex].dX;
        }
        double CVml_Polygon2D_Units::GetY(int nIndex) const
        {
            if ( nIndex < 0 || nIndex >= (int)m_arrPoints.size()  )
                return 0;

            return m_arrPoints[nIndex].dY;
        }

        void CVml_Polygon2D_Units::AddPoint(double dX, double dY)
        {
            TPoint oPt( dX, dY );
            m_arrPoints.push_back( oPt );
        }

        double CVml_Polygon2D_Units::FromString(std::wstring &sValue)
        {
            m_arrPoints.clear();

            int nLen = (int)sValue.length();
            if ( nLen <= 0 )
                return 0;

            int nStartPos = 0;
            while ( true )
            {
                int nMidPos = (int)sValue.find( _T(","), nStartPos );
                int nEndPos = (int)sValue.find( m_wcDelimiter, nMidPos + 1 );

                if ( -1 == nMidPos )
                    break;

                if ( -1 == nEndPos )
                    nEndPos = nLen;

                   std::wstring strX = sValue.substr( nStartPos, nMidPos - nStartPos ) ;
                   std::wstring strY = sValue.substr( nMidPos + 1, nEndPos - nMidPos - 1 );

                    XmlUtils::replace_all(strX, L"@", L"");
                    XmlUtils::replace_all(strY, L"@", L"");

                   int nX = XmlUtils::GetDouble(strX);
                   int nY = XmlUtils::GetDouble(strY );

                   m_arrPoints.push_back( TPoint( nX, nY ) );

                nStartPos = nEndPos + 1;
            }


            return 0;
        }

        std::wstring CVml_Polygon2D_Units::ToString() const
        {
            std::wstring sResult;

            for ( size_t nIndex = 0; nIndex < m_arrPoints.size(); nIndex++ )
            {
                sResult += boost::lexical_cast<std::wstring>(m_arrPoints[nIndex].dX) + L"," + boost::lexical_cast<std::wstring>(m_arrPoints[nIndex].dY);
                if ( nIndex < m_arrPoints.size() - 1 )
                    sResult += m_wcDelimiter;
            }

            return sResult;
        }
    }
}
