//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#include "roman_to_arabic/parse_exception.hpp"

namespace roman_to_arabic {
	parse_exception::parse_exception( const std::string& what_arg )
		: std::invalid_argument( what_arg ) {}

// C++11 and above
#if __ROMAN_TO_ARABIC_CPP11
	parse_exception::parse_exception( const char* what_arg )
		: std::invalid_argument( what_arg ) {}
#endif
}