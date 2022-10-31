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

#include "../SimpleTypes_Vml.h"

namespace SimpleTypes
{
    namespace Vml
    {
        CCssStyle::CCssStyle()
        {
        }

        CCssStyle::~CCssStyle()
        {
            Clear();
        }

        void CCssStyle::Clear()
        {
            m_arrProperties.clear();
        }

        std::wstring CCssStyle::FromString(std::wstring &sValue)
        {
            Clear();

            m_sCss = sValue;
            ParseProperties();

            return m_sCss;
        }

        std::wstring CCssStyle::ToString() const
        {
            return m_sCss;
        }

        void CCssStyle::mergeFrom(CCssStyle* parent)
        {
            if (!parent) return;

            for (std::map<ECssPropertyType, size_t>::iterator it = parent->m_mapProperties.begin(); it != parent->m_mapProperties.end(); ++it)
            {
                std::map<ECssPropertyType, size_t>::iterator pFind = m_mapProperties.find(it->first);
                if (pFind == m_mapProperties.end())
                {
                    m_arrProperties.push_back(parent->m_arrProperties[it->second]);
                    m_mapProperties.insert(std::make_pair(it->first, m_arrProperties.size() - 1));
                }
            }
        }

        bool CCssStyle::ParseProperties()
        {
            std::wstring sTemp = m_sCss;
            while ( false == sTemp.empty() )
            {
                size_t nPos = (int)sTemp.find( ';' );
                if ( std::wstring::npos == nPos )
                {
                    CCssPropertyPtr pProperty = CCssPropertyPtr(new CCssProperty(sTemp));
                    if ((pProperty) && (cssptUnknown != pProperty->get_Type()) )
                    {
                        std::map<ECssPropertyType, size_t>::iterator pFind = m_mapProperties.find(pProperty->get_Type());
                        if (pFind != m_mapProperties.end())
                        {
                            m_arrProperties[pFind->second] = pProperty;
                        }
                        else
                        {
                            m_arrProperties.push_back(pProperty);
                            m_mapProperties.insert(std::make_pair(pProperty->get_Type(), m_arrProperties.size() - 1));
                        }
                    }

                    sTemp.clear();
                    continue;
                }
                else
                {
                    CCssPropertyPtr pProperty = CCssPropertyPtr(new  CCssProperty( sTemp.substr( 0, nPos )));

                    if ((pProperty) &&  (cssptUnknown != pProperty->get_Type()) )
                    {
                        std::map<ECssPropertyType, size_t>::iterator pFind = m_mapProperties.find(pProperty->get_Type());
                        if (pFind != m_mapProperties.end())
                        {
                            m_arrProperties[pFind->second] = pProperty;
                        }
                        else
                        {
                            m_arrProperties.push_back(pProperty);
                            m_mapProperties.insert(std::make_pair(pProperty->get_Type(), m_arrProperties.size() - 1));
                        }
                    }

                    sTemp = sTemp.substr( nPos + 1, sTemp.length() - nPos - 1 );
                }
            }

            return true;
        }
    }
}
