#pragma once

#include <locale>

#include <boost/lexical_cast.hpp>

namespace boost
{
	template<>
	inline std::wstring lexical_cast<std::wstring, std::string>(const std::string& arg)
	{
		std::wstring result;
		std::locale loc;
		for(unsigned int i= 0; i < arg.size(); ++i)
		{
			result += std::use_facet<std::ctype<wchar_t> >(loc).widen(arg[i]);
		}
		return result;
	}

	template<>
	inline std::string lexical_cast<std::string, std::wstring>(const std::wstring& arg)
	{
		std::string result;
		std::locale loc;
		for(unsigned int i= 0; i < arg.size(); ++i)
		{
			result += std::use_facet<std::ctype<wchar_t> >(loc).narrow(arg[i]);
		}
		return result;
	}
}

