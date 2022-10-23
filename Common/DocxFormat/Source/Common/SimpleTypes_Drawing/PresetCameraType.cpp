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
    template<EPresetCameraType eDefValue>
    CPresetCameraType<eDefValue>::CPresetCameraType() {}

    template<EPresetCameraType eDefValue>
    EPresetCameraType CPresetCameraType<eDefValue>::FromString(std::wstring &sValue)
    {
        this->m_eValue = eDefValue;

        if ( sValue.empty() )
            return this->m_eValue;

        wchar_t wChar = sValue[0];
        switch ( wChar )
        {
        case 'i':
            if      ( (L"isometricBottomDown")					== sValue ) this->m_eValue = presetcameratypeIsometricBottomDown;
            else if ( (L"isometricBottomUp")					== sValue ) this->m_eValue = presetcameratypeIsometricBottomUp;
            else if ( (L"isometricLeftDown")					== sValue ) this->m_eValue = presetcameratypeIsometricLeftDown;
            else if ( (L"isometricLeftUp")						== sValue ) this->m_eValue = presetcameratypeIsometricLeftUp;
            else if ( (L"isometricOffAxis1Left")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis1Left;
            else if ( (L"isometricOffAxis1Right")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis1Right;
            else if ( (L"isometricOffAxis1Top")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis1Top;
            else if ( (L"isometricOffAxis2Left")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis2Left;
            else if ( (L"isometricOffAxis2Right")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis2Right;
            else if ( (L"isometricOffAxis2Top")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis2Top;
            else if ( (L"isometricOffAxis3Bottom")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis3Bottom ;
            else if ( (L"isometricOffAxis3Left")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis3Left;
            else if ( (L"isometricOffAxis3Right")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis3Right;
            else if ( (L"isometricOffAxis4Bottom")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis4Bottom;
            else if ( (L"isometricOffAxis4Left")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis4Left;
            else if ( (L"isometricOffAxis4Right")				== sValue ) this->m_eValue = presetcameratypeIsometricOffAxis4Right;
            else if ( (L"isometricRightDown")					== sValue ) this->m_eValue = presetcameratypeIsometricRightDown;
            else if ( (L"isometricRightUp")					== sValue ) this->m_eValue = presetcameratypeIsometricRightUp;
            else if ( (L"isometricTopDown")					== sValue ) this->m_eValue = presetcameratypeIsometricTopDown;
            else if ( (L"isometricTopUp")						== sValue ) this->m_eValue = presetcameratypeIsometricTopUp;
            break;
        case 'l':
            if      ( (L"legacyObliqueBottom")					== sValue ) this->m_eValue = presetcameratypeLegacyObliqueBottom;
            else if ( (L"legacyObliqueBottomLeft")				== sValue ) this->m_eValue = presetcameratypeLegacyObliqueBottomLeft;
            else if ( (L"legacyObliqueBottomRight")			== sValue ) this->m_eValue = presetcameratypeLegacyObliqueBottomRight;
            else if ( (L"legacyObliqueFront")					== sValue ) this->m_eValue = presetcameratypeLegacyObliqueFront;
            else if ( (L"legacyObliqueLeft")					== sValue ) this->m_eValue = presetcameratypeLegacyObliqueLeft;
            else if ( (L"legacyObliqueRight")					== sValue ) this->m_eValue = presetcameratypeLegacyObliqueRight;
            else if ( (L"legacyObliqueTop")					== sValue ) this->m_eValue = presetcameratypeLegacyObliqueTop;
            else if ( (L"legacyObliqueTopLeft")				== sValue ) this->m_eValue = presetcameratypeLegacyObliqueTopLeft;
            else if ( (L"legacyObliqueTopRight")				== sValue ) this->m_eValue = presetcameratypeLegacyObliqueTopRight;
            else if ( (L"legacyPerspectiveBottom")				== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveBottom;
            else if ( (L"legacyPerspectiveBottomLeft")			== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveBottomLeft;
            else if ( (L"legacyPerspectiveBottomRight")		== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveBottomRight;
            else if ( (L"legacyPerspectiveFront")				== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveFront;
            else if ( (L"legacyPerspectiveLeft")				== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveLeft;
            else if ( (L"legacyPerspectiveRight")				== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveRight;
            else if ( (L"legacyPerspectiveTop")				== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveTop;
            else if ( (L"legacyPerspectiveTopLeft")			== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveTopLeft;
            else if ( (L"legacyPerspectiveTopRight")			== sValue ) this->m_eValue = presetcameratypeLegacyPerspectiveTopRight;
            break;
        case 'o':
            if      ( (L"obliqueBottom")						== sValue ) this->m_eValue = presetcameratypeObliqueBottom;
            else if ( (L"obliqueBottomLeft")					== sValue ) this->m_eValue = presetcameratypeObliqueBottomLeft;
            else if ( (L"obliqueBottomRight")					== sValue ) this->m_eValue = presetcameratypeObliqueBottomRight;
            else if ( (L"obliqueLeft")							== sValue ) this->m_eValue = presetcameratypeObliqueLeft;
            else if ( (L"obliqueRight")						== sValue ) this->m_eValue = presetcameratypeObliqueRight;
            else if ( (L"obliqueTop")							== sValue ) this->m_eValue = presetcameratypeObliqueTop;
            else if ( (L"obliqueTopLeft")						== sValue ) this->m_eValue = presetcameratypeObliqueTopLeft;
            else if ( (L"obliqueTopRight")						== sValue ) this->m_eValue = presetcameratypeObliqueTopRight;
            else if ( (L"orthographicFront")					== sValue ) this->m_eValue = presetcameratypeOrthographicFront;
            break;
        case 'p':
            if      ( (L"perspectiveAbove")					== sValue ) this->m_eValue = presetcameratypePerspectiveAbove;
            else if ( (L"perspectiveAboveLeftFacing")			== sValue ) this->m_eValue = presetcameratypePerspectiveAboveLeftFacing;
            else if ( (L"perspectiveAboveRightFacing")			== sValue ) this->m_eValue = presetcameratypePerspectiveAboveRightFacing;
            else if ( (L"perspectiveBelow")					== sValue ) this->m_eValue = presetcameratypePerspectiveBelow;
            else if ( (L"perspectiveContrastingLeftFacing")	== sValue ) this->m_eValue = presetcameratypePerspectiveContrastingLeftFacing;
            else if ( (L"perspectiveContrastingRightFacing")	== sValue ) this->m_eValue = presetcameratypePerspectiveContrastingRightFacing;
            else if ( (L"perspectiveFront")			        == sValue ) this->m_eValue = presetcameratypePerspectiveFront;
            else if ( (L"perspectiveHeroicExtremeLeftFacing")	== sValue ) this->m_eValue = presetcameratypePerspectiveHeroicExtremeLeftFacing;
            else if ( (L"perspectiveHeroicExtremeRightFacing") == sValue ) this->m_eValue = presetcameratypePerspectiveHeroicExtremeRightFacing;
            else if ( (L"perspectiveHeroicLeftFacing")			== sValue ) this->m_eValue = presetcameratypePerspectiveHeroicLeftFacing;
            else if ( (L"perspectiveHeroicRightFacing")		== sValue ) this->m_eValue = presetcameratypePerspectiveHeroicRightFacing;
            else if ( (L"perspectiveLeft")						== sValue ) this->m_eValue = presetcameratypePerspectiveLeft;
            else if ( (L"perspectiveRelaxed")					== sValue ) this->m_eValue = presetcameratypePerspectiveRelaxed;
            else if ( (L"perspectiveRelaxedModerately")		== sValue ) this->m_eValue = presetcameratypePerspectiveRelaxedModerately;
            else if ( (L"perspectiveRight")					== sValue ) this->m_eValue = presetcameratypePerspectiveRight;
            break;
        }

        return this->m_eValue;
    }

    template<EPresetCameraType eDefValue>
    std::wstring CPresetCameraType<eDefValue>::ToString  () const
    {
        switch(this->m_eValue)
        {
        case presetcameratypeIsometricBottomDown: return (L"isometricBottomDown"); // (Isometric Bottom Down)
        case presetcameratypeIsometricBottomUp: return (L"isometricBottomUp"); // (Isometric Bottom Up)
        case presetcameratypeIsometricLeftDown: return (L"isometricLeftDown"); // (Isometric Left Down)
        case presetcameratypeIsometricLeftUp: return (L"isometricLeftUp"); // (Isometric Left Up)
        case presetcameratypeIsometricOffAxis1Left: return (L"isometricOffAxis1Left"); // (Isometric Off Axis 1 Left)
        case presetcameratypeIsometricOffAxis1Right: return (L"isometricOffAxis1Right"); // (Isometric Off Axis 1 Right)
        case presetcameratypeIsometricOffAxis1Top: return (L"isometricOffAxis1Top"); // (Isometric Off Axis 1 Top)
        case presetcameratypeIsometricOffAxis2Left: return (L"isometricOffAxis2Left"); // (Isometric Off Axis 2 Left)
        case presetcameratypeIsometricOffAxis2Right: return (L"isometricOffAxis2Right"); // (Isometric Off Axis 2 Right
        case presetcameratypeIsometricOffAxis2Top: return (L"isometricOffAxis2Top"); // (Isometric Off Axis 2 Top)
        case presetcameratypeIsometricOffAxis3Bottom: return (L"isometricOffAxis3Bottom"); // (Isometric Off Axis 3 Bottom)
        case presetcameratypeIsometricOffAxis3Left: return (L"isometricOffAxis3Left"); // (Isometric Off Axis 3 Left)
        case presetcameratypeIsometricOffAxis3Right: return (L"isometricOffAxis3Right"); // (Isometric Off Axis 3 Right)
        case presetcameratypeIsometricOffAxis4Bottom: return (L"isometricOffAxis4Bottom"); // (Isometric Off Axis 4 Bottom)
        case presetcameratypeIsometricOffAxis4Left: return (L"isometricOffAxis4Left"); // (Isometric Off Axis 4 Left)
        case presetcameratypeIsometricOffAxis4Right: return (L"isometricOffAxis4Right"); // (Isometric Off Axis 4 Right)
        case presetcameratypeIsometricRightDown:	return (L"isometricRightDown"); // (Isometric Right Down)
        case presetcameratypeIsometricRightUp:		return (L"isometricRightUp"); // (Isometric Right Up)
        case presetcameratypeIsometricTopDown:		return (L"isometricTopDown"); // (Isometric Top Down)
        case presetcameratypeIsometricTopUp:		return (L"isometricTopUp"); // (Isometric Top Up)
        case presetcameratypeLegacyObliqueBottom:	return (L"legacyObliqueBottom"); // (Legacy Oblique Bottom)
        case presetcameratypeLegacyObliqueBottomLeft: return (L"legacyObliqueBottomLeft"); // (Legacy Oblique Bottom Left)
        case presetcameratypeLegacyObliqueBottomRight: return (L"legacyObliqueBottomRight"); // (Legacy Oblique Bottom Right)
        case presetcameratypeLegacyObliqueFront:	return (L"legacyObliqueFront"); // (Legacy Oblique Front)
        case presetcameratypeLegacyObliqueLeft:		return (L"legacyObliqueLeft"); // (Legacy Oblique Left)
        case presetcameratypeLegacyObliqueRight:	return (L"legacyObliqueRight"); // (Legacy Oblique Right)
        case presetcameratypeLegacyObliqueTop:		return (L"legacyObliqueTop"); // (Legacy Oblique Top)
        case presetcameratypeLegacyObliqueTopLeft:	return (L"legacyObliqueTopLeft"); // (Legacy Oblique Top Left)
        case presetcameratypeLegacyObliqueTopRight: return (L"legacyObliqueTopRight"); // (Legacy Oblique Top Right)
        case presetcameratypeLegacyPerspectiveBottom: return (L"legacyPerspectiveBottom"); // (Legacy Perspective Bottom)
        case presetcameratypeLegacyPerspectiveBottomLeft: return (L"legacyPerspectiveBottomLeft"); // (Legacy Perspective Bottom Left)
        case presetcameratypeLegacyPerspectiveBottomRight: return (L"legacyPerspectiveBottomRight"); // (Legacy Perspective Bottom Right)
        case presetcameratypeLegacyPerspectiveFront: return (L"legacyPerspectiveFront"); // (Legacy Perspective Front)
        case presetcameratypeLegacyPerspectiveLeft: return (L"legacyPerspectiveLeft"); // (Legacy Perspective Left)
        case presetcameratypeLegacyPerspectiveRight: return (L"legacyPerspectiveRight"); // (Legacy Perspective Right)
        case presetcameratypeLegacyPerspectiveTop: return (L"legacyPerspectiveTop"); // (Legacy Perspective Top)
        case presetcameratypeLegacyPerspectiveTopLeft: return (L"legacyPerspectiveTopLeft"); // (Legacy Perspective Top Left)
        case presetcameratypeLegacyPerspectiveTopRight: return (L"legacyPerspectiveTopRight"); // (Legacy Perspective Top Right)
        case presetcameratypeObliqueBottom:			return (L"obliqueBottom"); // (Oblique Bottom)
        case presetcameratypeObliqueBottomLeft:		return (L"obliqueBottomLeft"); // (Oblique Bottom Left)
        case presetcameratypeObliqueBottomRight:	return (L"obliqueBottomRight"); // (Oblique Bottom Right)
        case presetcameratypeObliqueLeft:			return (L"obliqueLeft"); // (Oblique Left)
        case presetcameratypeObliqueRight: return (L"obliqueRight"); // (Oblique Right)
        case presetcameratypeObliqueTop: return (L"obliqueTop"); // (Oblique Top)
        case presetcameratypeObliqueTopLeft: return (L"obliqueTopLeft"); // (Oblique Top Left)
        case presetcameratypeObliqueTopRight: return (L"obliqueTopRight"); // (Oblique Top Right)
        case presetcameratypeOrthographicFront: return (L"orthographicFront"); // (Orthographic Front)
        case presetcameratypePerspectiveAbove: return (L"perspectiveAbove"); // (Orthographic Above)
        case presetcameratypePerspectiveAboveLeftFacing: return (L"perspectiveAboveLeftFacing"); // (Perspective Above Left Facing)
        case presetcameratypePerspectiveAboveRightFacing: return (L"perspectiveAboveRightFacing"); // (Perspective Above Right Facing)
        case presetcameratypePerspectiveBelow: return (L"perspectiveBelow"); // (Perspective Below)
        case presetcameratypePerspectiveContrastingLeftFacing: return (L"perspectiveContrastingLeftFacing"); // (Perspective Contrasting Left Facing)
        case presetcameratypePerspectiveContrastingRightFacing: return (L"perspectiveContrastingRightFacing"); // (Perspective Contrasting Right Facing)
        case presetcameratypePerspectiveFront: return (L"perspectiveFront"); // (Perspective Front)
        case presetcameratypePerspectiveHeroicExtremeLeftFacing: return (L"perspectiveHeroicExtremeLeftFacing"); // (Perspective Heroic Extreme Left Facing)
        case presetcameratypePerspectiveHeroicExtremeRightFacing: return (L"perspectiveHeroicExtremeRightFacing"); // (Perspective Heroic Extreme Right Facing)
        case presetcameratypePerspectiveHeroicLeftFacing: return (L"perspectiveHeroicLeftFacing"); // (Perspective Heroic Left Facing)
        case presetcameratypePerspectiveHeroicRightFacing: return (L"perspectiveHeroicRightFacing"); // (Perspective Heroic Right Facing)
        case presetcameratypePerspectiveLeft: return (L"perspectiveLeft"); // (Perspective Left)
        case presetcameratypePerspectiveRelaxed: return (L"perspectiveRelaxed"); // (Perspective Relaxed)
        case presetcameratypePerspectiveRelaxedModerately: return (L"perspectiveRelaxedModerately"); // (Perspective Relaxed Moderately)
        case presetcameratypePerspectiveRight: return (L"perspectiveRight"); // (Perspective Right)
        default :								return (L"orthographicFront");
        }
    }
}
