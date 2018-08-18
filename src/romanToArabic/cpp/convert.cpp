//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#include "roman_to_arabic/convert.hpp"

namespace roman_to_arabic {
#if __ROMAN_TO_ARABIC_CPP11
	typedef std::map<char, std::pair<unsigned int, bool> >::const_iterator digit_iterator;

	const digit_iterator out_of_bounds( digits.cend() );
#else
	typedef std::map<char, std::pair<unsigned int, bool> >::iterator digit_iterator;

	const digit_iterator out_of_bounds( digits.end() );
#endif

	unsigned int convert_roman_to_arabic( const std::string& roman ) {
		unsigned int output( 0 );
		unsigned int last_value( 0 );
		unsigned int repetitions( 0 );
		unsigned int ratio;
		bool was_subtraction( false );

		for ( size_t i = 0; i < roman.size(); ++i ) {
			const char letter( roman[i] );

			digit_iterator numeral( digits.find( letter ) );

			if ( numeral == out_of_bounds )
				throw parse_exception( std::string( "Unknown character \"" ) + letter + "\"" );

			if ( numeral->second.first == last_value )
				++repetitions;
			else
				repetitions = 0;

			if ( repetitions > (was_subtraction? 0 : (numeral->second.second ? 1 : 3)) )
				throw parse_exception( std::string( "Too many repetitions of \"" ) + letter + "\"" );

			if ( ((repetitions == 0) && (last_value != 0)) &&
				 (numeral->second.first > last_value) ) {
				// The numeral changed and subtraction is happening
				ratio = numeral->second.first / last_value;

				if ( ratio == 5 )
					// Add 3/5 of the value 
					// For example: IV
					// 1(I) is already added and we want 4. So we need to add 3 (3/5 of V(5)
					output += numeral->second.first * 3 / 5;
				else if ( ratio == 10 )
					// Add 8/10 (4/5) of the value
					// Same reasoning as above
					output += numeral->second.first * 4 / 5;
				else
					throw parse_exception( std::string( "Invalid order of numerals. \"" ) + letter + "\" is not allowed here." );

				was_subtraction = true;
			} else {
				if ( (numeral->second.first > last_value) && (last_value != 0) )
					throw parse_exception( std::string( "Invalid order of numerals. \"" ) + letter + "\" is not allowed here." );

				// Same numeral or no subtraction
				output += numeral->second.first;

				was_subtraction = false;
			}

			last_value = numeral->second.first;
		}

		return output;
	}
}