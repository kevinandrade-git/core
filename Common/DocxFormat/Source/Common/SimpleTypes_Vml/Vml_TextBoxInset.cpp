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
        CVml_TextBoxInset::CVml_TextBoxInset()
        {
            Set( 0, 0, 0, 0 );
        }

        double CVml_TextBoxInset::GetLeft(int nIndex) const
        {
            return m_dLeft;
        }
        double CVml_TextBoxInset::GetTop(int nIndex) const
        {
            return m_dTop;
        }
        double CVml_TextBoxInset::GetRight(int nIndex) const
        {
            return m_dRight;
        }
        double CVml_TextBoxInset::GetBottom(int nIndex) const
        {
            return m_dBottom;
        }

        void CVml_TextBoxInset::Set(double dL, double dT, double dR, double dB)
        {
            m_dLeft   = dL;
            m_dTop    = dT;
            m_dRight  = dR;
            m_dBottom = dB;
        }

        double CVml_TextBoxInset::FromString(std::wstring &sValue)
        {
            Set( 0, 0, 0, 0 );

            if ( sValue.empty())
                return 0;

            std::vector<std::wstring> arSplit;

            // Разделителями могут быть запятые и пробелы
            XmlUtils::replace_all(sValue, L"@", L"");
            boost::algorithm::split(arSplit, sValue, boost::algorithm::is_any_of(L", "), boost::algorithm::token_compress_on);

            if (arSplit.size() > 0)
            {
                SimpleTypes::CPoint oPt = arSplit[0];
                m_dLeft = oPt.GetValue();
            }

            if (arSplit.size() > 1)
            {
                SimpleTypes::CPoint oPt = arSplit[1];
                m_dTop = oPt.GetValue();
            }

            if (arSplit.size() > 2)
            {
                SimpleTypes::CPoint oPt = arSplit[2];
                m_dRight = oPt.GetValue();
            }

            if (arSplit.size() > 3)
            {
                SimpleTypes::CPoint oPt = arSplit[3];
                m_dBottom = oPt.GetValue();
            }

            return 0;
        }

        std::wstring CVml_TextBoxInset::ToString() const
        {
            return boost::lexical_cast<std::wstring>(m_dLeft) + L"pt," + boost::lexical_cast<std::wstring>(m_dTop) + L"pt," + boost::lexical_cast<std::wstring>(m_dRight) + L"pt,"+ boost::lexical_cast<std::wstring>(m_dBottom) + L"pt";
        }
    }
}
