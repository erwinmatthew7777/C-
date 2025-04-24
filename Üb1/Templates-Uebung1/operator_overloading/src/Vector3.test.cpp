#include <catch2/catch_test_macros.hpp>
#include "Vector3.hpp"  // Include the Vector3 header file

TEST_CASE("Vector3 Class Methods", "[Vector3]") {
    // Test cases for addition operator
    SECTION("Addition Operator") {
        Vector3 v1(1.0, 2.0, 3.0);
        Vector3 v2(4.0, 5.0, 6.0);
        Vector3 result = v1 + v2;
        REQUIRE(result.getA() == 5.0);
    }

    // Test cases for subtraction operator
    SECTION("Subtraction Operator") {
        Vector3 v1(4.0, 5.0, 6.0);
        Vector3 v2(1.0, 2.0, 3.0);
        Vector3 result = v1 - v2;
        REQUIRE(result.getA() == 3.0);
    }

    // Test cases for dot product operator
    SECTION("Dot Product Operator") {
        Vector3 v1(1.0, 2.0, 3.0);
        Vector3 v2(4.0, 5.0, 6.0);
        double result = v1 * v2;
        REQUIRE(result == 32.0);
    }
}
