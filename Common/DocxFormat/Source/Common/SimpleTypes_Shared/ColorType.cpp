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

#include "../SimpleTypes_Shared.h"

namespace SimpleTypes
{
    template<EColorType eDefValue>
    CColorType<eDefValue>::CColorType()
    {
        SetRGB();

        std::wstringstream sstream;
        sstream << boost::wformat( L"%02x%02x%02x" ) % m_unR % m_unG % m_unB;
        m_sValue = sstream.str();
    }

    template<EColorType eDefValue>
    EColorType CColorType<eDefValue>::FromString(std::wstring& sValue)
    {
        wchar_t wsFirstChar = 0;
        if (sValue.length() > 0)
            wsFirstChar = sValue[0];

        m_sValue = sValue;
        if (wsFirstChar == _T('#'))
        {
            std::wstring sHexColor = sValue.substr(1);
            ByHexColor(sHexColor);
        }
        else
            ByColorName(sValue);

        return this->m_eValue;
    }

    template<EColorType eDefValue>
    std::wstring CColorType<eDefValue>::ToString() const
    {
        return m_sValue;
    }

    template<EColorType eDefValue>
    void CColorType<eDefValue>::SetRGB(unsigned char unR, unsigned char unG, unsigned char unB)
    {
        this->m_eValue = colortypeRGB;
        m_unR = unR;
        m_unG = unG;
        m_unB = unB;

        std::wstringstream sstream;
        sstream << boost::wformat( L"%02x%02x%02x" ) % m_unR % m_unG % m_unB;
        m_sValue = sstream.str();
    }

    template<EColorType eDefValue>
    unsigned char CColorType<eDefValue>::Get_R() const
    {
        return m_unR;
    }

    template<EColorType eDefValue>
    unsigned char CColorType<eDefValue>::Get_G() const
    {
        return m_unG;
    }

    template<EColorType eDefValue>
    unsigned char CColorType<eDefValue>::Get_B() const
    {
        return m_unB;
    }

    template<EColorType eDefValue>
    unsigned char CColorType<eDefValue>::Get_A() const
    {
        return 255;
    }

    template<EColorType eDefValue>
    void CColorType<eDefValue>::ByHexColor(std::wstring& sValue)
    {
        this->m_eValue = colortypeRGB;

        CHexColor<> hexColor;
        hexColor.FromString(sValue);

        m_unR = hexColor.Get_R();
        m_unG = hexColor.Get_G();
        m_unB = hexColor.Get_B();
    }

    template<EColorType eDefValue>
    void CColorType<eDefValue>::SetRGB()
    {
        if (this->m_eValue == colortypeRGB) return;

        switch(this->m_eValue)
        {
            case  colortypeAqua:
            {
                m_unR = 0x00;
                m_unG = 0xff;
                m_unB = 0xff;
            }break;
            case  colortypeBlack:
            {
                m_unR = 0x00;
                m_unG = 0x00;
                m_unB = 0x00;
            }break;
            case  colortypeBlue:
            {
                m_unR = 0x00;
                m_unG = 0x00;
                m_unB = 0xff;
            }break;
            case  colortypeFuchsia:
            {
                m_unR = 0xff;
                m_unG = 0x00;
                m_unB = 0xff;
            }break;
            case  colortypeGray:
            {
                m_unR = 0x80;
                m_unG = 0x80;
                m_unB = 0x80;
            }break;
            case  colortypeGreen:
            {
                m_unR = 0x00;
                m_unG = 0x80;
                m_unB = 0x00;
            }break;
            case  colortypeLime:
            {
                m_unR = 0x00;
                m_unG = 0xff;
                m_unB = 0x00;
            }break;
            case  colortypeMaroon:
            {
                m_unR = 0x80;
                m_unG = 0x00;
                m_unB = 0x00;
            }break;
            case  colortypeNavy:
            {
                m_unR = 0x00;
                m_unG = 0x00;
                m_unB = 0x80;
            }break;
            case  colortypeOlive:
            {
                m_unR = 0x80;
                m_unG = 0x80;
                m_unB = 0x00;
            }break;
            case  colortypePurple:
            {
                m_unR = 0x80;
                m_unG = 0x00;
                m_unB = 0x80;
            }break;
            case  colortypeRed:
            {
                m_unR = 0xff;
                m_unG = 0x00;
                m_unB = 0x00;
            }break;
            case  colortypeSilver:
            {
                m_unR = 0xc0;
                m_unG = 0xc0;
                m_unB = 0xc0;
            }break;
            case  colortypeTeal:
            {
                m_unR = 0x00;
                m_unG = 0x80;
                m_unB = 0x80;
            }break;
            case  colortypeWhite:
            {
                m_unR = 0xff;
                m_unG = 0xff;
                m_unB = 0xff;
            }break;
            case  colortypeYellow:
            {
                m_unR = 0xff;
                m_unG = 0xff;
                m_unB = 0;
            }break;
            case  colortypeNone:
            default:
            {
                m_unR = 0;
                m_unG = 0;
                m_unB = 0;
            }break;
        }
    }

    template<EColorType eDefValue>
    void CColorType<eDefValue>::ByColorName(std::wstring& sValue)
    {
        this->m_eValue = colortypeNone;

        if      (std::wstring::npos != sValue.find(L"aqua"))	this->m_eValue = colortypeAqua;
        else if (std::wstring::npos != sValue.find(L"black"))	this->m_eValue = colortypeBlack;
        else if (std::wstring::npos != sValue.find(L"blue"))	this->m_eValue = colortypeBlue;
        else if (std::wstring::npos != sValue.find(L"fuchsia"))	this->m_eValue = colortypeFuchsia;
        else if (std::wstring::npos != sValue.find(L"gray"))	this->m_eValue = colortypeGray;
        else if (std::wstring::npos != sValue.find(L"green"))	this->m_eValue = colortypeGreen;
        else if (std::wstring::npos != sValue.find(L"lime"))	this->m_eValue = colortypeLime;
        else if (std::wstring::npos != sValue.find(L"maroon"))	this->m_eValue = colortypeMaroon;
        else if (std::wstring::npos != sValue.find(L"navy"))	this->m_eValue = colortypeNavy;
        else if (std::wstring::npos != sValue.find(L"olive"))	this->m_eValue = colortypeOlive;
        else if (std::wstring::npos != sValue.find(L"purple"))	this->m_eValue = colortypePurple;
        else if (std::wstring::npos != sValue.find(L"red"))		this->m_eValue = colortypeRed;
        else if (std::wstring::npos != sValue.find(L"silver"))	this->m_eValue = colortypeSilver;
        else if (std::wstring::npos != sValue.find(L"teal"))	this->m_eValue = colortypeTeal;
        else if (std::wstring::npos != sValue.find(L"white"))	this->m_eValue = colortypeWhite;
        else if (std::wstring::npos != sValue.find(L"yellow"))	this->m_eValue = colortypeYellow;
        else if (std::wstring::npos != sValue.find(L"[") && std::wstring::npos != sValue.find(L"]"))
        {
            size_t p1 = sValue.find(L"[");
            size_t p2 = sValue.find(L"]");
            std::wstring sIndex = p2 > p1 ? sValue.substr(p1 + 1, p2 - p1 - 1) : L"";

            if (!sIndex.empty())
            {
                int index = XmlUtils::GetInteger(sIndex);
                int nRGB = 0;
                if (index < 64)
                {
                    nRGB = shemeDefaultColor[index];
                }
                else if (index > 64 && index < 92)
                {
                    nRGB = controlPanelColors1[index - 65];
                }
                m_unR = static_cast<unsigned char>((nRGB >> 16) & 0xff);
                m_unG = static_cast<unsigned char>((nRGB >> 8) & 0xff);
                m_unB = static_cast<unsigned char>(nRGB & 0xff);
                this->m_eValue = colortypeRGB;
            }
        }

        SetRGB();
    }
}
