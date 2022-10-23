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

#pragma once

#include "../ComplexTypes.h"

namespace ComplexTypes
{
	namespace Word
	{
        CColor::CColor()
        {
        }
        CColor::~CColor()
        {
        }
        void CColor::FromXML(XmlUtils::CXmlNode& oNode)
        {
            XmlMacroReadAttributeBase( oNode, L"w:themeColor", m_oThemeColor );
            XmlMacroReadAttributeBase( oNode, L"w:themeShade", m_oThemeShade );
            XmlMacroReadAttributeBase( oNode, L"w:themeTint",  m_oThemeTint );
            XmlMacroReadAttributeBase( oNode, L"w:val",        m_oVal );
        }
        void CColor::FromXML(XmlUtils::CXmlLiteReader& oReader)
        {
            ReadAttributes(oReader);

            if ( !oReader.IsEmptyNode() )
                oReader.ReadTillEnd();
        }
        std::wstring CColor::ToString() const
        {
            std::wstring sResult;

            if (m_oVal.IsInit())
            {
                sResult += L"w:val=\"";
                sResult += m_oVal->ToStringNoAlpha();
                sResult += L"\" ";
            }
            if ( m_oThemeColor.IsInit() )
            {
                sResult += L"w:themeColor=\"";
                sResult += m_oThemeColor->ToString();
                sResult += L"\" ";
            }
            if (m_oThemeTint.IsInit())
            {
                sResult += L"w:themeTint=\"";
                sResult += m_oThemeTint->ToString();
                sResult += L"\" ";
            }
            if ( m_oThemeShade.IsInit() )
            {
                sResult += L"w:themeShade=\"";
                sResult += m_oThemeShade->ToString();
                sResult += L"\" ";
            }
            return sResult;
        }

        void CColor::ReadAttributes(XmlUtils::CXmlLiteReader& oReader)
        {
            WritingElement_ReadAttributes_Start( oReader )
            WritingElement_ReadAttributes_Read_if     ( oReader, L"w:themeColor", m_oThemeColor )
            WritingElement_ReadAttributes_Read_else_if( oReader, L"w:themeShade", m_oThemeShade )
            WritingElement_ReadAttributes_Read_else_if( oReader, L"w:themeTint",  m_oThemeTint )
            WritingElement_ReadAttributes_Read_else_if( oReader, L"w:val",        m_oVal )
            WritingElement_ReadAttributes_End( oReader )
        }
	}
}
