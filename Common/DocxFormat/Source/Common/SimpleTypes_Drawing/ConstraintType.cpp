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
    template<EConstraintType eDefValue>
    CConstraintType<eDefValue>::CConstraintType() {}

    template<EConstraintType eDefValue>
    EConstraintType CConstraintType<eDefValue>::FromString(std::wstring &sValue)
    {
             if (L"none" == sValue) this->m_eValue = constraintType_none;
        else if (L"alignOff" == sValue) this->m_eValue = constraintType_alignOff;
        else if (L"begMarg" == sValue) this->m_eValue = constraintType_begMarg;
        else if (L"bendDist" == sValue) this->m_eValue = constraintType_bendDist;
        else if (L"begPad" == sValue) this->m_eValue = constraintType_begPad;
        else if (L"b" == sValue) this->m_eValue = constraintType_b;
        else if (L"bMarg" == sValue) this->m_eValue = constraintType_bMarg;
        else if (L"bOff" == sValue) this->m_eValue = constraintType_bOff;
        else if (L"ctrX" == sValue) this->m_eValue = constraintType_ctrX;
        else if (L"ctrXOff" == sValue) this->m_eValue = constraintType_ctrXOff;
        else if (L"ctrY" == sValue) this->m_eValue = constraintType_ctrY;
        else if (L"ctrYOff" == sValue) this->m_eValue = constraintType_ctrYOff;
        else if (L"connDist" == sValue) this->m_eValue = constraintType_connDist;
        else if (L"diam" == sValue) this->m_eValue = constraintType_diam;
        else if (L"endMarg" == sValue) this->m_eValue = constraintType_endMarg;
        else if (L"endPad" == sValue) this->m_eValue = constraintType_endPad;
        else if (L"h" == sValue) this->m_eValue = constraintType_h;
        else if (L"hArH" == sValue) this->m_eValue = constraintType_hArH;
        else if (L"l" == sValue) this->m_eValue = constraintType_l;
        else if (L"lMarg" == sValue) this->m_eValue = constraintType_lMarg;
        else if (L"lOff" == sValue) this->m_eValue = constraintType_lOff;
        else if (L"r" == sValue) this->m_eValue = constraintType_r;
        else if (L"rMarg" == sValue) this->m_eValue = constraintType_rMarg;
        else if (L"rOff" == sValue) this->m_eValue = constraintType_rOff;
        else if (L"primFontSz" == sValue) this->m_eValue = constraintType_primFontSz;
        else if (L"pyraAcctRatio" == sValue) this->m_eValue = constraintType_pyraAcctRatio;
        else if (L"secFontSz" == sValue) this->m_eValue = constraintType_secFontSz;
        else if (L"sibSp" == sValue) this->m_eValue = constraintType_sibSp;
        else if (L"secSibSp" == sValue) this->m_eValue = constraintType_secSibSp;
        else if (L"sp" == sValue) this->m_eValue = constraintType_sp;
        else if (L"stemThick" == sValue) this->m_eValue = sconstraintType_temThick;
        else if (L"t" == sValue) this->m_eValue = constraintType_t;
        else if (L"tMarg" == sValue) this->m_eValue = constraintType_tMarg;
        else if (L"tOff" == sValue) this->m_eValue = constraintType_tOff;
        else if (L"userA" == sValue) this->m_eValue = constraintType_userA;
        else if (L"userB" == sValue) this->m_eValue = constraintType_userB;
        else if (L"userC" == sValue) this->m_eValue = constraintType_userC;
        else if (L"userD" == sValue) this->m_eValue = constraintType_userD;
        else if (L"userE" == sValue) this->m_eValue = constraintType_userE;
        else if (L"userF" == sValue) this->m_eValue = constraintType_userF;
        else if (L"userG" == sValue) this->m_eValue = constraintType_userG;
        else if (L"userH" == sValue) this->m_eValue = constraintType_userH;
        else if (L"userI" == sValue) this->m_eValue = constraintType_userI;
        else if (L"userJ" == sValue) this->m_eValue = constraintType_userJ;
        else if (L"userK" == sValue) this->m_eValue = constraintType_userK;
        else if (L"userL" == sValue) this->m_eValue = constraintType_userL;
        else if (L"userM" == sValue) this->m_eValue = constraintType_userM;
        else if (L"userN" == sValue) this->m_eValue = constraintType_userN;
        else if (L"userO" == sValue) this->m_eValue = constraintType_userO;
        else if (L"userP" == sValue) this->m_eValue = constraintType_userP;
        else if (L"userQ" == sValue) this->m_eValue = constraintType_userQ;
        else if (L"userR" == sValue) this->m_eValue = constraintType_userR;
        else if (L"userS" == sValue) this->m_eValue = constraintType_userS;
        else if (L"userT" == sValue) this->m_eValue = constraintType_userT;
        else if (L"userU" == sValue) this->m_eValue = constraintType_userU;
        else if (L"userV" == sValue) this->m_eValue = constraintType_userV;
        else if (L"userW" == sValue) this->m_eValue = constraintType_userW;
        else if (L"userX" == sValue) this->m_eValue = constraintType_userX;
        else if (L"userY" == sValue) this->m_eValue = constraintType_userY;
        else if (L"userZ" == sValue) this->m_eValue = constraintType_userZ;
        else if (L"w" == sValue) this->m_eValue = constraintType_w;
        else if (L"wArH" == sValue) this->m_eValue = constraintType_wArH;
        else if (L"wOff" == sValue) this->m_eValue = constraintType_wOff;
        else this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EConstraintType eDefValue>
    std::wstring CConstraintType<eDefValue>::ToString() const
    {
        switch (this->m_eValue)
        {
        case constraintType_none: return L"none";
        case constraintType_alignOff: return L"alignOff";
        case constraintType_begMarg: return L"begMarg";
        case constraintType_bendDist: return L"bendDist";
        case constraintType_begPad: return L"begPad";
        case constraintType_b: return L"b";
        case constraintType_bMarg: return L"bMarg";
        case constraintType_bOff: return L"bOff";
        case constraintType_ctrX: return L"ctrX";
        case constraintType_ctrXOff: return L"ctrXOff";
        case constraintType_ctrY: return L"ctrY";
        case constraintType_ctrYOff: return L"ctrYOff";
        case constraintType_connDist: return L"connDist";
        case constraintType_diam: return L"diam";
        case constraintType_endMarg: return L"endMarg";
        case constraintType_endPad: return L"endPad";
        case constraintType_h: return L"h";
        case constraintType_hArH: return L"hArH";
        case constraintType_l: return L"l";
        case constraintType_lMarg: return L"lMarg";
        case constraintType_lOff: return L"lOff";
        case constraintType_r: return L"r";
        case constraintType_rMarg: return L"rMarg";
        case constraintType_rOff: return L"rOff";
        case constraintType_primFontSz: return L"primFontSz";
        case constraintType_pyraAcctRatio: return L"pyraAcctRatio";
        case constraintType_secFontSz: return L"secFontSz";
        case constraintType_sibSp: return L"sibSp";
        case constraintType_secSibSp: return L"secSibSp";
        case constraintType_sp: return L"sp";
        case sconstraintType_temThick: return L"stemThick";
        case constraintType_t: return L"t";
        case constraintType_tMarg: return L"tMarg";
        case constraintType_tOff: return L"tOff";
        case constraintType_userA: return L"userA";
        case constraintType_userB: return L"userB";
        case constraintType_userC: return L"userC";
        case constraintType_userD: return L"userD";
        case constraintType_userE: return L"userE";
        case constraintType_userF: return L"userF";
        case constraintType_userG: return L"userG";
        case constraintType_userH: return L"userH";
        case constraintType_userI: return L"userI";
        case constraintType_userJ: return L"userJ";
        case constraintType_userK: return L"userK";
        case constraintType_userL: return L"userL";
        case constraintType_userM: return L"userM";
        case constraintType_userN: return L"userN";
        case constraintType_userO: return L"userO";
        case constraintType_userP: return L"userP";
        case constraintType_userQ: return L"userQ";
        case constraintType_userR: return L"userR";
        case constraintType_userS: return L"userS";
        case constraintType_userT: return L"userT";
        case constraintType_userU: return L"userU";
        case constraintType_userV: return L"userV";
        case constraintType_userW: return L"userW";
        case constraintType_userX: return L"userX";
        case constraintType_userY: return L"userY";
        case constraintType_userZ: return L"userZ";
        case constraintType_w: return L"w";
        case constraintType_wArH: return L"wArH";
        case constraintType_wOff: return L"wOff";
        default: return L"none";
        }
    }
}
