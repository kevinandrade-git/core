#pragma once

#include "../DesktopEditor/common/Types.h"
#include <map>

const double c_dDpiX		= 72.0;
const double c_dDpiY		= 72.0;

const double c_dInchToMM	= 25.4;
const double c_dPixToMM		= 25.4 / 72.0;
const double c_dPtToMM		= 25.4 / 72.0;
const double c_dMMToPt		= 72.0 / 25.4;
const double c_dMMToDx	    = 72 * 20 / 25.4;
const double c_dMMToEMU	    = 36000.0;
const double c_dInchToEMU	= 914400.0;
const double c_dPtToEMU  	= 12700.0;

const double c_dSTANDART_STRING_HEIGHT_MM	    = 4.2333333333333334;
const double c_dTHE_SAME_STRING_Y_PRECISION_MM  = 0.01;
const double c_dLINE_DISTANCE_ERROR_MM          = 0.5;
const double c_dERROR_OF_RIGHT_BORDERS_MM       = 1.5;
const double c_dCENTER_POSITION_ERROR_MM        = 1.5;
const double c_dTHE_STRING_X_PRECISION_MM       = 0.5;
const double c_dERROR_FOR_TEXT_WITH_GRAPHICS_MM = 0.1;
const double c_dGRAPHICS_ERROR_MM               = 0.5;

const UINT   c_iWhiteColor = 0xFFFFFF;

const double c_dSTANDART_LEFT_INDENT_MM = 30;
const double c_dSTANDART_RIGHT_INDENT_MM = 15;
const double c_dSTANDART_FIRSTLINE_INDENT_MM = 12.5;

const double c_dRightBorderCorrectionSize[][4] =
{
//TextFontStyles (N - None, B - Bold, I - Italic)
//    N    B    I    BI
    {1.8, 0.0, 0.0, 0.0}, //8pt
    {2.7, 0.0, 0.8, 0.0}, //9pt  //1.5, 0.0, 0.8, 0.0
    {1.4, 0.0, 0.4, 0.0}, //10pt
    {0.7, 0.4, 0.0, 0.0}, //11pt
    {2.0, 0.3, 0.2, 1.5}, //12pt
    {1.6, 0.1, 0.1, 0.0}, //14pt
    {1.5, 0.3, 0.0, 0.0}, //16pt
    {3.4, 0.5, 0.0, 0.0}, //18pt
    {3.0, 0.3, 0.0, 0.0}, //20pt
    {1.5, 0.0, 0.0, 0.0}, //22pt
    {0.4, 1.0, 0.0, 0.0}, //24pt
    {0.0, 0.0, 0.0, 0.0}, //26pt
    {0.0, 0.0, 0.8, 0.0}, //28pt
    {2.8, 0.0, 0.0, 0.0}, //36pt
    {0.0, 0.0, 0.0, 0.0}, //48pt
    {4.5, 0.0, 0.6, 0.0}, //72pt
    {0.0, 0.0, 0.0, 0.0}, //>72pt
};
