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
    template<EMailMergeSourceType eDefValue>
    CMailMergeSourceType<eDefValue>::CMailMergeSourceType() {}

    template<EMailMergeSourceType eDefValue>
    EMailMergeSourceType CMailMergeSourceType<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"addressBook") == sValue ) this->m_eValue = mailmergesourcetypeAddressBook;
        else if ( (L"database")    == sValue ) this->m_eValue = mailmergesourcetypeDatabase;
        else if ( (L"document1")   == sValue ) this->m_eValue = mailmergesourcetypeDocument1;
        else if ( (L"document2")   == sValue ) this->m_eValue = mailmergesourcetypeDocument2;
        else if ( (L"email")       == sValue ) this->m_eValue = mailmergesourcetypeEmail;
        else if ( (L"legacy")      == sValue ) this->m_eValue = mailmergesourcetypeLegacy;
        else if ( (L"master")      == sValue ) this->m_eValue = mailmergesourcetypeMaster;
        else if ( (L"native")      == sValue ) this->m_eValue = mailmergesourcetypeNative;
        else if ( (L"text")        == sValue ) this->m_eValue = mailmergesourcetypeText;
        else                                    this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EMailMergeSourceType eDefValue>
    std::wstring CMailMergeSourceType<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case mailmergesourcetypeAddressBook : return (L"addressBook");
        case mailmergesourcetypeDatabase    : return (L"database");
        case mailmergesourcetypeDocument1   : return (L"document1");
        case mailmergesourcetypeDocument2   : return (L"document2");
        case mailmergesourcetypeEmail       : return (L"email");
        case mailmergesourcetypeLegacy      : return (L"legacy");
        case mailmergesourcetypeMaster      : return (L"master");
        case mailmergesourcetypeNative      : return (L"native");
        case mailmergesourcetypeText        : return (L"text");
        default                             : return (L"text");
        }
    }
}
