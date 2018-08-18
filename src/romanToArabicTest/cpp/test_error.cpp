//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#include "global_test_settings.hpp"

#include "roman_to_arabic.hpp"

using roman_to_arabic::convert_roman_to_arabic;

TEST( ErrorTest, InvalidChar ) {
	EXPECT_THROW( convert_roman_to_arabic( "A" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( " " ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "-" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "b" ), roman_to_arabic::parse_exception );
}

TEST( ErrorTest, Lowercase ) {
	EXPECT_THROW( convert_roman_to_arabic( "i" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "v" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "x" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "l" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "c" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "d" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "m" ), roman_to_arabic::parse_exception );
}

TEST( ErrorTest, Repetition ) {
	EXPECT_THROW( convert_roman_to_arabic( "IIII" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "VV" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "XXXX" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "LL" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "CCCC" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "DD" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "MMMM" ), roman_to_arabic::parse_exception );
}

TEST( ErrorTest, WrongSubtraction ) {
	EXPECT_THROW( convert_roman_to_arabic( "VX" ), roman_to_arabic::parse_exception );

	EXPECT_THROW( convert_roman_to_arabic( "IL" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "VL" ), roman_to_arabic::parse_exception );

	EXPECT_THROW( convert_roman_to_arabic( "IC" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "VC" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "LC" ), roman_to_arabic::parse_exception );

	EXPECT_THROW( convert_roman_to_arabic( "ID" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "VD" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "XD" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "LD" ), roman_to_arabic::parse_exception );

	EXPECT_THROW( convert_roman_to_arabic( "IM" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "VM" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "XM" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "LM" ), roman_to_arabic::parse_exception );
	EXPECT_THROW( convert_roman_to_arabic( "DM" ), roman_to_arabic::parse_exception );
}
