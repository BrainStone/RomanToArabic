//
// Copyright (c) 2018 Yannick Schinko. All rights reserved.
// Licensed under the GPLv3 License. See LICENSE file in the project root for full license information.
//
#include "global_test_settings.hpp"

#include "roman_to_arabic.hpp"

using roman_to_arabic::convert_roman_to_arabic;

TEST( ConversionTest, Simple ) {
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "I" ), 1 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "II" ), 2 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "III" ), 3 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "V" ), 5 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "X" ), 10 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "XX" ), 20 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "XXX" ), 30 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "L" ), 50 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "C" ), 100 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "CC" ), 200 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "CCC" ), 300 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "D" ), 500 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "M" ), 1000 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "MM" ), 2000 ) );
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "MMM" ), 3000 ) );
}

TEST( ConversionTest, Mixed ) {
	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "VIII" ), 8 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "XXVIII" ), 28 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "MI" ), 1001 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "MDVIII" ), 1508 ) );

	EXPECT_NO_THROW( EXPECT_EQ( convert_roman_to_arabic( "MDCLXVI" ), 1666 ) );
}
