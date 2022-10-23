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
    template<EParameterId eDefValue>
    CParameterId<eDefValue>::CParameterId() {}

    template<EParameterId eDefValue>
    EParameterId CParameterId<eDefValue>::FromString(std::wstring &sValue)
    {
             if (L"horzAlign" == sValue) this->m_eValue = parameterId_horzAlign;
        else if (L"vertAlign" == sValue) this->m_eValue = parameterId_vertAlign;
        else if (L"chDir" == sValue) this->m_eValue = parameterId_chDir;
        else if (L"chAlign" == sValue) this->m_eValue = parameterId_chAlign;
        else if (L"secChAlign" == sValue) this->m_eValue = parameterId_secChAlign;
        else if (L"linDir" == sValue) this->m_eValue = parameterId_linDir;
        else if (L"secLinDir" == sValue) this->m_eValue = parameterId_secLinDir;
        else if (L"stElem" == sValue) this->m_eValue = parameterId_stElem;
        else if (L"bendPt" == sValue) this->m_eValue = parameterId_bendPt;
        else if (L"connRout" == sValue) this->m_eValue = parameterId_connRout;
        else if (L"begSty" == sValue) this->m_eValue = parameterId_begSty;
        else if (L"endSty" == sValue) this->m_eValue = parameterId_endSty;
        else if (L"dim" == sValue) this->m_eValue = parameterId_dim;
        else if (L"rotPath" == sValue) this->m_eValue = parameterId_rotPath;
        else if (L"ctrShpMap" == sValue) this->m_eValue = parameterId_ctrShpMap;
        else if (L"nodeHorzAlign" == sValue) this->m_eValue = parameterId_nodeHorzAlign;
        else if (L"nodeVertAlign" == sValue) this->m_eValue = parameterId_nodeVertAlign;
        else if (L"fallback" == sValue) this->m_eValue = parameterId_fallback;
        else if (L"txDir" == sValue) this->m_eValue = parameterId_txDir;
        else if (L"pyraAcctPos" == sValue) this->m_eValue = parameterId_pyraAcctPos;
        else if (L"pyraAcctTxMar" == sValue) this->m_eValue = parameterId_pyraAcctTxMar;
        else if (L"txBlDir" == sValue) this->m_eValue = parameterId_txBlDir;
        else if (L"txAnchorHorz" == sValue) this->m_eValue = parameterId_txAnchorHorz;
        else if (L"txAnchorVert" == sValue) this->m_eValue = parameterId_txAnchorVert;
        else if (L"txAnchorHorzCh" == sValue) this->m_eValue = parameterId_txAnchorHorzCh;
        else if (L"txAnchorVertCh" == sValue) this->m_eValue = parameterId_txAnchorVertCh;
        else if (L"parTxLTRAlign" == sValue) this->m_eValue = parameterId_parTxLTRAlign;
        else if (L"parTxRTLAlign" == sValue) this->m_eValue = parameterId_parTxRTLAlign;
        else if (L"shpTxLTRAlignCh" == sValue) this->m_eValue = parameterId_shpTxLTRAlignCh;
        else if (L"shpTxRTLAlignCh" == sValue) this->m_eValue = parameterId_shpTxRTLAlignCh;
        else if (L"autoTxRot" == sValue) this->m_eValue = parameterId_autoTxRot;
        else if (L"grDir" == sValue) this->m_eValue = parameterId_grDir;
        else if (L"flowDir" == sValue) this->m_eValue = parameterId_flowDir;
        else if (L"contDir" == sValue) this->m_eValue = parameterId_contDir;
        else if (L"bkpt" == sValue) this->m_eValue = parameterId_bkpt;
        else if (L"off" == sValue) this->m_eValue = parameterId_off;
        else if (L"hierAlign" == sValue) this->m_eValue = parameterId_hierAlign;
        else if (L"bkPtFixedVal" == sValue) this->m_eValue = parameterId_bkPtFixedVal;
        else if (L"stBulletLvl" == sValue) this->m_eValue = parameterId_stBulletLvl;
        else if (L"stAng" == sValue) this->m_eValue = parameterId_stAng;
        else if (L"spanAng" == sValue) this->m_eValue = parameterId_spanAng;
        else if (L"ar" == sValue) this->m_eValue = parameterId_ar;
        else if (L"lnSpPar" == sValue) this->m_eValue = parameterId_lnSpPar;
        else if (L"lnSpAfParP" == sValue) this->m_eValue = parameterId_lnSpAfParP;
        else if (L"lnSpCh" == sValue) this->m_eValue = parameterId_lnSpCh;
        else if (L"lnSpAfChP" == sValue) this->m_eValue = parameterId_lnSpAfChP;
        else if (L"rtShortDist" == sValue) this->m_eValue = parameterId_rtShortDist;
        else if (L"alignTx" == sValue) this->m_eValue = parameterId_alignTx;
        else if (L"pyraLvlNode" == sValue) this->m_eValue = parameterId_pyraLvlNode;
        else if (L"pyraAcctBkgdNode" == sValue) this->m_eValue = parameterId_pyraAcctBkgdNode;
        else if (L"pyraAcctTxNode" == sValue) this->m_eValue = parameterId_pyraAcctTxNode;
        else if (L"srcNode" == sValue) this->m_eValue = parameterId_srcNode;
        else if (L"dstNode" == sValue) this->m_eValue = parameterId_dstNode;
        else if (L"begPts" == sValue) this->m_eValue = parameterId_begPts;
        else if (L"endPts" == sValue) this->m_eValue = parameterId_endPts;

        else this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EParameterId eDefValue>
    std::wstring CParameterId<eDefValue>::ToString() const
    {
        switch (this->m_eValue)
        {
            case parameterId_horzAlign: return L"horzAlign";
            case parameterId_vertAlign: return L"vertAlign";
            case parameterId_chDir: return L"chDir";
            case parameterId_chAlign: return L"chAlign";
            case parameterId_secChAlign: return L"secChAlign";
            case parameterId_linDir: return L"linDir";
            case parameterId_secLinDir: return L"secLinDir";
            case parameterId_stElem: return L"stElem";
            case parameterId_bendPt: return L"bendPt";
            case parameterId_connRout: return L"connRout";
            case parameterId_begSty: return L"begSty";
            case parameterId_endSty: return L"endSty";
            case parameterId_dim: return L"dim";
            case parameterId_rotPath: return L"rotPath";
            case parameterId_ctrShpMap: return L"ctrShpMap";
            case parameterId_nodeHorzAlign: return L"nodeHorzAlign";
            case parameterId_nodeVertAlign: return L"nodeVertAlign";
            case parameterId_fallback: return L"fallback";
            case parameterId_txDir: return L"txDir";
            case parameterId_pyraAcctPos: return L"pyraAcctPos";
            case parameterId_pyraAcctTxMar: return L"pyraAcctTxMar";
            case parameterId_txBlDir: return L"txBlDir";
            case parameterId_txAnchorHorz: return L"txAnchorHorz";
            case parameterId_txAnchorVert: return L"txAnchorVert";
            case parameterId_txAnchorHorzCh: return L"txAnchorHorzCh";
            case parameterId_txAnchorVertCh: return L"txAnchorVertCh";
            case parameterId_parTxLTRAlign: return L"parTxLTRAlign";
            case parameterId_parTxRTLAlign: return L"parTxRTLAlign";
            case parameterId_shpTxLTRAlignCh: return L"shpTxLTRAlignCh";
            case parameterId_shpTxRTLAlignCh: return L"shpTxRTLAlignCh";
            case parameterId_autoTxRot: return L"autoTxRot";
            case parameterId_grDir: return L"grDir";
            case parameterId_flowDir: return L"flowDir";
            case parameterId_contDir: return L"contDir";
            case parameterId_bkpt: return L"bkpt";
            case parameterId_off: return L"off";
            case parameterId_hierAlign: return L"hierAlign";
            case parameterId_bkPtFixedVal: return L"bkPtFixedVal";
            case parameterId_stBulletLvl: return L"stBulletLvl";
            case parameterId_stAng: return L"stAng";
            case parameterId_spanAng: return L"spanAng";
            case parameterId_ar: return L"ar";
            case parameterId_lnSpPar: return L"lnSpPar";
            case parameterId_lnSpAfParP: return L"lnSpAfParP";
            case parameterId_lnSpCh: return L"lnSpCh";
            case parameterId_lnSpAfChP: return L"lnSpAfChP";
            case parameterId_rtShortDist: return L"rtShortDist";
            case parameterId_alignTx: return L"alignTx";
            case parameterId_pyraLvlNode: return L"pyraLvlNode";
            case parameterId_pyraAcctBkgdNode: return L"pyraAcctBkgdNode";
            case parameterId_pyraAcctTxNode: return L"pyraAcctTxNode";
            case parameterId_srcNode: return L"srcNode";
            case parameterId_dstNode: return L"dstNode";
            case parameterId_begPts: return L"begPts";
            case parameterId_endPts: return L"endPts";
            default: return L"horzAlign";
        }
    }
}
