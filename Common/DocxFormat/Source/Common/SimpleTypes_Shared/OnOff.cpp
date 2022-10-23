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

#include "../SimpleTypes_Shared.h"

namespace SimpleTypes
{
    template<EOnOff eDefValue>
    COnOff<eDefValue>::COnOff() {}

    template<EOnOff eDefValue>
    COnOff<eDefValue>::COnOff(const bool & bVal)
    {
        this->m_eValue = (false != bVal) ? onoffTrue : onoffFalse;
    }

    template<EOnOff eDefValue>
    EOnOff COnOff<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( L"true"  == sValue ) this->m_eValue = onoffTrue;
        else if ( L"True"  == sValue ) this->m_eValue = onoffTrue;
        else if ( L"1"     == sValue ) this->m_eValue = onoffTrue;
        else if ( L"t"     == sValue ) this->m_eValue = onoffTrue;
        else if ( L"on"    == sValue ) this->m_eValue = onoffTrue;
        else if ( L"f"     == sValue ) this->m_eValue = onoffFalse;
        else if ( L"0"     == sValue ) this->m_eValue = onoffFalse;
        else if ( L"false" == sValue ) this->m_eValue = onoffFalse;
        else if ( L"False" == sValue ) this->m_eValue = onoffFalse;
        else if ( L"off"   == sValue ) this->m_eValue = onoffFalse;
        else                              this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EOnOff eDefValue>
    EOnOff COnOff<eDefValue>::FromStringA(const char* sValue)
    {
        if		(strcmp("1",		sValue) == 0) this->m_eValue = onoffTrue;
        else if	(strcmp("0",		sValue) == 0) this->m_eValue = onoffFalse;
        else if	(strcmp("true",		sValue) == 0) this->m_eValue = onoffTrue;
        else if	(strcmp("True",		sValue) == 0) this->m_eValue = onoffTrue;
        else if	(strcmp("t",		sValue) == 0) this->m_eValue = onoffTrue;
        else if	(strcmp("on",		sValue) == 0) this->m_eValue = onoffTrue;
        else if	(strcmp("f",		sValue) == 0) this->m_eValue = onoffFalse;
        else if	(strcmp("false",	sValue) == 0) this->m_eValue = onoffFalse;
        else if	(strcmp("False",	sValue) == 0) this->m_eValue = onoffFalse;
        else if	(strcmp("off",		sValue) == 0) this->m_eValue = onoffFalse;
        else this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<EOnOff eDefValue>
    std::wstring COnOff<eDefValue>::ToString  () const
    {
        switch(this->m_eValue)
        {
        case onoffFalse : return L"false";
        case onoffTrue  : return L"true";
        default         : return L"false";
        }
    }

    template<EOnOff eDefValue>
    std::wstring COnOff<eDefValue>::ToString2(EOnOffToString eType) const
    {
        if (onofftostringTrue == eType)
        {
            switch (this->m_eValue)
            {
            case onoffFalse:	return L"false";
            case onoffTrue:		return L"true";
            default:			return L"false";
            }
        }
        else if (onofftostring1 == eType)
        {
            switch (this->m_eValue)
            {
            case onoffFalse:	return L"0";
            case onoffTrue:		return L"1";
            default:			return L"0";
            }
        }
        else if (onofftostringOn == eType)
        {
            switch (this->m_eValue)
            {
            case onoffFalse:	return L"off";
            case onoffTrue:		return L"on";
            default:			return L"off";
            }
        }
        else if (onofftostringT == eType)
        {
            switch (this->m_eValue)
            {
            case onoffFalse:	return L"f";
            case onoffTrue:		return L"t";
            default:			return L"f";
            }
        }
        return L"false";
    }

    template<EOnOff eDefValue>
    std::wstring COnOff<eDefValue>::ToString3(EOnOffToString eType) const
    {
        if(onofftostringTrue == eType)
        {
            switch(this->m_eValue)
            {
            case onoffFalse : return L"false";
            case onoffTrue  : return L"true";
            default         : return L"false";
            }
        }
        else if(onofftostring1 == eType)
        {
            switch(this->m_eValue)
            {
            case onoffFalse : return L"0";
            case onoffTrue  : return L"1";
            default         : return L"0";
            }
        }
        else if(onofftostringOn == eType)
        {
            switch(this->m_eValue)
            {
            case onoffFalse : return L"off";
            case onoffTrue  : return L"on";
            default         : return L"off";
            }
        }
        else if(onofftostringT == eType)
        {
            switch(this->m_eValue)
            {
            case onoffFalse : return L"f";
            case onoffTrue  : return L"t";
            default         : return L"f";
            }
        }
        return L"false";
    }

    template<EOnOff eDefValue>
    bool COnOff<eDefValue>::ToBool()
    {
        return onoffTrue == this->m_eValue;
    }

    template<EOnOff eDefValue>
    void COnOff<eDefValue>::FromBool(bool bVal)
    {
        this->m_eValue = (false != bVal) ? onoffTrue : onoffFalse;
    }
}
