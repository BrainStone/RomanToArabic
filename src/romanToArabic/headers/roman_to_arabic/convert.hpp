//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#ifndef __ROMAN_TO_ARABIC_CONVERT_HPP__
#define __ROMAN_TO_ARABIC_CONVERT_HPP__

#include <string>

#include "../roman_to_arabic.hpp"

namespace roman_to_arabic {
	unsigned int convert_roman_to_arabic( const std::string& roman );

	inline unsigned int convert_roman_to_arabic( const char* roman ) {
		return convert_roman_to_arabic( std::string( roman ) );
	}

	inline unsigned int convert_roman_to_arabic( const char* roman, size_t length ) {
		return convert_roman_to_arabic( std::string( roman, length ) );
	}
}

#endif // #ifndef __ROMAN_TO_ARABIC_CONVERT_HPP__