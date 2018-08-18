//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#ifndef __ROMAN_TO_ARABIC_DIGITS_HPP__
#define __ROMAN_TO_ARABIC_DIGITS_HPP__

#include <map>

#include "../roman_to_arabic.hpp"

namespace roman_to_arabic {
	/**
	 * Mapping of all allowed characters to their values.
	 *
	 * The value is a <code>std::pair<unsigned int, bool></code> that represents the value
	 * and if the value is 5 value.
	 */
	const std::map<char, std::pair<unsigned int, bool> > digits( {
		{ 'I', { 1, false } },
		{ 'V', { 5, true } },
		{ 'X', { 10, false } },
		{ 'L', { 50, true } },
		{ 'C', { 100, false } },
		{ 'D', { 500, true } },
		{ 'M', { 1000, false } },
	} );
}

#endif // #ifndef __ROMAN_TO_ARABIC_DIGITS_HPP__