//
// Created by fishy on 9/6/21.
//
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>

SCENARIO( "Testing") {
  GIVEN( "A test") {
    WHEN ("The test is run") {
      THEN ("The test passes") {
        REQUIRE(true);
      }
    }
  }
}
