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
        CVml_Vector2D_Position::CVml_Vector2D_Position()
        {
        }

        EVml_Vector2D_Position CVml_Vector2D_Position::GetTypeX() const
        {
            return m_eTypeX;
        }
        EVml_Vector2D_Position CVml_Vector2D_Position::GetTypeY() const
        {
            return m_eTypeY;
        }
        std::wstring CVml_Vector2D_Position::GetIdX() const
        {
            return m_sIdX;
        }
        std::wstring CVml_Vector2D_Position::GetIdY() const
        {
            return m_sIdY;
        }
        double CVml_Vector2D_Position::GetX() const
        {
            return m_dX;
        }
        double CVml_Vector2D_Position::GetY() const
        {
            return m_dY;
        }
        void CVml_Vector2D_Position::SetConstantX(double dX)
        {
            m_eTypeX = vmlvector2dposConstant;
            m_dX     = dX;
        }

        void CVml_Vector2D_Position::SetConstantY(double dY)
        {
            m_eTypeY = vmlvector2dposConstant;
            m_dY     = dY;
        }

        double CVml_Vector2D_Position::FromString(std::wstring &sValue)
        {
            int nLen = (int)sValue.length();
            if ( nLen <= 0 )
                return 0;

            int nPos = (int)sValue.find( _T(",") );
            if ( -1 == nPos )
                return 0;

            std::wstring sFirst  = sValue.substr( 0, nPos );
            std::wstring sSecond = sValue.substr( nPos + 1, nLen - nPos - 1 );

            Parse( sFirst, true );
            Parse( sSecond, false );

            return 0;
        }

        std::wstring CVml_Vector2D_Position::ToString() const
        {
            std::wstring sResult;

            switch ( m_eTypeX )
            {
            case vmlvector2dposConstant    : sResult = boost::lexical_cast<std::wstring>( m_dX ); break;
            case vmlvector2dposFormula     : sResult = _T("@") + m_sIdX; break;
            case vmlvector2dposAdjValue    : sResult = _T("#") + m_sIdX; break;
            case vmlvector2dposCenter      : sResult = _T("center"); break;
            case vmlvector2dposTopLeft     : sResult = _T("topleft"); break;
            case vmlvector2dposBottomRight : sResult = _T("bottomright"); break;
            };

            sResult += _T(",");

            switch ( m_eTypeY )
            {
            case vmlvector2dposConstant    :
                {
                    std::wstring sTemp = boost::lexical_cast<std::wstring>( m_dY );
                    sResult += sTemp;
                    break;
                }
            case vmlvector2dposFormula     : sResult += _T("@") + m_sIdY; break;
            case vmlvector2dposAdjValue    : sResult += _T("#") + m_sIdY; break;
            case vmlvector2dposCenter      : sResult += _T("center"); break;
            case vmlvector2dposTopLeft     : sResult += _T("topleft"); break;
            case vmlvector2dposBottomRight : sResult += _T("bottomright"); break;
            };

            return sResult;
        }

        void CVml_Vector2D_Position::Parse(std::wstring &sValue, bool bFirst)
        {
            EVml_Vector2D_Position eValue = vmlvector2dposConstant;
            double dValue = 0.0;
            std::wstring sId;

            XmlUtils::replace_all( sValue, _T(" "), _T("") );

            int nLen = (int)sValue.length();
            if ( nLen > 0 )
            {

                wchar_t wChar = sValue[0];
                switch ( wChar )
                {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                case '.':

                    eValue = vmlvector2dposConstant;
                    dValue = XmlUtils::GetDouble(sValue);
                    break;

                case 'c':

                    if ( _T("center") == sValue )
                        eValue = vmlvector2dposCenter;

                    break;

                case 't':

                    if ( _T("topleft") == sValue )
                        eValue = vmlvector2dposTopLeft;

                    break;

                case 'b':

                    if ( _T("bottomright") == sValue )
                        eValue = vmlvector2dposBottomRight;

                    break;

                case '@':

                    eValue = vmlvector2dposFormula;
                    sId    = sValue.substr( 1, nLen - 1 );
                    break;

                case '#':

                    eValue = vmlvector2dposAdjValue;
                    sId    = sValue.substr( 1, nLen - 1 );
                    break;
                }

            }

            if ( bFirst )
            {
                m_eTypeX = eValue;
                m_sIdX   = sId;
                m_dX     = dValue;
            }
            else
            {
                m_eTypeY = eValue;
                m_sIdY   = sId;
                m_dY     = dValue;
            }
        }
    }
}
