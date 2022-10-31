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
        CVml_1_65536::CVml_1_65536()
        {
            m_dValue = 0;
        }

        double CVml_1_65536::GetValue() const
        {
            return m_dValue;
        }

        void CVml_1_65536::SetValue(double dValue)
        {
                m_dValue = (std::max)( 0.0, (std::min)( 1.0, dValue) );
        }

        void CVml_1_65536::SetValue(int nValue)
        {
                m_dValue = (std::max)( 0.0, (std::min)( 65536.0, (double) nValue) ) / 65536.0;
        }

        double CVml_1_65536::FromString(std::wstring &sValue)
        {
            int nLen = (int)sValue.length();
            if ( nLen <= 0 )
                return 0;

            bool bFraction = ( 'f' == sValue[ nLen - 1 ] );

            if ( bFraction )
            {
                   std::wstring strValue = sValue.substr( 0, nLen - 1 );
                   int nValue = strValue.empty() ? 0 : _wtoi(strValue.c_str() );

                   SetValue( nValue );
            }
            else
            {
                   double dValue = XmlUtils::GetDouble( sValue);
                SetValue( dValue );
            }

            return m_dValue;
        }

        std::wstring CVml_1_65536::ToString  () const
        {
            std::wstring sResult = boost::lexical_cast<std::wstring>( m_dValue );

            return sResult;
        }
    }
}
