//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#ifndef __ROMAN_TO_ARABIC_DIGITS_HPP__
#define __ROMAN_TO_ARABIC_DIGITS_HPP__

#include <map>

#include "../roman_to_arabic.hpp"

namespace roman_to_arabic {
	namespace implementation {
		inline std::map<char, std::pair<unsigned int, bool> > get_digits() {
			std::map<char, std::pair<unsigned int, bool> > out;

			out['I'] = std::make_pair<unsigned int, bool>( 1, false );
			out['V'] = std::make_pair<unsigned int, bool>( 5, true );
			out['X'] = std::make_pair<unsigned int, bool>( 10, false );
			out['L'] = std::make_pair<unsigned int, bool>( 50, true );
			out['C'] = std::make_pair<unsigned int, bool>( 100, false );
			out['D'] = std::make_pair<unsigned int, bool>( 500, true );
			out['M'] = std::make_pair<unsigned int, bool>( 1000, false );

			return out;
		}
	}

	/**
	 * Mapping of all allowed characters to their values.
	 *
	 * The value is a <code>std::pair<unsigned int, bool></code> that represents the value
	 * and if the value is 5 value.
	 */
	const std::map<char, std::pair<unsigned int, bool> > digits( implementation::get_digits() );
}

#endif // #ifndef __ROMAN_TO_ARABIC_DIGITS_HPP__