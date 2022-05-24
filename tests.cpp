#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Student.h"
// #include "Fraction.h"

TEST_CASE("student-step3") {
    Student aStudent;

    SECTION("get major") {
        REQUIRE(aStudent.getMajor() == "Undecided");
    }
    SECTION("get gpa") {

    }
}


