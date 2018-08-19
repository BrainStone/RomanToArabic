//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#ifndef __ROMAN_TO_ARABIC_HPP__
#define __ROMAN_TO_ARABIC_HPP__

/**
 * Main Namespace for the RomanToArabic lib
 */
namespace roman_to_arabic {
	/**
	 * Namespace for internal implementations. You shouldn't use anything out of it!
	 */
	namespace implementation {
	}
}

/// Visual Studio needs special handling to detect C++11
#if !defined(__ROMAN_TO_ARABIC_CPP11) && \
	((__cplusplus >= 201103L) \
	|| (defined(_MSC_VER) && (_MSC_VER >= 1700)))
/// C++11 available
#	define __ROMAN_TO_ARABIC_CPP11 1
#else
/// C++11 not available
#	define __ROMAN_TO_ARABIC_CPP11 0
#endif

// Now the other includes
#include "roman_to_arabic/convert.hpp"
#include "roman_to_arabic/digits.hpp"
#include "roman_to_arabic/parse_exception.hpp"

#endif // #ifndef __ROMAN_TO_ARABIC_HPP__