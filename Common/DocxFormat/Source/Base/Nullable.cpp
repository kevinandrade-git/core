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

#include "Nullable.h"

namespace NSCommon
{
    template<class Type>
    nullable_base<Type>::nullable_base()
    {
        m_pPointer = NULL;
    }

    template<class Type>
    nullable_base<Type>::nullable_base(const nullable_base<Type>& oOther)
    {
        m_pPointer = NULL;
        if ( NULL != oOther.m_pPointer )
            m_pPointer = new Type( (const Type&)*(oOther.m_pPointer) );
    }

    template<class Type>
    nullable_base<Type>::~nullable_base()
    {
        RELEASEOBJECT(m_pPointer);
    }
    template<class Type>
    Type& nullable_base<Type>::operator*()  { return *m_pPointer; }

    template<class Type>
    Type* nullable_base<Type>::operator->() { return  m_pPointer; }

    template<class Type>
    Type& nullable_base<Type>::operator*() const  { return *m_pPointer; }

    template<class Type>
    Type* nullable_base<Type>::operator->() const { return  m_pPointer; }

    template<class Type>
    const Type& nullable_base<Type>::get() const { return  *m_pPointer; }

    template<class Type>
    Type& nullable_base<Type>::get() { return  *m_pPointer; }

    template<class Type>
    nullable_base<Type>& nullable_base<Type>::operator=(const nullable_base<Type> &oOther)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != oOther.m_pPointer )
            m_pPointer = new Type( (const Type&)*(oOther.m_pPointer) );

        return *this;
    }

    template<class Type>
    nullable_base<Type>& nullable_base<Type>::operator=(Type* pType)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer	= pType;
        return *this;
    }

    template<class Type>
    nullable_base<Type>& nullable_base<Type>::operator=(const Type& oSrc)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer	= new Type(oSrc);
        return *this;
    }

    template<class Type>
    bool nullable_base<Type>::IsInit() const
    {
        return (NULL != m_pPointer);
    }

    template<class Type>
    bool nullable_base<Type>::is_init() const
    {
        return IsInit();
    }

    template<class Type>
    void nullable_base<Type>::reset(Type* pType)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer = pType;
    }

    //

    template<class Type>
    nullable<Type>::nullable() : nullable_base<Type>()
    {
    }

    template<class Type>
    nullable<Type>::nullable(const nullable<Type>& oOther)
    {
        if ( NULL == oOther.m_pPointer )
            this->m_pPointer = NULL;
        else
            this->m_pPointer = new Type( (const Type&)*(oOther.m_pPointer) );
    }

    template<class Type>
    nullable<Type>::nullable(const XmlUtils::CXmlNode& oNode)   // const modifier is important for gcc compiler in our case
    {
        if (oNode.IsValid())
            this->m_pPointer = new Type(const_cast<XmlUtils::CXmlNode&> (oNode));
        else
            this->m_pPointer = NULL;
    }

    template<class Type>
    nullable<Type>::nullable(XmlUtils::CXmlNode& oNode)
    {
        if (oNode.IsValid())
            this->m_pPointer = new Type(oNode);
        else
            this->m_pPointer = NULL;
    }

    template<class Type>
    nullable<Type>::nullable(XmlUtils::CXmlLiteReader& oReader)
    {
        if (oReader.IsValid())
            this->m_pPointer = new Type(oReader);
        else
            this->m_pPointer = NULL;
    }

    template<class Type>
    nullable<Type>::nullable(XLS::BaseObjectPtr& obj)
    {
        if (obj != nullptr)
            this->m_pPointer = new Type(obj);
        else
            this->m_pPointer = NULL;
    }

    template<class Type>
    nullable<Type>::nullable(std::vector<XLS::BaseObjectPtr>& obj)
    {
        if (!obj.empty())
            this->m_pPointer = new Type(obj);
        else
            this->m_pPointer = NULL;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(XLS::BaseObjectPtr& obj)
    {
        RELEASEOBJECT(this->m_pPointer);
        if (obj != nullptr)
            this->m_pPointer = new Type(obj);
        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(std::vector<XLS::BaseObjectPtr>& obj)
    {
        RELEASEOBJECT(this->m_pPointer);
        if (!obj.empty())
            this->m_pPointer = new Type(obj);
        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(XmlUtils::CXmlNode& oNode)
    {
        RELEASEOBJECT(this->m_pPointer);
        if (oNode.IsValid())
            this->m_pPointer = new Type(oNode);
        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(XmlUtils::CXmlLiteReader& oReader)
    {
        RELEASEOBJECT(this->m_pPointer);
        if (oReader.IsValid())
            this->m_pPointer = new Type(oReader);
        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(const wchar_t* cwsValue)
    {
        RELEASEOBJECT(this->m_pPointer);
        if (NULL != cwsValue)
            this->m_pPointer = new Type( cwsValue );
        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(const nullable<Type> &oOther)
    {
        RELEASEOBJECT(this->m_pPointer);

        if ( NULL != oOther.m_pPointer )
            this->m_pPointer = new Type( (const Type&)*(oOther.m_pPointer) );

        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(Type* pType)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer	= pType;
        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(Type& oSrc)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer	= new Type(oSrc);
        return *this;
    }

    template<class Type>
    nullable<Type>& nullable<Type>::operator=(const Type& oSrc)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer	= new Type(oSrc);
        return *this;
    }

    template<class Type>
    const bool nullable<Type>::operator==(const nullable<Type>& oOther) const
    {
        if ( !this->m_pPointer && !oOther.m_pPointer )
            return true;
        else if ( !this->m_pPointer || !oOther.m_pPointer )
            return false;

        return (*this->m_pPointer) == (*(oOther.m_pPointer));
    }

    template<class Type>
    const bool nullable<Type>::operator==(const Type& oOther) const
    {
        if ( !this->m_pPointer )
            return false;

        return (*this->m_pPointer) == oOther;
    }

    template<class Type>
    Type& nullable<Type>::operator*()  { return *this->m_pPointer; }

    template<class Type>
    Type* nullable<Type>::operator->() { return  this->m_pPointer; }

    template<class Type>
    Type& nullable<Type>::operator*() const  { return *this->m_pPointer; }

    template<class Type>
    Type* nullable<Type>::operator->() const { return  this->m_pPointer; }

    template<class Type>
    const Type& nullable<Type>::get()const { return  *this->m_pPointer; }

    template<class Type>
    Type& nullable<Type>::get2()const { return  *this->m_pPointer; }

    template<class Type>
    template<class T> const bool nullable<Type>::is()const
    {
        if (NULL == this->m_pPointer)
            return false;
        T* pResult = dynamic_cast<T*>(const_cast<Type*>(this->m_pPointer));
        return (NULL != pResult);
    }

    template<class Type>
    template<class T> const T& nullable<Type>::as()const
    {
        T* pResult = dynamic_cast<T*>(const_cast<Type*>(this->m_pPointer));
        return *pResult;
    }

    template<class Type>
    template<class T> T& nullable<Type>::as()
    {
        T* pResult = dynamic_cast<T*>(const_cast<Type*>(this->m_pPointer));
        return *pResult;
    }

    template<class Type>
    bool nullable<Type>::Init()
    {
        RELEASEOBJECT(this->m_pPointer);

        this->m_pPointer = new Type;

        return this->IsInit();
    }

    template<class Type>
    Type* nullable<Type>::GetPointer() const
    {
        return this->m_pPointer;
    }

    //GetPointerEmptyNullable - небезопасная операция, использовать при крайней необходимости
    //Передает указатель и очищает nullable, в дальнейшем память надо удалять самостоятельно
    template<class Type>
    Type* nullable<Type>::GetPointerEmptyNullable()
    {
        Type* pOldPointer = this->m_pPointer;
        this->m_pPointer = NULL;
        return pOldPointer;
    }

    //

    template<typename Type>
    nullable_limit<Type>::nullable_limit() : nullable_base<Type>()
    {
    }

    template<typename Type>
    void nullable_limit<Type>::operator=(const std::wstring& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new Type();
        this->m_pPointer->_set(value);
    }

    template<typename Type>
    void nullable_limit<Type>::operator=(Type* pType)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer	= pType;
    }

    template<typename Type>
    void nullable_limit<Type>::operator=(const BYTE& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new Type();
        this->m_pPointer->SetBYTECode(value);
    }

    template<typename Type>
    void nullable_limit<Type>::operator=(const Type& value)
    {
        *this = value.get();
    }

    template<typename Type>
    nullable_limit<Type>& nullable_limit<Type>::operator=(const nullable_limit<Type>& oSrc)
    {
        RELEASEOBJECT(this->m_pPointer);

        if ( NULL != oSrc.m_pPointer )
        {
            this->m_pPointer = new Type();
            this->m_pPointer->set(oSrc->get());
        }

        return *this;
    }

    template<typename Type>
    const std::wstring& nullable_limit<Type>::get_value_or(const std::wstring& value) const
    {
        if (NULL == this->m_pPointer)
            return value;
        return this->m_pPointer->get();
    }

    template<typename Type>
    const std::wstring& nullable_limit<Type>::get_value() const
    {
        return this->m_pPointer->get();
    }

    template<typename Type>
    Type& nullable_limit<Type>::operator*()  { return *this->m_pPointer; }

    template<typename Type>
    Type* nullable_limit<Type>::operator->() { return  this->m_pPointer; }

    template<typename Type>
    Type& nullable_limit<Type>::operator*() const  { return *this->m_pPointer; }

    template<typename Type>
    Type* nullable_limit<Type>::operator->() const { return  this->m_pPointer; }

    template<typename Type>
    const Type& nullable_limit<Type>::get()const { return  *this->m_pPointer; }

    //

    nullable_int::nullable_int() : nullable_base<int>()
    {
    }
    void nullable_int::normalize(const int& min, const int& max)
    {
        if (IsInit())
        {
            if (*m_pPointer < min)
                *m_pPointer = min;
            else if (*m_pPointer > max)
                *m_pPointer = max;
        }
    }
    void nullable_int::normalize_positive()
    {
        if (IsInit())
        {
            if (*m_pPointer < 0)
                *m_pPointer = 0;
        }
    }
    nullable_int& nullable_int::operator=(const wchar_t* cwsValue)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != cwsValue )
            m_pPointer = new int(XmlUtils::GetInteger(cwsValue));

        return *this;
    }
    void nullable_int::operator=(const std::wstring& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new int(XmlUtils::GetInteger(value));
    }
    void nullable_int::operator=(const int& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new int(value);
    }
    std::wstring nullable_int::ToString()  const
    {
        return std::to_wstring(*m_pPointer);
    }
    nullable_int& nullable_int::operator=(const nullable_int& oSrc)
    {
        RELEASEOBJECT(m_pPointer);

        if (NULL != oSrc.m_pPointer )
            m_pPointer = new int(*oSrc);
        return *this;
    }
    const bool nullable_int::operator==(const nullable_int& oOther) const
    {
        if ( !this->m_pPointer )
            return false;

        return (*this->m_pPointer) == *oOther;
    }
    const bool nullable_int::operator==(const int& oOther) const
    {
        if ( !this->m_pPointer )
            return false;

        return (*this->m_pPointer) == oOther;
    }
    int nullable_int::get_value_or(const int& value) const
    {
        if (NULL == m_pPointer)
        {
            int ret = value;
            return ret;
        }
        return *m_pPointer;
    }
    std::wstring nullable_int::ToAttribute(const std::wstring & name)  const
    {
        if (m_pPointer)
        {
            return name + L"=\"" + std::to_wstring(*m_pPointer) + L"\" ";
        }
        return L"";
    }
    int& nullable_int::operator*()  { return *m_pPointer; }
    int* nullable_int::operator->() { return  m_pPointer; }

    int& nullable_int::operator*() const  { return *m_pPointer; }
    int* nullable_int::operator->() const { return  m_pPointer; }

    const int& nullable_int::get()const { return  *m_pPointer; }

    //

    nullable_uint::nullable_uint() : nullable_base<unsigned int>()
    {
    }

    void nullable_uint::normalize(const unsigned int& min, const unsigned int& max)
    {
        if (IsInit())
        {
            if (*m_pPointer < min)
                *m_pPointer = min;
            else if (*m_pPointer > max)
                *m_pPointer = max;
        }
    }
    void nullable_uint::normalize_positive()
    {
        if (IsInit())
        {
            if ((int)(*m_pPointer) < 0)
                *m_pPointer = 0;
        }
    }
    nullable_uint& nullable_uint::operator=(const wchar_t* cwsValue)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != cwsValue )
            m_pPointer = new unsigned int(XmlUtils::GetUInteger(cwsValue));

        return *this;
    }
    void nullable_uint::operator=(const std::wstring& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new unsigned int(XmlUtils::GetUInteger(value));
    }
    void nullable_uint::operator=(const unsigned int& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new unsigned int(value);
    }

    nullable_uint& nullable_uint::operator=(const nullable_uint& oSrc)
    {
        RELEASEOBJECT(m_pPointer);

        if (NULL != oSrc.m_pPointer )
            m_pPointer = new unsigned int(*oSrc);
        return *this;
    }

    unsigned int nullable_uint::get_value_or(const unsigned int& value) const
    {
        if (NULL == m_pPointer)
        {
            unsigned int ret = value;
            return ret;
        }
        return *m_pPointer;
    }
    unsigned int& nullable_uint::operator*()  { return *m_pPointer; }
    unsigned int* nullable_uint::operator->() { return  m_pPointer; }

    unsigned int& nullable_uint::operator*() const  { return *m_pPointer; }
    unsigned int* nullable_uint::operator->() const { return  m_pPointer; }

    const unsigned int& nullable_uint::get()const { return  *m_pPointer; }

    //

    nullable_int64::nullable_int64() : nullable_base<_INT64>()
    {
    }
    void nullable_int64::normalize(const _INT64& min, const _INT64& max)
    {
        if (IsInit())
        {
            if (*m_pPointer < min)
                *m_pPointer = min;
            else if (*m_pPointer > max)
                *m_pPointer = max;
        }
    }
    void nullable_int64::normalize_positive()
    {
        if (IsInit())
        {
            if (*m_pPointer < 0)
                *m_pPointer = 0;
        }
    }
    nullable_int64& nullable_int64::operator=(const wchar_t* cwsValue)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != cwsValue )
            m_pPointer = new _INT64(XmlUtils::GetInteger64(cwsValue));

        return *this;
    }
    void nullable_int64::operator=(const std::wstring& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new _INT64(XmlUtils::GetInteger64(value));
    }
    void nullable_int64::operator=(const _INT64& value)
    {
        RELEASEOBJECT(this->m_pPointer);
        this->m_pPointer = new _INT64(value);
    }

    nullable_int64& nullable_int64::operator=(const nullable_int64& oSrc)
    {
        RELEASEOBJECT(m_pPointer);

        if (NULL != oSrc.m_pPointer )
            m_pPointer = new _INT64(*oSrc);
        return *this;
    }
    std::wstring nullable_int64::ToAttribute(const std::wstring & name)  const
    {
        if (m_pPointer)
        {
            return name + L"=\"" + std::to_wstring(*m_pPointer) + L"\" ";
        }
        return L"";
    }
    _INT64 nullable_int64::get_value_or(const _INT64& value) const
    {
        if (NULL == m_pPointer)
        {
            int ret = (int)value;
            return ret;
        }
        return *m_pPointer;
    }
    _INT64& nullable_int64::operator*()  { return *m_pPointer; }
    _INT64* nullable_int64::operator->() { return  m_pPointer; }

    _INT64& nullable_int64::operator*() const  { return *m_pPointer; }
    _INT64* nullable_int64::operator->() const { return  m_pPointer; }

    const _INT64& nullable_int64::get()const { return  *m_pPointer; }

    //

    nullable_sizet::nullable_sizet() : nullable_base<size_t>()
    {
    }

    void nullable_sizet::normalize(const size_t& max)
    {
        if (IsInit())
        {
            if (*m_pPointer > max)
                *m_pPointer = max;
        }
    }
    nullable_sizet& nullable_sizet::operator=(const std::wstring & sValue)
    {
        RELEASEOBJECT(m_pPointer);

        if ( !sValue.empty() )
            m_pPointer = new size_t((size_t)XmlUtils::GetUInteger(sValue));

        return *this;
    }
    void nullable_sizet::operator=(const size_t& value)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer = new size_t(value);
    }
    nullable_sizet& nullable_sizet::operator=(const nullable_sizet& oSrc)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != oSrc.m_pPointer )
            m_pPointer = new size_t(*oSrc);

        return *this;
    }
    size_t nullable_sizet::get_value_or(const size_t& value) const
    {
        if (NULL == m_pPointer)
        {
            size_t ret = value;
            return ret;
        }
        return *m_pPointer;
    }
    std::wstring nullable_sizet::ToAttribute(const std::wstring & name)  const
    {
        if (m_pPointer)
        {
            return name + L"=\"" + std::to_wstring(*m_pPointer) + L"\" ";
        }
        return L"";
    }
    size_t& nullable_sizet::operator*()  { return *m_pPointer; }
    size_t* nullable_sizet::operator->() { return  m_pPointer; }

    size_t& nullable_sizet::operator*() const  { return *m_pPointer; }
    size_t* nullable_sizet::operator->() const { return  m_pPointer; }

    const size_t& nullable_sizet::get()const { return  *m_pPointer; }

    //

    nullable_double::nullable_double() : nullable_base<double>()
    {
    }
    void nullable_double::normalize(const double& min, const double& max)
    {
        if (IsInit())
        {
            if (*m_pPointer < min)
                *m_pPointer = min;
            else if (*m_pPointer > max)
                *m_pPointer = max;
        }
    }
    nullable_double& nullable_double::operator=(const std::wstring & sValue)
    {
        RELEASEOBJECT(m_pPointer);

        if ( !sValue.empty() )
            m_pPointer = new double(XmlUtils::GetDouble(sValue));

        return *this;
    }
    void nullable_double::operator=(const double& value)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer = new double(value);
    }
    std::wstring nullable_double::ToAttribute(const std::wstring & name)  const
    {
        if (m_pPointer)
        {
            return name + L"=\"" + std::to_wstring(*m_pPointer) + L"\" ";
        }
        return L"";
    }
    nullable_double& nullable_double::operator=(const nullable_double& oSrc)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != oSrc.m_pPointer )
            m_pPointer = new double(*oSrc);

        return *this;
    }
    double nullable_double::get_value_or(const double& value) const
    {
        if (NULL == m_pPointer)
        {
            double ret = value;
            return ret;
        }
        return *m_pPointer;
    }
    double& nullable_double::operator*()  { return *m_pPointer; }
    double* nullable_double::operator->() { return  m_pPointer; }

    double& nullable_double::operator*() const  { return *m_pPointer; }
    double* nullable_double::operator->() const { return  m_pPointer; }

    const double& nullable_double::get()const { return  *m_pPointer; }

    //

    nullable_bool::nullable_bool() : nullable_base<bool>()
    {
    }

    bool nullable_bool::set(const std::wstring& value)
    {
        if ((L"true" == value) || (L"1" == value))
            return true;
        return false;
    }

    nullable_bool& nullable_bool::operator=(const std::wstring &sValue)
    {
        RELEASEOBJECT(m_pPointer);

        if (!sValue.empty() )
            m_pPointer = new bool(XmlUtils::GetBoolean2(sValue));

        return *this;
    }
    nullable_bool& nullable_bool::operator=(const wchar_t* cwsValue)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != cwsValue )
            m_pPointer = new bool(XmlUtils::GetBoolean2(cwsValue));

        return *this;
    }
    void nullable_bool::operator=(const bool& value)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer = new bool(value);
    }

    nullable_bool& nullable_bool::operator=(const nullable_bool& oSrc)
    {
        RELEASEOBJECT(m_pPointer);

        if ( NULL != oSrc.m_pPointer )
            m_pPointer = new bool(*oSrc);

        return *this;
    }
    std::wstring nullable_bool::ToAttribute(const std::wstring & name)  const
    {
        if (m_pPointer)
        {
            return name + L"=\"" + (*m_pPointer ? L"1" : L"0") + L"\" ";
        }
        return L"";
    }
    bool nullable_bool::get_value_or(const bool& value) const
    {
        if (NULL == m_pPointer)
        {
            bool ret = value;
            return ret;
        }
        return *m_pPointer;
    }

    bool& nullable_bool::operator*()  { return *m_pPointer; }
    bool* nullable_bool::operator->() { return  m_pPointer; }

    bool& nullable_bool::operator*() const  { return *m_pPointer; }
    bool* nullable_bool::operator->() const { return  m_pPointer; }

    const bool& nullable_bool::get()const { return  *m_pPointer; }

    //

    nullable_string::nullable_string() : nullable_base<std::wstring>()
    {
    }
    nullable_string::nullable_string(const nullable_string& oOther)
    {
        if (NULL == oOther.m_pPointer)
            m_pPointer = NULL;
        else
            m_pPointer = new std::wstring(*oOther.m_pPointer);
    }
    void nullable_string::operator=(const std::wstring& value)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer = new std::wstring(value);

    }
    void nullable_string::operator=(std::wstring* value)
    {
        RELEASEOBJECT(m_pPointer);
        m_pPointer = value;
    }
    nullable_string& nullable_string::operator=(const nullable_string& oSrc)
    {
        RELEASEOBJECT(m_pPointer);

        if (NULL != oSrc.m_pPointer)
            m_pPointer = new std::wstring(*oSrc);
        return *this;
    }
    const bool nullable_string::operator==(const nullable_string& oOther) const
    {
        if (!this->m_pPointer)
            return false;

        return (*this->m_pPointer) == *oOther;
    }
    const bool nullable_string::operator==(const std::wstring& oOther) const
    {
        if (!this->m_pPointer)
            return false;

        return (*this->m_pPointer) == oOther;
    }
    std::wstring nullable_string::get_value_or(const std::wstring& value) const
    {
        if (NULL == m_pPointer)
        {
            std::wstring ret = value;
            return ret;
        }
        return *m_pPointer;
    }
    std::wstring nullable_string::ToAttribute(const std::wstring & name)  const
    {
        if (m_pPointer)
        {
            return name + L"=\"" + (*m_pPointer) + L"\" ";
        }
        return L"";
    }
    std::wstring& nullable_string::operator*()  { return *m_pPointer; }
    std::wstring* nullable_string::operator->() { return  m_pPointer; }

    std::wstring& nullable_string::operator*() const  { return *m_pPointer; }
    std::wstring* nullable_string::operator->() const { return  m_pPointer; }

    std::wstring& nullable_string::get()const { return  *m_pPointer; }
}
