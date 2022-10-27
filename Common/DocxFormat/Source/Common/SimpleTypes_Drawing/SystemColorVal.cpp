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

#include "../SimpleTypes_Drawing.h"

namespace SimpleTypes
{
    //--------------------------------------------------------------------------------
    // SystemColorVal 20.1.10.58 (Part 1) (included from ASCWinAPI.h)
    //--------------------------------------------------------------------------------

    template<ESystemColorVal eDefValue>
    CSystemColorVal<eDefValue>::CSystemColorVal() {}

    template<ESystemColorVal eDefValue>
    ESystemColorVal CSystemColorVal<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = systemcolorvalWindow;
        SetRGBA( 0, 0, 0, 255 );

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case '3':
            if      ( (L"3dDkShadow")              == sValue ) { this->m_eValue = systemcolorval3dDkShadow; SetRGBASys( COLOR_3DDKSHADOW ); }
            else if ( (L"3dLight")                 == sValue ) { this->m_eValue = systemcolorval3dLight; SetRGBASys( COLOR_3DLIGHT ); }
            break;
        case 'a':
            if      ( (L"activeBorder")            == sValue ) { this->m_eValue = systemcolorvalActiveBorder; SetRGBASys( COLOR_ACTIVEBORDER ); }
            else if ( (L"activeCaption")           == sValue ) { this->m_eValue = systemcolorvalActiveCaption; SetRGBASys( COLOR_ACTIVECAPTION ); }
            else if ( (L"appWorkspace")            == sValue ) { this->m_eValue = systemcolorvalAppWorkspace; SetRGBASys( COLOR_APPWORKSPACE ); }
            break;
        case 'b':
            if      ( (L"background")              == sValue ) { this->m_eValue = systemcolorvalBackground; SetRGBASys( COLOR_BACKGROUND ); }
            else if ( (L"btnFace")                 == sValue ) { this->m_eValue = systemcolorvalBtnFace ; SetRGBASys( COLOR_BTNFACE ); }
            else if ( (L"btnHighlight")            == sValue ) { this->m_eValue = systemcolorvalBtnHighlight ; SetRGBASys( COLOR_BTNHIGHLIGHT ); }
            else if ( (L"btnShadow")               == sValue ) { this->m_eValue = systemcolorvalBtnShadow ; SetRGBASys( COLOR_BTNSHADOW ); }
            else if ( (L"btnText")                 == sValue ) { this->m_eValue = systemcolorvalBtnText ; SetRGBASys( COLOR_BTNTEXT ); }
            break;
        case 'c':
            if      ( (L"captionText")             == sValue ) { this->m_eValue = systemcolorvalCaptionText ; SetRGBASys( COLOR_CAPTIONTEXT ); }
            break;
        case 'g':
            if      ( (L"gradientActiveCaption")   == sValue ) { this->m_eValue = systemcolorvalGradientActiveCaption ; SetRGBASys( COLOR_GRADIENTACTIVECAPTION ); }
            else if ( (L"gradientInactiveCaption") == sValue ) { this->m_eValue = systemcolorvalGradientInactiveCaption ; SetRGBASys( COLOR_GRADIENTINACTIVECAPTION ); }
            else if ( (L"grayText")                == sValue ) { this->m_eValue = systemcolorvalGrayText ; SetRGBASys( COLOR_GRAYTEXT ); }
            break;
        case 'h':
            if      ( (L"highlight")               == sValue ) { this->m_eValue = systemcolorvalHighlight ; SetRGBASys( COLOR_HIGHLIGHT ); }
            else if ( (L"highlightText")           == sValue ) { this->m_eValue = systemcolorvalHighlightText ; SetRGBASys( COLOR_HIGHLIGHTTEXT ); }
            else if ( (L"hotLight")                == sValue ) { this->m_eValue = systemcolorvalHotLight ; SetRGBASys( COLOR_HOTLIGHT ); }
            break;
        case 'i':
            if      ( (L"inactiveBorder")          == sValue ) { this->m_eValue = systemcolorvalInactiveBorder ; SetRGBASys( COLOR_INACTIVEBORDER ); }
            else if ( (L"inactiveCaption")         == sValue ) { this->m_eValue = systemcolorvalInactiveCaption ; SetRGBASys( COLOR_INACTIVECAPTION ); }
            else if ( (L"inactiveCaptionText")     == sValue ) { this->m_eValue = systemcolorvalInactiveCaptionText ; SetRGBASys( COLOR_INACTIVECAPTIONTEXT ); }
            else if ( (L"infoBk")                  == sValue ) { this->m_eValue = systemcolorvalInfoBk ; SetRGBASys( COLOR_INFOBK ); }
            else if ( (L"infoText")                == sValue ) { this->m_eValue = systemcolorvalInfoText ; SetRGBASys( COLOR_INFOTEXT ); }
            break;
        case 'm':
            if      ( (L"menu")                    == sValue ) { this->m_eValue = systemcolorvalMenu ; SetRGBASys( COLOR_MENU ); }
            else if ( (L"menuBar")                 == sValue ) { this->m_eValue = systemcolorvalMenuBar ; SetRGBASys( COLOR_MENUBAR ); }
            else if ( (L"menuHighlight")           == sValue ) { this->m_eValue = systemcolorvalMenuHighlight ; SetRGBASys( COLOR_MENUHILIGHT ); }
            else if ( (L"menuText")                == sValue ) { this->m_eValue = systemcolorvalMenuText ; SetRGBASys( COLOR_MENUTEXT ); }
            break;
        case 's':
            if      ( (L"scrollBar")               == sValue ) { this->m_eValue = systemcolorvalScrollBar ; SetRGBASys( COLOR_SCROLLBAR ); }
            break;
        case 'w':
            if      ( (L"window")                  == sValue ) { this->m_eValue = systemcolorvalWindow ; SetRGBASys( COLOR_WINDOW ); }
            else if ( (L"windowFrame")             == sValue ) { this->m_eValue = systemcolorvalWindowFrame ; SetRGBASys( COLOR_WINDOWFRAME ); }
            else if ( (L"windowText")              == sValue ) { this->m_eValue = systemcolorvalWindowText ; SetRGBASys( COLOR_WINDOWTEXT ); }
            break;
        }

        return this->m_eValue;
    }

    template<ESystemColorVal eDefValue>
    std::wstring CSystemColorVal<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case systemcolorval3dDkShadow:              return (L"3dDkShadow");
        case systemcolorval3dLight:                 return (L"3dLight");
        case systemcolorvalActiveBorder:            return (L"activeBorder");
        case systemcolorvalActiveCaption:           return (L"activeCaption");
        case systemcolorvalAppWorkspace:            return (L"appWorkspace");
        case systemcolorvalBackground:              return (L"background");
        case systemcolorvalBtnFace:                 return (L"btnFace");
        case systemcolorvalBtnHighlight:            return (L"btnHighlight");
        case systemcolorvalBtnShadow:               return (L"btnShadow");
        case systemcolorvalBtnText:                 return (L"btnText");
        case systemcolorvalCaptionText:             return (L"captionText");
        case systemcolorvalGradientActiveCaption:   return (L"gradientActiveCaption");
        case systemcolorvalGradientInactiveCaption: return (L"gradientInactiveCaption");
        case systemcolorvalGrayText:                return (L"grayText");
        case systemcolorvalHighlight:               return (L"highlight");
        case systemcolorvalHighlightText:           return (L"highlightText");
        case systemcolorvalHotLight:                return (L"hotLight");
        case systemcolorvalInactiveBorder:          return (L"inactiveBorder");
        case systemcolorvalInactiveCaption:         return (L"inactiveCaption");
        case systemcolorvalInactiveCaptionText:     return (L"inactiveCaptionText");
        case systemcolorvalInfoBk:                  return (L"infoBk");
        case systemcolorvalInfoText:                return (L"infoText");
        case systemcolorvalMenu:                    return (L"menu");
        case systemcolorvalMenuBar:                 return (L"menuBar");
        case systemcolorvalMenuHighlight:           return (L"menuHighlight");
        case systemcolorvalMenuText:                return (L"menuText");
        case systemcolorvalScrollBar:               return (L"scrollBar");
        case systemcolorvalWindow:                  return (L"window");
        case systemcolorvalWindowFrame:             return (L"windowFrame");
        case systemcolorvalWindowText:              return (L"windowText");
        default :                                   return (L"window");
        }
    }

    template<ESystemColorVal eDefValue>
    unsigned char CSystemColorVal<eDefValue>::Get_R() const
    {
        return m_unR;
    }

    template<ESystemColorVal eDefValue>
    unsigned char CSystemColorVal<eDefValue>::Get_G() const
    {
        return m_unG;
    }

    template<ESystemColorVal eDefValue>
    unsigned char CSystemColorVal<eDefValue>::Get_B() const
    {
        return m_unB;
    }

    template<ESystemColorVal eDefValue>
    unsigned char CSystemColorVal<eDefValue>::Get_A() const
    {
        return m_unA;
    }

    template<ESystemColorVal eDefValue>
    void CSystemColorVal<eDefValue>::SetRGBASys(int nIndex)
    {
        DWORD dwRGB = GetSysColor(nIndex);

        m_unB = static_cast<unsigned char>(dwRGB & 0xFF);
        m_unG = static_cast<unsigned char>((dwRGB & 0xFF00)>>8);
        m_unR = static_cast<unsigned char>((dwRGB & 0xFF0000)>>16);
        m_unA = 255;
    }

    template<ESystemColorVal eDefValue>
    void CSystemColorVal<eDefValue>::SetRGBA(unsigned char unR, unsigned char unG, unsigned char unB, unsigned char unA)
    {
        m_unR = unR;
        m_unG = unG;
        m_unB = unB;
        m_unA = unA;
    }
}
