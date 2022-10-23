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
    template<EDocPartGallery eDefValue>
    CDocPartGallery<eDefValue>::CDocPartGallery() {}

    template<EDocPartGallery eDefValue>
    EDocPartGallery CDocPartGallery<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"any")               == sValue ) this->m_eValue = docpartgalleryAny;
        else if ( (L"autoTxt")           == sValue ) this->m_eValue = docpartgalleryAutoTxt;
        else if ( (L"bib")               == sValue ) this->m_eValue = docpartgalleryBib;
        else if ( (L"coverPg")           == sValue ) this->m_eValue = docpartgalleryCoverPg;
        else if ( (L"custAutoTxt")       == sValue ) this->m_eValue = docpartgalleryCustAutoTxt;
        else if ( (L"custBib")           == sValue ) this->m_eValue = docpartgalleryCustBib;
        else if ( (L"custCoverPg")       == sValue ) this->m_eValue = docpartgalleryCustCoverPg;
        else if ( (L"custEq")            == sValue ) this->m_eValue = docpartgalleryCustEq;
        else if ( (L"custFtrs")          == sValue ) this->m_eValue = docpartgalleryCustFtrs;
        else if ( (L"custHdrs")          == sValue ) this->m_eValue = docpartgalleryCustHdrs;
        else if ( (L"custom1")           == sValue ) this->m_eValue = docpartgalleryCustom1;
        else if ( (L"custom2")           == sValue ) this->m_eValue = docpartgalleryCustom2;
        else if ( (L"custom3")           == sValue ) this->m_eValue = docpartgalleryCustom3;
        else if ( (L"custom4")           == sValue ) this->m_eValue = docpartgalleryCustom4;
        else if ( (L"custom5")           == sValue ) this->m_eValue = docpartgalleryCustom5;
        else if ( (L"custPgNum")         == sValue ) this->m_eValue = docpartgalleryCustPgNum;
        else if ( (L"custPgNumB")        == sValue ) this->m_eValue = docpartgalleryCustPgNumB;
        else if ( (L"custPgNumMargins")  == sValue ) this->m_eValue = docpartgalleryCustPgNumMargins;
        else if ( (L"custPgNumT")        == sValue ) this->m_eValue = docpartgalleryCustPgNumT;
        else if ( (L"custQuickParts")    == sValue ) this->m_eValue = docpartgalleryCustQuickParts;
        else if ( (L"custTblOfContents") == sValue ) this->m_eValue = docpartgalleryCustTblOfContents;
        else if ( (L"custTbls")          == sValue ) this->m_eValue = docpartgalleryCustTbls;
        else if ( (L"custTxtBox")        == sValue ) this->m_eValue = docpartgalleryCustTxtBox;
        else if ( (L"custWatermarks")    == sValue ) this->m_eValue = docpartgalleryCustWatermarks;
        else if ( (L"default")           == sValue ) this->m_eValue = docpartgalleryDefault;
        else if ( (L"docParts")          == sValue ) this->m_eValue = docpartgalleryDocParts;
        else if ( (L"eq")                == sValue ) this->m_eValue = docpartgalleryEq;
        else if ( (L"ftrs")              == sValue ) this->m_eValue = docpartgalleryFtrs;
        else if ( (L"hdrs")              == sValue ) this->m_eValue = docpartgalleryHdrs;
        else if ( (L"pgNum")             == sValue ) this->m_eValue = docpartgalleryPgNum;
        else if ( (L"pgNumB")            == sValue ) this->m_eValue = docpartgalleryPgNumB;
        else if ( (L"pgNumMargins")      == sValue ) this->m_eValue = docpartgalleryPgNumMargins;
        else if ( (L"pgNumT")            == sValue ) this->m_eValue = docpartgalleryPgNumT;
        else if ( (L"placeholder")       == sValue ) this->m_eValue = docpartgalleryPlaceHolder;
        else if ( (L"tblOfContents")     == sValue ) this->m_eValue = docpartgalleryTblOfContents;
        else if ( (L"tbls")              == sValue ) this->m_eValue = docpartgalleryTbls;
        else if ( (L"txtBox")            == sValue ) this->m_eValue = docpartgalleryTxtBox;
        else if ( (L"watermarks")        == sValue ) this->m_eValue = docpartgalleryWatermarks;
        else                                          this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EDocPartGallery eDefValue>
    std::wstring CDocPartGallery<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case docpartgalleryAny               : return (L"any");
        case docpartgalleryAutoTxt           : return (L"autoTxt");
        case docpartgalleryBib               : return (L"bib");
        case docpartgalleryCoverPg           : return (L"coverPg");
        case docpartgalleryCustAutoTxt       : return (L"custAutoTxt");
        case docpartgalleryCustBib           : return (L"custBib");
        case docpartgalleryCustCoverPg       : return (L"custCoverPg");
        case docpartgalleryCustEq            : return (L"custEq");
        case docpartgalleryCustFtrs          : return (L"custFtrs");
        case docpartgalleryCustHdrs          : return (L"custHdrs");
        case docpartgalleryCustom1           : return (L"custom1");
        case docpartgalleryCustom2           : return (L"custom2");
        case docpartgalleryCustom3           : return (L"custom3");
        case docpartgalleryCustom4           : return (L"custom4");
        case docpartgalleryCustom5           : return (L"custom5");
        case docpartgalleryCustPgNum         : return (L"custPgNum");
        case docpartgalleryCustPgNumB        : return (L"custPgNumB");
        case docpartgalleryCustPgNumMargins  : return (L"custPgNumMargins");
        case docpartgalleryCustPgNumT        : return (L"custPgNumT");
        case docpartgalleryCustQuickParts    : return (L"custQuickParts");
        case docpartgalleryCustTblOfContents : return (L"custTblOfContents");
        case docpartgalleryCustTbls          : return (L"custTbls");
        case docpartgalleryCustTxtBox        : return (L"custTxtBox");
        case docpartgalleryCustWatermarks    : return (L"custWatermarks");
        case docpartgalleryDefault           : return (L"default");
        case docpartgalleryDocParts          : return (L"docParts");
        case docpartgalleryEq                : return (L"eq");
        case docpartgalleryFtrs              : return (L"ftrs");
        case docpartgalleryHdrs              : return (L"hdrs");
        case docpartgalleryPgNum             : return (L"pgNum");
        case docpartgalleryPgNumB            : return (L"pgNumB");
        case docpartgalleryPgNumMargins      : return (L"pgNumMargins");
        case docpartgalleryPgNumT            : return (L"pgNumT");
        case docpartgalleryPlaceHolder       : return (L"placeholder");
        case docpartgalleryTblOfContents     : return (L"tblOfContents");
        case docpartgalleryTbls              : return (L"tbls");
        case docpartgalleryTxtBox            : return (L"txtBox");
        case docpartgalleryWatermarks        : return (L"watermarks");
        default                              : return (L"default");
        }
    }
}
