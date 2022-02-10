﻿/*
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

#include "office_meta.h"

#include "../../include/xml/xmlchar.h"

#include "serialize_elements.h"

namespace cpdoccore { 
namespace odf_reader {

// office:meta
//////////////////////////////////////////////////////////////////////////////////////////////////
const wchar_t * office_meta::ns = L"office";
const wchar_t * office_meta::name = L"meta";

void office_meta::add_attributes( const xml::attributes_wc_ptr & Attributes )
{
}

void office_meta::add_child_element( xml::sax * Reader, const std::wstring & Ns, const std::wstring & Name)
{
	if (Ns==L"meta" && Name == L"generator")
	{
		CP_CREATE_ELEMENT(meta_generator_);
	}
	else if (Ns==L"meta" && Name == L"document-statistic")
	{
		CP_CREATE_ELEMENT(meta_document_statistic_);
	}
	else if (Ns==L"meta" && Name == L"user-defined")
	{
		CP_CREATE_ELEMENT(meta_user_defined_);
	}
	else
	{
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////
const wchar_t * meta_generator::ns = L"meta";
const wchar_t * meta_generator::name = L"generator";
	
void meta_generator::add_text(const std::wstring & text)
{
	content_ = text;
}

// config_item
//////////////////////////////////////////////////////////////////////////////////////////////////
const wchar_t * meta_document_statistic::ns = L"meta";
const wchar_t * meta_document_statistic::name = L"document-statistic";

void meta_document_statistic::add_attributes( const xml::attributes_wc_ptr & Attributes )
{
	CP_APPLY_ATTR(L"meta:table-count",		meta_table_count_);
	CP_APPLY_ATTR(L"meta:image-count",		meta_image_count_);
	CP_APPLY_ATTR(L"meta:object-count",		meta_object_count_);
	CP_APPLY_ATTR(L"meta:page-count",		meta_page_count_);
	CP_APPLY_ATTR(L"meta:paragraph-count",	meta_paragraph_count_);
	CP_APPLY_ATTR(L"meta:word-count",		meta_word_count_);
	CP_APPLY_ATTR(L"meta:character-count",	meta_character_count_);
}

// meta_user_defined
//////////////////////////////////////////////////////////////////////////////////////////////////
const wchar_t * meta_user_defined::ns = L"meta";
const wchar_t * meta_user_defined::name = L"user-defined";

void meta_user_defined::add_attributes( const xml::attributes_wc_ptr & Attributes )
{
    CP_APPLY_ATTR(L"meta:name", meta_name_, std::wstring(L""));
}

void meta_user_defined::add_text(const std::wstring & text)
{
    content_ = text;
}
}
}
