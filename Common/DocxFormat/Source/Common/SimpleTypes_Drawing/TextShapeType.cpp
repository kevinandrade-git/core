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
    // TextShapeType 20.1.10.76 (Part 1)
    //--------------------------------------------------------------------------------

    template<ETextShapeType eDefValue>
    CTextShapeType<eDefValue>::CTextShapeType() {}

    template<ETextShapeType eDefValue>
    ETextShapeType CTextShapeType<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.length() <= 5 )
            return this->m_eValue;

        wchar_t wChar = sValue[4];
        switch ( wChar )
        {
        case 'A':

            if      ( (L"textArchDown")		== sValue ) this->m_eValue = textshapetypeTextArchDown;
            else if ( (L"textArchDownPour")	== sValue ) this->m_eValue = textshapetypeTextArchDownPour;
            else if ( (L"textArchUp")			== sValue ) this->m_eValue = textshapetypeTextArchUp;
            else if ( (L"textArchUpPour")		== sValue ) this->m_eValue = textshapetypeTextArchUpPour;
            break;

        case 'B':

            if      ( (L"textButton")			== sValue ) this->m_eValue = textshapetypeTextButton;
            else if ( (L"textButtonPour")		== sValue ) this->m_eValue = textshapetypeTextButtonPour;
            break;

        case 'C':

            if      ( (L"textCanDown")			== sValue ) this->m_eValue = textshapetypeTextCanDown;
            else if ( (L"textCanUp")			== sValue ) this->m_eValue = textshapetypeTextCanUp;
            else if ( (L"textCascadeDown")		== sValue ) this->m_eValue = textshapetypeTextCascadeDown;
            else if ( (L"textCascadeUp")		== sValue ) this->m_eValue = textshapetypeTextCascadeUp;
            else if ( (L"textChevron")			== sValue ) this->m_eValue = textshapetypeTextChevron;
            else if ( (L"textChevronInverted")	== sValue ) this->m_eValue = textshapetypeTextChevronInverted;
            else if ( (L"textCircle")			== sValue ) this->m_eValue = textshapetypeTextCircle;
            else if ( (L"textCirclePour")		== sValue ) this->m_eValue = textshapetypeTextCirclePour;
            else if ( (L"textCurveDown")		== sValue ) this->m_eValue = textshapetypeTextCurveDown;
            else if ( (L"textCurveUp")			== sValue ) this->m_eValue = textshapetypeTextCurveUp;
            break;

        case 'D':
            if      ( (L"textDeflate")			== sValue ) this->m_eValue = textshapetypeTextDeflate;
            else if ( (L"textDeflateBottom")	== sValue ) this->m_eValue = textshapetypeTextDeflateBottom;
            else if ( (L"textDeflateInflate")	== sValue ) this->m_eValue = textshapetypeTextDeflateInflate;
            else if ( (L"textDeflateInflateDeflate") == sValue ) this->m_eValue = textshapetypeTextDeflateInflateDeflate;
            else if ( (L"textDeflateTop")		== sValue ) this->m_eValue = textshapetypeTextDeflateTop;
            else if ( (L"textDoubleWave1")		== sValue ) this->m_eValue = textshapetypeTextDoubleWave1;
            break;

        case 'F':
            if      ( (L"textFadeDown")		== sValue ) this->m_eValue = textshapetypeTextFadeDown;
            else if ( (L"textFadeLeft")		== sValue ) this->m_eValue = textshapetypeTextFadeLeft;
            else if ( (L"textFadeRight")		== sValue ) this->m_eValue = textshapetypeTextFadeRight;
            else if ( (L"textFadeUp")			== sValue ) this->m_eValue = textshapetypeTextFadeUp;
            break;

        case 'I':

            if      ( (L"textInflate")			== sValue ) this->m_eValue = textshapetypeTextInflate;
            else if ( (L"textInflateBottom")	== sValue ) this->m_eValue = textshapetypeTextInflateBottom;
            else if ( (L"textInflateTop")		== sValue ) this->m_eValue = textshapetypeTextInflateTop;
            break;

        case 'N':
            if      ( (L"textNoShape")			== sValue ) this->m_eValue = textshapetypeTextNoShape;
            break;

        case 'P':

            if      ( (L"textPlain")			== sValue ) this->m_eValue = textshapetypeTextPlain;
            break;

        case 'R':

            if		( (L"textRingInside")		== sValue ) this->m_eValue = textshapetypeTextRingInside;
            else if ( (L"textRingOutside")		== sValue ) this->m_eValue = textshapetypeTextRingOutside;
            break;

        case 'S':

            if      ( (L"textSlantDown")		== sValue ) this->m_eValue = textshapetypeTextSlantDown;
            else if ( (L"textSlantUp")			== sValue ) this->m_eValue = textshapetypeTextSlantUp;
            else if ( (L"textStop")			== sValue ) this->m_eValue = textshapetypeTextStop;
            break;

        case 'T':

            if      ( (L"textTriangle")		== sValue ) this->m_eValue = textshapetypeTextTriangle;
            else if ( (L"textTriangleInverted")== sValue ) this->m_eValue = textshapetypeTextTriangleInverted;
            break;

        case 'W':

            if      ( (L"textWave1")			== sValue ) this->m_eValue = textshapetypeTextWave1;
            else if ( (L"textWave2")			== sValue ) this->m_eValue = textshapetypeTextWave2;
            else if ( (L"textWave4")			== sValue ) this->m_eValue = textshapetypeTextWave4;
            break;
        }

        return this->m_eValue;
    }

    template<ETextShapeType eDefValue>
    std::wstring CTextShapeType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case textshapetypeTextArchDown:				return (L"textArchDown");
        case textshapetypeTextArchDownPour:			return (L"textArchDownPour");
        case textshapetypeTextArchUp:				return (L"textArchUp");
        case textshapetypeTextArchUpPour:			return (L"textArchUpPour");
        case textshapetypeTextButton:				return (L"textButton");
        case textshapetypeTextButtonPour:			return (L"textButtonPour");
        case textshapetypeTextCanDown:				return (L"textCanDown");
        case textshapetypeTextCanUp:				return (L"textCanUp");
        case textshapetypeTextCascadeDown:			return (L"textCascadeDown");
        case textshapetypeTextCascadeUp:			return (L"textCascadeUp");
        case textshapetypeTextChevron:				return (L"textChevron");
        case textshapetypeTextChevronInverted:		return (L"textChevronInverted");
        case textshapetypeTextCircle:				return (L"textCircle");
        case textshapetypeTextCirclePour:			return (L"textCirclePour");
        case textshapetypeTextCurveDown:			return (L"textCurveDown");
        case textshapetypeTextCurveUp:				return (L"textCurveUp");
        case textshapetypeTextDeflate:				return (L"textDeflate");
        case textshapetypeTextDeflateBottom:		return (L"textDeflateBottom");
        case textshapetypeTextDeflateInflate:		return (L"textDeflateInflate");
        case textshapetypeTextDeflateInflateDeflate:return (L"textDeflateInflateDeflate");
        case textshapetypeTextDeflateTop:			return (L"textDeflateTop");
        case textshapetypeTextDoubleWave1:			return (L"textDoubleWave1");
        case textshapetypeTextFadeDown:				return (L"textFadeDown");
        case textshapetypeTextFadeLeft:				return (L"textFadeLeft");
        case textshapetypeTextFadeRight:			return (L"textFadeRight");
        case textshapetypeTextFadeUp:				return (L"textFadeUp");
        case textshapetypeTextInflate:				return (L"textInflate");
        case textshapetypeTextInflateBottom:		return (L"textInflateBottom");
        case textshapetypeTextInflateTop:			return (L"textInflateTop");
        case textshapetypeTextNoShape:				return (L"textNoShape");
        case textshapetypeTextPlain:				return (L"textPlain");
        case textshapetypeTextRingInside:			return (L"textRingInside");
        case textshapetypeTextRingOutside:			return (L"textRingOutside");
        case textshapetypeTextSlantDown:			return (L"textSlantDown");
        case textshapetypeTextSlantUp:				return (L"textSlantUp");
        case textshapetypeTextStop:					return (L"textStop");
        case textshapetypeTextTriangle:				return (L"textTriangle");
        case textshapetypeTextTriangleInverted:		return (L"textTriangleInverted");
        case textshapetypeTextWave1:				return (L"textWave1");
        case textshapetypeTextWave2:				return (L"textWave2");
        case textshapetypeTextWave4:				return (L"textWave4");
        default :									return (L"textPlain");
        }
    }
}
