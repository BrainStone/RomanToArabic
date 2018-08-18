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

/// Visual Studio's partial C++11 support is a pain in the ass!
/// <code>constexpr</code> only supported on VS 2015 and above!
#if !defined(__ROMAN_TO_ARABIC_CONSTEXPR) && \
	((__cplusplus >= 201103L) \
	|| (defined(_MSC_VER) && (_MSC_VER >= 1900)))
/// <code>constexpr</code> available
#	define __ROMAN_TO_ARABIC_CONSTEXPR constexpr
#else
/// <code>constexpr</code> not available. Using <code>const</code> instead
#	define __ROMAN_TO_ARABIC_CONSTEXPR const
#endif

// Now the other includes
#include "roman_to_arabic/convert.hpp"
#include "roman_to_arabic/digits.hpp"
#include "roman_to_arabic/parse_exception.hpp"

#endif // #ifndef __ROMAN_TO_ARABIC_HPP__