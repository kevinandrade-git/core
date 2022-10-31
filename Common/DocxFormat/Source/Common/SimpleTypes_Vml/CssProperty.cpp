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

#include "../Unit.h"

namespace SimpleTypes
{
	namespace Vml
    {
        CCssProperty::CCssProperty()
        {
            m_eType = cssptUnknown;
        }

        CCssProperty::CCssProperty(std::wstring sBuffer)
        {
            Parse(sBuffer);
        }

        CCssProperty::~CCssProperty()
        {
        }

        const UCssValue & CCssProperty::get_Value() const
        {
            return m_oValue;
        }

        const ECssPropertyType & CCssProperty::get_Type() const
        {
            return m_eType;
        }

        void CCssProperty::Parse(std::wstring &sBuffer)
        {
            int nPos = (int)sBuffer.find( ':' );
            std::wstring sValue;

            if ( -1 == nPos )
            {
                m_eType = cssptUnknown;
            }
            else
            {
                std::wstring sProperty = sBuffer.substr( 0, nPos );
                sValue = sBuffer.substr( nPos + 1, sBuffer.length() - (nPos + 1) );

                sProperty = RemoveWhiteSpaces( sProperty );

                if ( sProperty.length() <= 2 )
                {
                    m_eType = cssptUnknown;
                    return;
                }

                // Чтобы избежать большого количества сравнения строк проверим для начала по первым двум символам
                int nChar1 = sProperty[ 0 ];
                int nChar2 = sProperty[ 1 ];

                switch( nChar1 )
                {
                case 'd':
                    {
                        if      ( _T("direction") == sProperty )    m_eType = cssptDirection;
                        else										m_eType = cssptUnknown;

                        break;
                    }
                case 'f':
                    {
                        switch( nChar2 )
                        {
                        case 'l':
                            {
                                if ( _T("flip") == sProperty )  m_eType = cssptFlip;
                                else                            m_eType = cssptUnknown;

                                break;
                            }
                        case 'o':
                            {
                                if      ( _T("font")         == sProperty ) m_eType = cssptFont;
                                else if ( _T("font-family")  == sProperty ) m_eType = cssptFontFamily;
                                else if ( _T("font-size")    == sProperty ) m_eType = cssptFontSize;
                                else if ( _T("font-style")   == sProperty ) m_eType = cssptFontStyle;
                                else if ( _T("font-variant") == sProperty ) m_eType = cssptFontVariant;
                                else if ( _T("font-weight")  == sProperty ) m_eType = cssptFontWeight;
                                else										 m_eType = cssptUnknown;

                                break;
                            }
                        default:
                            {
                                m_eType = cssptUnknown;
                                break;
                            }
                        }
                        break;
                    }
                case 'h':
                    {
                        if      ( _T("height") == sProperty )	m_eType = cssptHeight;
                        else                                    m_eType = cssptUnknown;

                        break;
                    }
                case 'l':
                    {
                        if      ( _T("layout-flow") == sProperty )		m_eType = cssptLayoutFlow;
                        else if ( _T("left")       == sProperty )		m_eType = cssptLeft;
                        else											m_eType = cssptUnknown;

                        break;
                    }
                case 'm':
                    {
                        switch( nChar2 )
                        {
                        case 'a':
                            {
                                if      ( _T("margin-bottom") == sProperty )	m_eType = cssptMarginBottom;
                                else if ( _T("margin-left")   == sProperty )	m_eType = cssptMarginLeft;
                                else if ( _T("margin-right")  == sProperty )	m_eType = cssptMarginRight;
                                else if ( _T("margin-top")    == sProperty )	m_eType = cssptMarginTop;
                                else											m_eType = cssptUnknown;

                                break;
                            }
                        case 's':
                            {
                                if      ( _T("mso-direction-alt")					== sProperty ) m_eType = cssptMsoDirectionAlt;
                                else if ( _T("mso-fit-shape-to-text")				== sProperty ) m_eType = cssptMsoFitShapeToText;
                                else if ( _T("mso-fit-text-to-shape")				== sProperty ) m_eType = cssptMsoFitTextToShape;
                                else if ( _T("mso-layout-flow-alt")					== sProperty ) m_eType = cssptMsoLayoutFlowAlt;
                                else if ( _T("mso-next-textbox")					== sProperty ) m_eType = cssptMsoNextTextbox;
                                else if ( _T("mso-position-horizontal")				== sProperty ) m_eType = cssptMsoPositionHorizontal;
                                else if ( _T("mso-position-horizontal-relative")	== sProperty ) m_eType = cssptMsoPositionHorizontalRelative;
                                else if ( _T("mso-position-vertical")				== sProperty ) m_eType = cssptMsoPositionVertical;
                                else if ( _T("mso-position-vertical-relative")		== sProperty ) m_eType = cssptMsoPositionVerticalRelative;
                                else if ( _T("mso-rotate")							== sProperty ) m_eType = cssptMsoRotate;
                                else if ( _T("mso-text-scale")						== sProperty ) m_eType = cssptMsoTextScale;
                                else if ( _T("mso-text-shadow")						== sProperty ) m_eType = cssptMsoTextShadow;
                                else if ( _T("mso-wrap-distance-bottom")			== sProperty ) m_eType = cssptMsoWrapDistanceBottom;
                                else if ( _T("mso-wrap-distance-left")				== sProperty ) m_eType = cssptMsoWrapDistanceLeft;
                                else if ( _T("mso-wrap-distance-right")				== sProperty ) m_eType = cssptMsoWrapDistanceRight;
                                else if ( _T("mso-wrap-distance-top")				== sProperty ) m_eType = cssptMsoWrapDistanceTop;
                                else if ( _T("mso-wrap-edited")						== sProperty ) m_eType = cssptMsoWrapEdited;
                                else if ( _T("mso-wrap-style")						== sProperty ) m_eType = cssptMsoWrapStyle;
                                else if ( _T("mso-height-percent")					== sProperty ) m_eType = csspctMsoHeightPercent;
                                else if ( _T("mso-width-percent")					== sProperty ) m_eType = csspctMsoWidthPercent;
                                else if ( _T("mso-top-percent")						== sProperty ) m_eType = csspctMsoTopPercent;
                                else if (_T( "mso-left-percent")					== sProperty ) m_eType = csspctMsoLeftPercent;

                                else															m_eType = cssptUnknown;

                                break;
                            }
                        default:
                            {
                                m_eType = cssptUnknown;
                                break;
                            }
                        }
                        break;
                    }
                case 'p':
                    {
                        if      ( _T("position") == sProperty )		m_eType = cssptPosition;
                        else										m_eType = cssptUnknown;

                        break;
                    }
                case 'r':
                    {
                        if      ( _T("rotation") == sProperty )		m_eType = cssptRotation;
                        else										m_eType = cssptUnknown;

                        break;
                    }
                case 't':
                    {
                        if      ( _T("text-decoration") == sProperty )	m_eType = cssptTextDecoration;
                        else if ( _T("top")             == sProperty )	m_eType = cssptTop;
                        else if ( _T("text-align")		== sProperty )	m_eType = cssptHTextAlign;
                        else											m_eType = cssptUnknown;

                        break;
                    }
                case 'v':
                    {
                        if      ( _T("visibility")				== sProperty )	m_eType = cssptVisibility;
                        else if ( _T("v-rotate-letters")		== sProperty )	m_eType = cssptVRotateLetters;
                        else if ( _T("v-same-letter-heights")	== sProperty )	m_eType = cssptVSameLetterHeights;
                        else if ( _T("v-text-align")			== sProperty )	m_eType = cssptVTextAlign;
                        else if ( _T("v-text-anchor")			== sProperty )	m_eType = cssptVTextAnchor;
                        else if ( _T("v-text-kern")				== sProperty )	m_eType = cssptVTextKern;
                        else if ( _T("v-text-reverse")			== sProperty )	m_eType = cssptVTextReverse;
                        else if ( _T("v-text-spacing-mode")		== sProperty )	m_eType = cssptVTextSpacingMode;
                        else if ( _T("v-text-spacing")			== sProperty )	m_eType = cssptVTextSpacing;
                        else													m_eType = cssptUnknown;

                        break;
                    }
                case 'w':
                    {
                        if ( _T("width")  == sProperty )	m_eType = cssptWidth;
                        else								m_eType = cssptUnknown;

                        break;
                    }
                case 'z':
                    {
                        if   ( _T("z-index") == sProperty )		m_eType = cssptZIndex;
                        else									m_eType = cssptUnknown;

                        break;
                    }
                default:
                    {
                        m_eType = cssptUnknown;
                        break;
                    }
                }
            }

            switch ( m_eType )
            {
            case cssptUnknown						: ReadValue_Unknown( sValue ); break;

            case cssptFlip							: ReadValue_Flip( sValue ); break;
            case cssptHeight						: ReadValue_Units( sValue ); break;
            case cssptLeft							: ReadValue_Units( sValue ); break;
            case cssptMarginBottom 					: ReadValue_Units( sValue ); break;
            case cssptMarginLeft					: ReadValue_Units( sValue ); break;
            case cssptMarginRight					: ReadValue_Units( sValue ); break;
            case cssptMarginTop						: ReadValue_Units( sValue ); break;
            case cssptMsoPositionHorizontal			: ReadValue_MsoPosHor( sValue ); break;
            case cssptMsoPositionHorizontalRelative	: ReadValue_MsoPosHorRel( sValue ); break;
            case cssptMsoPositionVertical			: ReadValue_MsoPosVer( sValue ); break;
            case cssptMsoPositionVerticalRelative	: ReadValue_MsoPosVerRel( sValue ); break;
            case cssptMsoWrapDistanceBottom			: ReadValue_Units( sValue ); break;
            case cssptMsoWrapDistanceLeft			: ReadValue_Units( sValue ); break;
            case cssptMsoWrapDistanceRight			: ReadValue_Units( sValue ); break;
            case cssptMsoWrapDistanceTop			: ReadValue_Units( sValue ); break;
            case cssptMsoWrapEdited					: ReadValue_Boolean( sValue ); break;
            case cssptMsoWrapStyle					: ReadValue_MsoWrapStyle( sValue ); break;
            case cssptPosition						: ReadValue_Position( sValue ); break;
            case cssptRotation						: ReadValue_Rotation( sValue ); break;
            case cssptTop							: ReadValue_Units( sValue ); break;
            case cssptVisibility					: ReadValue_Visibility( sValue ); break;
            case cssptWidth							: ReadValue_Units( sValue ); break;
            case cssptZIndex						: ReadValue_ZIndex( sValue ); break;

            case cssptDirection						: ReadValue_Direction( sValue ); break;
            case cssptLayoutFlow					: ReadValue_LayoutFlow( sValue ); break;
            case cssptMsoDirectionAlt				: ReadValue_DirectionAlt( sValue ); break;
            case cssptMsoFitShapeToText				: ReadValue_Boolean( sValue ); break;
            case cssptMsoFitTextToShape				: ReadValue_Boolean( sValue ); break;
            case cssptMsoLayoutFlowAlt				: ReadValue_LayoutFlowAlt( sValue ); break;
            case cssptMsoNextTextbox				: ReadValue_String( sValue ); break;
            case cssptMsoRotate						: ReadValue_MsoRotate( sValue ); break;
            case cssptMsoTextScale					: ReadValue_Units( sValue ); break;
            case cssptVTextAnchor					: ReadValue_VTextAnchor( sValue ); break;

            case cssptFont							: ReadValue_String( sValue ); break;
            case cssptFontFamily					: ReadValue_String( sValue ); break;
            case cssptFontSize						: ReadValue_Units( sValue ); break;
            case cssptFontStyle						: ReadValue_FontStyle( sValue ); break;
            case cssptFontVariant					: ReadValue_FontVariant( sValue ); break;
            case cssptFontWeight					: ReadValue_FontWeight( sValue ); break;
            case cssptMsoTextShadow					: ReadValue_Boolean( sValue ); break;
            case cssptTextDecoration				: ReadValue_TextDecoration( sValue ); break;
            case cssptVRotateLetters				: ReadValue_Boolean( sValue ); break;
            case cssptVSameLetterHeights			: ReadValue_Boolean( sValue ); break;
            case cssptVTextAlign					: ReadValue_VTextAlign( sValue ); break;
            case cssptVTextKern						: ReadValue_Boolean( sValue ); break;
            case cssptVTextReverse					: ReadValue_Boolean( sValue ); break;
            case cssptVTextSpacingMode				: ReadValue_VTextSpacingMode( sValue ); break;
            case cssptVTextSpacing					: ReadValue_Units( sValue ); break;
            case csspctMsoWidthPercent				: ReadValue_Units( sValue ); break;
            case csspctMsoHeightPercent				: ReadValue_Units( sValue ); break;
            case csspctMsoLeftPercent				: ReadValue_Units( sValue); break;
            case csspctMsoTopPercent				: ReadValue_Units( sValue); break;
            case cssptHTextAlign					: ReadValue_VTextAlign( sValue ); break;
            };
        }

        void CCssProperty::ReadValue_Unknown(std::wstring& sValue)
        {
            // Ничего не делаем
        }

        void CCssProperty::ReadValue_Flip(std::wstring& sValue)
        {
            if      ( _T("x")  == sValue ) m_oValue.eFlip = cssflipX;
            else if ( _T("y")  == sValue ) m_oValue.eFlip = cssflipY;
            else if ( _T("xy") == sValue ) m_oValue.eFlip = cssflipXY;
            else if ( _T("yx") == sValue ) m_oValue.eFlip = cssflipYX;
            else
                m_eType = cssptUnknown;
        }

        void CCssProperty::ReadValue_Units(std::wstring& sValue)
        {
            int nPos = -1;
            if ( -1 != ( nPos = (int)sValue.find(_T("auto" ) ) ) )
            {
                m_oValue.oValue.eType = cssunitstypeAuto;
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("in") ) ) )
            {
                m_oValue.oValue.eType = cssunitstypeUnits;

                   std::wstring strValue = sValue.substr( 0, nPos );
                   double dValue = XmlUtils::GetDouble(sValue);

                m_oValue.oValue.dValue = Inch_To_Pt(dValue);
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("cm") ) ) )
            {
                m_oValue.oValue.eType = cssunitstypeUnits;

                   std::wstring strValue = sValue.substr( 0, nPos );
                   double dValue = XmlUtils::GetDouble(sValue);

                   m_oValue.oValue.dValue = Cm_To_Pt(dValue);
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("mm") ) ) )
            {
                m_oValue.oValue.eType = cssunitstypeUnits;

                   std::wstring strValue = sValue.substr( 0, nPos );
                   double dValue = XmlUtils::GetDouble(sValue);

                   m_oValue.oValue.dValue = Mm_To_Pt(dValue);
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("em") ) ) )
            {
                // TO DO: Реализовать единицы 'em'
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("ex") ) ) )
            {
                // TO DO: Реализовать единицы 'ex'
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("pt") ) ) )
            {
                m_oValue.oValue.eType = cssunitstypeUnits;

                   std::wstring strValue = sValue.substr( 0, nPos );
                   double dValue = XmlUtils::GetDouble(sValue);

                   m_oValue.oValue.dValue = dValue;
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("pc") ) ) )
            {
                m_oValue.oValue.eType = cssunitstypeUnits;

                   std::wstring strValue = sValue.substr( 0, nPos );
                   double dValue = XmlUtils::GetDouble(sValue);

                   m_oValue.oValue.dValue = dValue * 12;
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("%") ) ) )
            {
                m_oValue.oValue.eType = cssunitstypePerc;

                   std::wstring strValue = sValue.substr( 0, nPos );
                   m_oValue.oValue.dValue = XmlUtils::GetDouble(strValue);
            }
            else if ( -1 != ( nPos = (int)sValue.find( _T("px") ) ) )
            {
                m_oValue.oValue.eType = cssunitstypeUnits;

                   std::wstring strValue = sValue.substr( 0, nPos );
                   double dValue = XmlUtils::GetDouble(sValue);

                   m_oValue.oValue.dValue = Px_To_Pt(dValue);
            }
            else
            {
                m_oValue.oValue.eType = cssunitstypeAbsolute;
                try
                {
                    m_oValue.oValue.dValue = XmlUtils::GetDouble(sValue);
                }
                catch(...)
                {
                    m_oValue.oValue.dValue = 0;
                }
                }
        }

        void CCssProperty::ReadValue_MsoPosHor(std::wstring& sValue)
        {
            if      ( _T("absolute") == sValue ) m_oValue.eMsoPosHor = cssmsoposhorAbsolute;
            else if ( _T("left")     == sValue ) m_oValue.eMsoPosHor = cssmsoposhorLeft;
            else if ( _T("center")   == sValue ) m_oValue.eMsoPosHor = cssmsoposhorCenter;
            else if ( _T("right")    == sValue ) m_oValue.eMsoPosHor = cssmsoposhorRight;
            else if ( _T("inside")   == sValue ) m_oValue.eMsoPosHor = cssmsoposhorInside;
            else if ( _T("outside")  == sValue ) m_oValue.eMsoPosHor = cssmsoposhorOutside;
            else
                m_oValue.eMsoPosHor = cssmsoposhorAbsolute;
        }

        void CCssProperty::ReadValue_MsoPosHorRel(std::wstring& sValue)
        {
            if      ( _T("left-margin-area")	== sValue )	m_oValue.eMsoPosHorRel = cssmsoposhorrelLeftMargin;
            else if ( _T("right-margin-area")	== sValue )	m_oValue.eMsoPosHorRel = cssmsoposhorrelRightMargin;
            else if ( _T("margin")				== sValue ) m_oValue.eMsoPosHorRel = cssmsoposhorrelMargin;
            else if ( _T("page")				== sValue ) m_oValue.eMsoPosHorRel = cssmsoposhorrelPage;
            else if ( _T("text")				== sValue ) m_oValue.eMsoPosHorRel = cssmsoposhorrelText;
            else if ( _T("char")				== sValue ) m_oValue.eMsoPosHorRel = cssmsoposhorrelChar;
            else
                m_oValue.eMsoPosHorRel = cssmsoposhorrelText;
        }

        void CCssProperty::ReadValue_MsoPosVer(std::wstring& sValue)
        {
            if      ( _T("absolute") == sValue ) m_oValue.eMsoPosVer = cssmsoposverAbsolute;
            else if ( _T("top")      == sValue ) m_oValue.eMsoPosVer = cssmsoposverTop;
            else if ( _T("center")   == sValue ) m_oValue.eMsoPosVer = cssmsoposverCenter;
            else if ( _T("bottom")   == sValue ) m_oValue.eMsoPosVer = cssmsoposverBottom;
            else if ( _T("inside")   == sValue ) m_oValue.eMsoPosVer = cssmsoposverInside;
            else if ( _T("outside")  == sValue ) m_oValue.eMsoPosVer = cssmsoposverOutside;
            else
                m_oValue.eMsoPosVer = cssmsoposverAbsolute;
        }

        void CCssProperty::ReadValue_MsoPosVerRel(std::wstring& sValue)
        {
            if      ( _T("bottom-margin-area") == sValue )	m_oValue.eMsoPosVerRel = cssmsoposverrelBottomMargin;
            else if ( _T("top-margin-area") == sValue )		m_oValue.eMsoPosVerRel = cssmsoposverrelTopMargin;
            else if ( _T("margin") == sValue )				m_oValue.eMsoPosVerRel = cssmsoposverrelMargin;
            else if ( _T("page")   == sValue )				m_oValue.eMsoPosVerRel = cssmsoposverrelPage;
            else if ( _T("text")   == sValue )				m_oValue.eMsoPosVerRel = cssmsoposverrelText;
            else if ( _T("line")   == sValue )				m_oValue.eMsoPosVerRel = cssmsoposverrelLine;
            else
                m_oValue.eMsoPosVerRel = cssmsoposverrelText;
        }

        void CCssProperty::ReadValue_Rotation(std::wstring& sValue)
        {
            m_oValue.oValue.eType = cssunitstypeAbsolute;
            m_oValue.oValue.dValue = XmlUtils::GetDouble( sValue );

            if (sValue.find(_T("fd")) != std::wstring::npos)
            {
                m_oValue.oValue.dValue /= 6000.;
            }
            else if (sValue.find(_T("f")) == sValue.length() - 1)
            {
                m_oValue.oValue.dValue /= 65536.;
            }
        }

        void CCssProperty::ReadValue_Boolean(std::wstring& sValue)
        {
            if ( _T("true") == sValue || _T("t") == sValue || _T("1") == sValue )
                m_oValue.bValue = true;
            else
                m_oValue.bValue = false;
        }

        void CCssProperty::ReadValue_MsoWrapStyle(std::wstring& sValue)
        {
            if      ( _T("square") == sValue ) m_oValue.eMsoWrapStyle = cssmsowrapstyleSqaure;
            else if ( _T("none")   == sValue ) m_oValue.eMsoWrapStyle = cssmsowrapstyleNone;
            else
                m_oValue.eMsoWrapStyle = cssmsowrapstyleSqaure;
        }

        void CCssProperty::ReadValue_Position(std::wstring& sValue)
        {
            if      ( _T("static")   == sValue ) m_oValue.ePosition = csspositionStatic;
            else if ( _T("absolute") == sValue ) m_oValue.ePosition = csspositionAbsolute;
            else if ( _T("relative") == sValue ) m_oValue.ePosition = csspositionRelative;
            else
                m_oValue.ePosition = csspositionAbsolute;
        }

        void CCssProperty::ReadValue_Visibility(std::wstring& sValue)
        {
            if      ( _T("hidden")  == sValue ) m_oValue.eVisibility = cssvisibilityHidden;
            else if ( _T("inherit") == sValue ) m_oValue.eVisibility = cssvisibilityInherit;
            else
                m_oValue.eVisibility = cssvisibilityInherit;
        }

        void CCssProperty::ReadValue_ZIndex(std::wstring& sValue)
        {
            if      ( _T("auto")  == sValue ) m_oValue.oZIndex.eType = csszindextypeAuto;
            else
            {
                m_oValue.oZIndex.eType  = csszindextypeOrder;
                m_oValue.oZIndex.nOrder = _wtoi( sValue.c_str() );

            }
        }

        void CCssProperty::ReadValue_Direction(std::wstring& sValue)
        {
            if      ( _T("ltr") == sValue ) m_oValue.eDirection = cssdirectionLTR;
            else if ( _T("rtl") == sValue ) m_oValue.eDirection = cssdirectionRTL;
            else
                m_oValue.eDirection = cssdirectionLTR;
        }

        void CCssProperty::ReadValue_LayoutFlow(std::wstring& sValue)
        {
            if      ( _T("horizontal")             == sValue ) m_oValue.eLayoutFlow = csslayoutflowHorizontal;
            else if ( _T("vertical")					== sValue ) m_oValue.eLayoutFlow = csslayoutflowVertical;
            else if ( _T("vertical-ideographic")   == sValue ) m_oValue.eLayoutFlow = csslayoutflowVerticalIdeographic;
            else if ( _T("horizontal-ideographic") == sValue ) m_oValue.eLayoutFlow = csslayoutflowHorizontalIdeographic;
            else
                m_oValue.eLayoutFlow = csslayoutflowHorizontal;
        }
        void CCssProperty::ReadValue_DirectionAlt(std::wstring& sValue)
        {
            m_oValue.eDirectionAlt = cssdirectionaltContext;
        }
        void CCssProperty::ReadValue_LayoutFlowAlt(std::wstring& sValue)
        {
            m_oValue.eLayoutFlowAlt = csslayoutflowaltBottomToTop;
        }
        void CCssProperty::ReadValue_String(std::wstring& sValue)
        {
            int nLen = (int)sValue.length();
            if ( nLen > 127 )
                return;

            ::memcpy( m_oValue.wsValue, sValue.c_str(), nLen * sizeof( wchar_t ) );
            m_oValue.wsValue[nLen] = '\0';
        }

        void CCssProperty::ReadValue_MsoRotate(std::wstring& sValue)
        {
            if      ( _T("0")   == sValue ) m_oValue.eRotate = cssmsorotate0;
            else if ( _T("90")  == sValue ) m_oValue.eRotate = cssmsorotate90;
            else if ( _T("180") == sValue ) m_oValue.eRotate = cssmsorotate180;
            else if ( _T("-90") == sValue ) m_oValue.eRotate = cssmsorotate270;
            else
                m_oValue.eRotate = cssmsorotate0;
        }

        void CCssProperty::ReadValue_VTextAnchor(std::wstring& sValue)
        {
            if      ( _T("top")					   == sValue ) m_oValue.eVTextAnchor = cssvtextanchorTop;
            else if ( _T("middle")					== sValue ) m_oValue.eVTextAnchor = cssvtextanchorMiddle;
            else if ( _T("bottom")					== sValue ) m_oValue.eVTextAnchor = cssvtextanchorBottom;
            else if ( _T("top-center")             == sValue ) m_oValue.eVTextAnchor = cssvtextanchorTopCenter;
            else if ( _T("middle-center")          == sValue ) m_oValue.eVTextAnchor = cssvtextanchorMiddleCenter;
            else if ( _T("bottom-center")          == sValue ) m_oValue.eVTextAnchor = cssvtextanchorBottomCenter;
            else if ( _T("top-baseline")           == sValue ) m_oValue.eVTextAnchor = cssvtextanchorTopBaseline;
            else if ( _T("bottom-baseline")        == sValue ) m_oValue.eVTextAnchor = cssvtextanchorBottomBaseline;
            else if ( _T("top-center-baseline")    == sValue ) m_oValue.eVTextAnchor = cssvtextanchorTopCenterBaseline;
            else if ( _T("bottom-center-baseline") == sValue ) m_oValue.eVTextAnchor = cssvtextanchorBottomCenterBaseline;
            else
                m_oValue.eVTextAnchor = cssvtextanchorTop;
        }

        void CCssProperty::ReadValue_FontStyle(std::wstring& sValue)
        {
            if      ( _T("normal")  == sValue ) m_oValue.eFontStyle = cssfontstyleNormal;
            else if ( _T("italic")  == sValue ) m_oValue.eFontStyle = cssfontstyleItalic;
            else if ( _T("oblique") == sValue ) m_oValue.eFontStyle = cssfontstyleOblique;
            else
                m_oValue.eFontStyle = cssfontstyleNormal;
        }

        void CCssProperty::ReadValue_FontVariant(std::wstring& sValue)
        {
            if      ( _T("normal")     == sValue ) m_oValue.eFontVariant = cssfontvariantNormal;
            else if ( _T("small-caps") == sValue ) m_oValue.eFontVariant = cssfontvariantSmallCaps;
            else
                m_oValue.eFontVariant = cssfontvariantNormal;
        }

        void CCssProperty::ReadValue_FontWeight(std::wstring& sValue)
        {
            if      ( _T("normal")  == sValue ) m_oValue.eFontWeight = cssfontweightNormal;
            else if ( _T("lighter") == sValue ) m_oValue.eFontWeight = cssfontweightLighter;
            else if ( _T("100")     == sValue ) m_oValue.eFontWeight = cssfontweight100;
            else if ( _T("200")     == sValue ) m_oValue.eFontWeight = cssfontweight200;
            else if ( _T("300")     == sValue ) m_oValue.eFontWeight = cssfontweight300;
            else if ( _T("400")     == sValue ) m_oValue.eFontWeight = cssfontweight400;
            else if ( _T("bold")    == sValue ) m_oValue.eFontWeight = cssfontweightBold;
            else if ( _T("bolder")  == sValue ) m_oValue.eFontWeight = cssfontweightBolder;
            else if ( _T("500")     == sValue ) m_oValue.eFontWeight = cssfontweight500;
            else if ( _T("600")     == sValue ) m_oValue.eFontWeight = cssfontweight600;
            else if ( _T("700")     == sValue ) m_oValue.eFontWeight = cssfontweight700;
            else if ( _T("800")     == sValue ) m_oValue.eFontWeight = cssfontweight800;
            else if ( _T("900")     == sValue ) m_oValue.eFontWeight = cssfontweight900;
            else
                m_oValue.eFontWeight = cssfontweightNormal;
        }

        void CCssProperty::ReadValue_TextDecoration(std::wstring& sValue)
        {
            if      ( _T("none")         == sValue ) m_oValue.eTextDecoration = csstextdecorationNone;
            else if ( _T("underline")    == sValue ) m_oValue.eTextDecoration = csstextdecorationUnderline;
            else if ( _T("overline")     == sValue ) m_oValue.eTextDecoration = csstextdecorationOverline;
            else if ( _T("line-through") == sValue ) m_oValue.eTextDecoration = csstextdecorationLineThrough;
            else if ( _T("blink")        == sValue ) m_oValue.eTextDecoration = csstextdecorationBlink;
            else
                m_oValue.eTextDecoration = csstextdecorationNone;
        }

        void CCssProperty::ReadValue_VTextAlign(std::wstring& sValue)
        {
            if      ( _T("left")            == sValue ) m_oValue.eVTextAlign = cssvtextalignLeft;
            else if ( _T("right")           == sValue ) m_oValue.eVTextAlign = cssvtextalignRight;
            else if ( _T("center")          == sValue ) m_oValue.eVTextAlign = cssvtextalignCenter;
            else if ( _T("justify")         == sValue ) m_oValue.eVTextAlign = cssvtextalignJustify;
            else if ( _T("letter-justify")  == sValue ) m_oValue.eVTextAlign = cssvtextalignLetterJustify;
            else if ( _T("stretch-justify") == sValue ) m_oValue.eVTextAlign = cssvtextalignStretchJustify;
            else
                m_oValue.eVTextAlign = cssvtextalignLeft;
        }

        void CCssProperty::ReadValue_VTextSpacingMode(std::wstring& sValue)
        {
            if      ( _T("tightening") == sValue ) m_oValue.eVTextSpacingMode = cssvtextspacingmodeTightening;
            else if ( _T("tracking")   == sValue ) m_oValue.eVTextSpacingMode = cssvtextspacingmodeTracking;
            else
                m_oValue.eVTextSpacingMode = cssvtextspacingmodeTightening;
        }
    }
}
