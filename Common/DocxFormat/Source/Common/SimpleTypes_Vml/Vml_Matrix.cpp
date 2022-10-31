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
        CVml_Matrix::CVml_Matrix()
        {
            ResetMatrix();
        }
        CVml_Matrix::CVml_Matrix(const CVml_Matrix &oOther)\
        {
            ResetMatrix();
            FromString( oOther.ToString() );
        }
        CVml_Matrix::CVml_Matrix(std::wstring &sValue)
        {
            ResetMatrix();
            FromString( sValue );
        }
        CVml_Matrix::CVml_Matrix(const wchar_t* cwsValue)
        {
            ResetMatrix();
            FromString( cwsValue );
        }
        CVml_Matrix::CVml_Matrix(const std::wstring& wsStr)
        {
            ResetMatrix();
            FromString( wsStr );
        }
        const CVml_Matrix & CVml_Matrix::operator =(std::wstring &sValue)
        {
            FromString( sValue );
            return *this;
        }
        const CVml_Matrix & CVml_Matrix::operator =(const wchar_t* cwsString)
        {
            FromString( cwsString );
            return *this;
        }
        const CVml_Matrix & CVml_Matrix::operator =(const std::wstring& wsStr)
        {
            FromString( wsStr );
            return *this;
        }

        void CVml_Matrix::ResetMatrix()
        {
            m_dSxx = 1; m_dSxy = 0;
            m_dSyx = 0; m_dSyy = 1;
            m_dPx  = 0; m_dPy  = 0;
        }
        void CVml_Matrix::SetMatrix(double dSxx, double dSxy, double dSyx, double dSyy, double dPx, double dPy)
        {
            m_dSxx = dSxx; m_dSxy = dSxy;
            m_dSyx = dSyx; m_dSyy = dSyy;
            m_dPx  =  dPx; m_dPy  =  dPy;
        }

        double CVml_Matrix::Get_Sxx() const
        {
            return m_dSxx;
        }
        double CVml_Matrix::Get_Sxy() const
        {
            return m_dSxy;
        }
        double CVml_Matrix::Get_Syx() const
        {
            return m_dSyx;
        }
        double CVml_Matrix::Get_Syy() const
        {
            return m_dSyy;
        }

        double CVml_Matrix::Get_Px() const
        {
            return m_dPx;
        }
        double CVml_Matrix::Get_Py() const
        {
            return m_dPy;
        }

        double CVml_Matrix::FromString(std::wstring &sValue)
        {
            ResetMatrix();

            int nLen = (int)sValue.length();
            if ( nLen <= 0 )
                return 0;

            // Sxx
            int nStartPos = 0;
            int nEndPos = (int)sValue.find( _T(","), nStartPos );
            if ( -1 == nEndPos )
                nEndPos = nLen;

            if ( nEndPos - nStartPos > 0 )
                {
                   std::wstring strValue = sValue.substr( nStartPos, nEndPos - nStartPos );
                   m_dSxx = XmlUtils::GetDouble(strValue);
                }

            // Sxy
            nStartPos = nEndPos + 1;
            nEndPos = (int)sValue.find( _T(","), nStartPos );
            if ( -1 == nEndPos )
                nEndPos = nLen;

            if ( nEndPos - nStartPos > 0 )
                {
                   std::wstring strValue = sValue.substr( nStartPos, nEndPos - nStartPos );
                   m_dSxy = XmlUtils::GetDouble(strValue);
                }

            // Syx
            nStartPos = nEndPos + 1;
            nEndPos = (int)sValue.find( _T(","), nStartPos );
            if ( -1 == nEndPos )
                nEndPos = nLen;

            if ( nEndPos - nStartPos > 0 )
                {
                   std::wstring strValue = sValue.substr( nStartPos, nEndPos - nStartPos );
                   m_dSyx = XmlUtils::GetDouble(strValue);
                }

            // Syy
            nStartPos = nEndPos + 1;
            nEndPos = (int)sValue.find( _T(","), nStartPos );
            if ( -1 == nEndPos )
                nEndPos = nLen;

            if ( nEndPos - nStartPos > 0 )
                {
                   std::wstring strValue = sValue.substr( nStartPos, nEndPos - nStartPos );
                   m_dSyy = XmlUtils::GetDouble(strValue);
                }

            // Px
            nStartPos = nEndPos + 1;
            nEndPos = (int)sValue.find( _T(","), nStartPos );
            if ( -1 == nEndPos )
                nEndPos = nLen;

            if ( nEndPos - nStartPos > 0 )
                {
                   std::wstring strValue = sValue.substr( nStartPos, nEndPos - nStartPos );
                   m_dPx = XmlUtils::GetDouble(strValue);
                }

            // Py
            nStartPos = nEndPos + 1;
            nEndPos = (int)sValue.find( _T(","), nStartPos );
            if ( -1 == nEndPos )
                nEndPos = nLen;

            if ( nEndPos - nStartPos > 0 )
            {
                std::wstring strValue = sValue.substr( nStartPos, nEndPos - nStartPos );
                m_dPy = XmlUtils::GetDouble(strValue);
            }

            nStartPos = nEndPos + 1;
            return 0;
        }

        std::wstring CVml_Matrix::ToString() const
        {
            return	boost::lexical_cast<std::wstring>(m_dSxx) + L"," + boost::lexical_cast<std::wstring>(m_dSxy) + L"," +
                    boost::lexical_cast<std::wstring>(m_dSyx) + L"," + boost::lexical_cast<std::wstring>(m_dSyy) + L"," +
                    boost::lexical_cast<std::wstring>(m_dPx)	+ L"," + boost::lexical_cast<std::wstring>(m_dPy);
        }
    }
}
