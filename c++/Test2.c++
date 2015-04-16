// ---------
// Test2.c++
// ---------

#include <cassert>   // assert
#include <iostream>  // cout, endl

#include <gtest/gtest.h>

using namespace std;

TEST(MyUnitTests, test_1) {
    ASSERT_EQ(2, 2);}
