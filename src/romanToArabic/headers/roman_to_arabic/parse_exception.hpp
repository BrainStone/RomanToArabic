//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#ifndef __ROMAN_TO_ARABIC_PARSE_EXCEPTION_HPP__
#define __ROMAN_TO_ARABIC_PARSE_EXCEPTION_HPP__

#include <stdexcept>

#include "../roman_to_arabic.hpp"

namespace roman_to_arabic {
	/**
	 * Exception class for when parsing goes wrong.
	 *
	 * This exception class is used for all parsing exceptions of the RomanToArabic lib.<br>
	 * To simplify exception handling, this exception inherits <code>std::invalid_argument</code>.
	 *
	 * The inheritance tree is like follows:
	 *
	 * <code>parse_exception -> std::invalid_argument -> std::logic_error -> std::exception</code>
	 */
	class parse_exception : public std::invalid_argument {
		/**
		 * Create a new instance of this exception with the given message.
		 *
		 * @param what_arg: The message of the exception
		 */
		explicit parse_exception( const std::string& what_arg );

// C++11 and above
#if __ROMAN_TO_ARABIC_CPP11
		/**
		 * Create a new instance of this exception with the given message.
		 *
		 * This constructor is only available on C++11 or above.
		 *
		 * @param what_arg: The message of the exception
		 */
		explicit parse_exception( const char* what_arg );
#endif
	};
}

#endif // #ifndef __ROMAN_TO_ARABIC_PARSE_EXCEPTION_HPP__