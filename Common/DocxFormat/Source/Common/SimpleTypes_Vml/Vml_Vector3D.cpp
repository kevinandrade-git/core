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
        CVml_Vector3D::CVml_Vector3D()
        {
            m_nX = 0;
            m_nY = 0;
            m_nZ = 0;
        }

        int CVml_Vector3D::GetX() const
        {
            return m_nX;
        }

        int CVml_Vector3D::GetY() const
        {
            return m_nY;
        }

        int CVml_Vector3D::GetZ() const
        {
            return m_nZ;
        }

        void CVml_Vector3D::SetValue(int nX, int nY, int nZ)
        {
            m_nX = nX;
            m_nY = nY;
            m_nZ = nZ;
        }

        double CVml_Vector3D::FromString(std::wstring &sValue)
        {
            m_nX = 0;
            m_nY = 0;
            m_nZ = 0;

            int nLen = (int)sValue.length();
            if ( nLen <= 0 )
                return 0;

            int nPos = (int)sValue.find( _T(",") );
            if ( -1 == nPos )
            {//only x position
                std::wstring strX = sValue;
                XmlUtils::replace_all(strX, L"@", L"");

                m_nX = strX.empty() ? 0 : _wtoi(strX.c_str() );
                return 0;
            }
            std::wstring strX = sValue.substr( 0, nPos );
            XmlUtils::replace_all(strX, L"@", L"");

            m_nX = strX.empty() ? 0 : _wtoi(strX.c_str() );

            int nPos2 = (int)sValue.find( _T(","), nPos + 1 );
            if ( -1 == nPos2 )
            {// only x, y position
                std::wstring strY = sValue.substr( nPos + 1);
                XmlUtils::replace_all(strY, L"@", L"");
                m_nY = strY.empty() ? 0 : _wtoi(strY.c_str() );
                return 0;
            }

            std::wstring strY = sValue.substr( nPos + 1, nPos2 - nPos - 1);
            std::wstring strZ = sValue.substr( nPos2 + 1, nLen - nPos2 - 1 ) ;

            XmlUtils::replace_all(strY, L"@", L"");
            XmlUtils::replace_all(strZ, L"@", L"");

            m_nY = strY.empty() ? 0 : _wtoi(strY.c_str() );
            m_nZ = strZ.empty() ? 0 : _wtoi(strZ.c_str() );

            return 0;
        }

        std::wstring CVml_Vector3D::ToString() const
        {
            return std::to_wstring(m_nX) + L"," + std::to_wstring(m_nY) + L"," + std::to_wstring(m_nZ);
        }
    }
}
