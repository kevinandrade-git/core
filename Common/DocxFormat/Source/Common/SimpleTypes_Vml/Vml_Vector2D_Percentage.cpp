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
        CVml_Vector2D_Percentage::CVml_Vector2D_Percentage()
        {
            m_dX = 0;
            m_dY = 0;
        }

        double CVml_Vector2D_Percentage::GetX() const
        {
            return m_dX;
        }
        double CVml_Vector2D_Percentage::GetY() const
        {
            return m_dY;
        }

        void CVml_Vector2D_Percentage::SetValue(double dX, double dY)
        {
            m_dX = dX;
            m_dY = dY;
        }

        double CVml_Vector2D_Percentage::FromString(std::wstring &sValue)
        {
            m_dX = 0;
            m_dY = 0;

            int nLen = (int)sValue.length();
            if ( nLen <= 0 )
                return 0;

            int nPos = (int)sValue.find( _T(",") );
            if ( -1 == nPos )
            {//only x position
                SimpleTypes::CPercentage oPerc1 = sValue;
                m_dX = oPerc1.GetValue();
                return 0;
            }

            SimpleTypes::CPercentage oPerc1 = sValue.substr( 0, nPos );
            m_dX = oPerc1.GetValue();

            SimpleTypes::CPercentage oPerc2 = sValue.substr( nPos + 1, nLen - nPos - 1 );
            m_dY = oPerc2.GetValue();

            return 0;
        }

        std::wstring CVml_Vector2D_Percentage::ToString() const
        {
            return boost::lexical_cast<std::wstring>(m_dX) + L"%," + boost::lexical_cast<std::wstring>(m_dY) + L"%";
        }
    }
}
