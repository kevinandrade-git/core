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

#include "../ComplexTypes.h"

namespace ComplexTypes
{
    namespace Word
    {
        CFonts::CFonts()
        {
        }
        CFonts::~CFonts()
        {
        }

        void CFonts::FromXML(XmlUtils::CXmlNode& oNode)
        {
            XmlMacroReadAttributeBase(oNode, L"w:ascii", m_sAscii);
            XmlMacroReadAttributeBase(oNode, L"w:asciiTheme", m_oAsciiTheme);
            XmlMacroReadAttributeBase(oNode, L"w:cs", m_sCs);
            XmlMacroReadAttributeBase(oNode, L"w:cstheme", m_oCsTheme);
            XmlMacroReadAttributeBase(oNode, L"w:eastAsia", m_sEastAsia);
            XmlMacroReadAttributeBase(oNode, L"w:eastAsiaTheme", m_oEastAsiaTheme);
            XmlMacroReadAttributeBase(oNode, L"w:hAnsi", m_sHAnsi);
            XmlMacroReadAttributeBase(oNode, L"w:hAnsiTheme", m_oHAnsiTheme);
            XmlMacroReadAttributeBase(oNode, L"w:hint", m_oHint);
        }
        void CFonts::FromXML(XmlUtils::CXmlLiteReader& oReader)
        {
            ReadAttributes(oReader);

            if (!oReader.IsEmptyNode())
                oReader.ReadTillEnd();
        }
        std::wstring CFonts::ToString() const
        {
            std::wstring sResult;

            if (m_oHint.IsInit())
            {
                sResult += L"w:hint=\"";
                sResult += m_oHint->ToString();
                sResult += L"\" ";
            }
            if (m_sAscii.IsInit())
            {
                sResult += L"w:ascii=\"";
                sResult += m_sAscii.get2();
                sResult += L"\" ";
            }
            if (m_sHAnsi.IsInit())
            {
                sResult += L"w:hAnsi=\"";
                sResult += m_sHAnsi.get2();
                sResult += L"\" ";
            }
            if (m_sEastAsia.IsInit())
            {
                sResult += L"w:eastAsia=\"";
                sResult += m_sEastAsia.get2();
                sResult += L"\" ";
            }
            if (m_sCs.IsInit())
            {
                sResult += L"w:cs=\"";
                sResult += m_sCs.get2();
                sResult += L"\" ";
            }
            if (m_oAsciiTheme.IsInit())
            {
                sResult += L"w:asciiTheme=\"";
                sResult += m_oAsciiTheme->ToString();
                sResult += L"\" ";
            }
            if (m_oHAnsiTheme.IsInit())
            {
                sResult += L"w:hAnsiTheme=\"";
                sResult += m_oHAnsiTheme->ToString();
                sResult += L"\" ";
            }
            if (m_oEastAsiaTheme.IsInit())
            {
                sResult += L"w:eastAsiaTheme=\"";
                sResult += m_oEastAsiaTheme->ToString();
                sResult += L"\" ";
            }
            if (m_oCsTheme.IsInit())
            {
                sResult += L"w:cstheme=\"";
                sResult += m_oCsTheme->ToString();
                sResult += L"\" ";
            }
            return sResult;
        }

        void CFonts::ReadAttributes(XmlUtils::CXmlLiteReader& oReader)
        {
            WritingElement_ReadAttributes_Start(oReader)
                WritingElement_ReadAttributes_Read_if(oReader, L"w:ascii", m_sAscii)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:asciiTheme", m_oAsciiTheme)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:cs", m_sCs)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:cstheme", m_oCsTheme)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:eastAsia", m_sEastAsia)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:eastAsiaTheme", m_oEastAsiaTheme)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:hAnsi", m_sHAnsi)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:hAnsiTheme", m_oHAnsiTheme)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:hint", m_oHint)
                //2003
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:h-ansi", m_oHint)
                WritingElement_ReadAttributes_Read_else_if(oReader, L"w:fareast", m_sEastAsia)
                WritingElement_ReadAttributes_End(oReader)
        }
    }
}
