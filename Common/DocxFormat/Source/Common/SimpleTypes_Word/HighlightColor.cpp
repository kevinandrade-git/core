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

#include "../SimpleTypes_Word.h"

namespace SimpleTypes
{
    template<EHighlightColor eDefValue>
    CHighlightColor<eDefValue>::CHighlightColor()
    {
        m_unR = 0;
        m_unG = 0;
        m_unB = 0;
        m_unA = 255;
    }

    template<EHighlightColor eDefValue>
    CHighlightColor<eDefValue>::CHighlightColor(const CHexColor<>& color)
            : m_unR(color.Get_R()), m_unG(color.Get_G()), m_unB(color.Get_B()), m_unA(255) {}

    template<EHighlightColor eDefValue>
    EHighlightColor CHighlightColor<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"black")       == sValue )
        {
            this->m_eValue = highlightcolorBlack;

            m_unR = 0x00;
            m_unG = 0x00;
            m_unB = 0x00;
            m_unA = 0xFF;
        }
        else if ( (L"blue")        == sValue )
        {
            this->m_eValue = highlightcolorBlue;
            m_unR = 0x00;
            m_unG = 0x00;
            m_unB = 0xFF;
            m_unA = 0xFF;
        }
        else if ( (L"cyan")        == sValue )
        {
            this->m_eValue = highlightcolorCyan;
            m_unR = 0x00;
            m_unG = 0xFF;
            m_unB = 0xFF;
            m_unA = 0xFF;
        }
        else if ( (L"darkBlue")    == sValue )
        {
            this->m_eValue = highlightcolorDarkBlue;
            m_unR = 0x00;
            m_unG = 0x00;
            m_unB = 0x8B;
            m_unA = 0xFF;
        }
        else if ( (L"darkCyan")    == sValue )
        {
            this->m_eValue = highlightcolorDarkCyan;
            m_unR = 0x00;
            m_unG = 0x8B;
            m_unB = 0x8B;
            m_unA = 0xFF;
        }
        else if ( (L"darkGray")    == sValue )
        {
            this->m_eValue = highlightcolorDarkGray;
            m_unR = 0xA9;
            m_unG = 0xA9;
            m_unB = 0xA9;
            m_unA = 0xFF;
        }
        else if ( (L"darkGreen")   == sValue )
        {
            this->m_eValue = highlightcolorDarkGreen;
            m_unR = 0x00;
            m_unG = 0x64;
            m_unB = 0x00;
            m_unA = 0xFF;
        }
        else if ( (L"darkMagenta") == sValue )
        {
            this->m_eValue = highlightcolorDarkMagenta;
            m_unR = 0x80;
            m_unG = 0x00;
            m_unB = 0x80;
            m_unA = 0xFF;
        }
        else if ( (L"darkRed")     == sValue )
        {
            this->m_eValue = highlightcolorDarkRed;
            m_unR = 0x8B;
            m_unG = 0x00;
            m_unB = 0x00;
            m_unA = 0xFF;
        }
        else if ( (L"darkYellow")  == sValue )
        {
            this->m_eValue = highlightcolorDarkYellow;
            m_unR = 0x80;
            m_unG = 0x80;
            m_unB = 0x00;
            m_unA = 0xFF;
        }
        else if ( (L"green")       == sValue )
        {
            this->m_eValue = highlightcolorGreen;
            m_unR = 0x00;
            m_unG = 0xFF;
            m_unB = 0x00;
            m_unA = 0xFF;
        }
        else if ( (L"lightGray")   == sValue )
        {
            this->m_eValue = highlightcolorLightGray;
            m_unR = 0xD3;
            m_unG = 0xD3;
            m_unB = 0xD3;
            m_unA = 0xFF;
        }
        else if ( (L"magenta")     == sValue )
        {
            this->m_eValue = highlightcolorMagenta;
            m_unR = 0xFF;
            m_unG = 0x00;
            m_unB = 0xFF;
            m_unA = 0xFF;
        }
        else if ( (L"none")        == sValue )
        {
            this->m_eValue = highlightcolorNone;
            m_unR = 0x00;
            m_unG = 0x00;
            m_unB = 0x00;
            m_unA = 0x00;
        }
        else if ( (L"red")         == sValue )
        {
            this->m_eValue = highlightcolorRed;
            m_unR = 0xFF;
            m_unG = 0x00;
            m_unB = 0x00;
            m_unA = 0xFF;
        }
        else if ( (L"white")       == sValue )
        {
            this->m_eValue = highlightcolorWhite;
            m_unR = 0xFF;
            m_unG = 0xFF;
            m_unB = 0xFF;
            m_unA = 0xFF;
        }
        else if ( (L"yellow")      == sValue )
        {
            this->m_eValue = highlightcolorYellow;
            m_unR = 0xFF;
            m_unG = 0xFF;
            m_unB = 0x00;
            m_unA = 0xFF;
        }
        else
        {
            this->m_eValue = eDefValue;

            // Инициализируем цвет
            FromString( ToString() );
        }

        return this->m_eValue;
    }

    template<EHighlightColor eDefValue>
    std::wstring CHighlightColor<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case highlightcolorBlack       : return (L"black");
        case highlightcolorBlue        : return (L"blue");
        case highlightcolorCyan        : return (L"cyan");
        case highlightcolorDarkBlue    : return (L"darkBlue");
        case highlightcolorDarkCyan    : return (L"darkCyan");
        case highlightcolorDarkGray    : return (L"darkGray");
        case highlightcolorDarkGreen   : return (L"darkGreen");
        case highlightcolorDarkMagenta : return (L"darkMagenta");
        case highlightcolorDarkRed     : return (L"darkRed");
        case highlightcolorDarkYellow  : return (L"darkYellow");
        case highlightcolorGreen       : return (L"green");
        case highlightcolorLightGray   : return (L"lightGray");
        case highlightcolorMagenta     : return (L"magenta");
        case highlightcolorNone        : return (L"none");
        case highlightcolorRed         : return (L"red");
        case highlightcolorWhite       : return (L"white");
        case highlightcolorYellow      : return (L"yellow");
        default                        : return (L"none");
        }
    }

    template<EHighlightColor eDefValue>
    unsigned char CHighlightColor<eDefValue>::Get_R() const
    {
        return m_unR;
    }

    template<EHighlightColor eDefValue>
    unsigned char CHighlightColor<eDefValue>::Get_G() const
    {
        return m_unG;
    }

    template<EHighlightColor eDefValue>
    unsigned char CHighlightColor<eDefValue>::Get_B() const
    {
        return m_unB;
    }

    template<EHighlightColor eDefValue>
    unsigned char CHighlightColor<eDefValue>::Get_A() const
    {
        return m_unA;
    }
}
