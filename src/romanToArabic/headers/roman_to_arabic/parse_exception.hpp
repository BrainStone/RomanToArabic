//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#ifndef __ROMAN_TO_ARABIC_PARSE_EXCEPTION_HPP__
#define __ROMAN_TO_ARABIC_PARSE_EXCEPTION_HPP__

#include <stdexcept>

#include "../roman_to_arabic.hpp"

namespace roman_to_arabic {
	class parse_exception : public std::invalid_argument {
		explicit parse_exception( const std::string& what_arg );

// C++11 and above
#if __cplusplus >= 201103L
		explicit parse_exception( const char* what_arg );
#endif
	};
}

#endif // #ifndef __ROMAN_TO_ARABIC_PARSE_EXCEPTION_HPP__