#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/calculator.cpp"

Calculator *calc = new Calculator();

TEST_CASE( "Testing additions" ) {
    REQUIRE( calc->addition(1, 1) == 2 );
    REQUIRE( calc->addition(0, 0) == 0 );
    REQUIRE( calc->addition(-5, 1) == -4 );
    REQUIRE( calc->addition(4, -2) == 2 );
}

TEST_CASE( "Testing substractions" ) {
    REQUIRE( calc->substraction(3, 1) == 2 );
    REQUIRE( calc->substraction(0, 0) == 0 );
    REQUIRE( calc->substraction(-5, 1) == -6 );
    REQUIRE( calc->substraction(4, -2) == 6 );
}
