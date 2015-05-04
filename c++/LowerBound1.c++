// --------------
// LowerBound.c++
// --------------

// http://www.cplusplus.com/reference/algorithm/lower_bound/

#include <algorithm> // lower_bound
#include <cassert>   // assert
#include <iostream>  // cout, endl

#include "gtest/gtest.h"

#include "LowerBound1.h"

using namespace std;

using testing::TestWithParam;
using testing::Values;

typedef const int* (*F)(const int*, const int*, const int&);

struct LowerBoundFixture : TestWithParam<F> {
    const int    _a[4];
    const size_t _s;

    LowerBoundFixture () :
            _a {1, 3, 3, 5},
            _s (sizeof(_a) / sizeof(_a[0]))
        {}};

INSTANTIATE_TEST_CASE_P(
            LowerBoundInstantiation,
 			LowerBoundFixture,
 			Values(
 			    lower_bound_recursion<const int*, int>,
 			    lower_bound_iteration<const int*, int>,
 			    lower_bound          <const int*, int>));

TEST_P(LowerBoundFixture, test_0) {
	ASSERT_EQ(GetParam()(_a, _a + _s, 0), _a);}

TEST_P(LowerBoundFixture, test_1) {
	ASSERT_EQ(GetParam()(_a, _a + _s, 1), _a);}

TEST_P(LowerBoundFixture, test_2) {
	ASSERT_EQ(GetParam()(_a, _a + _s, 2), _a + 1);}

TEST_P(LowerBoundFixture, test_3) {
	ASSERT_EQ(GetParam()(_a, _a + _s, 3), _a + 1);}

TEST_P(LowerBoundFixture, test_4) {
	ASSERT_EQ(GetParam()(_a, _a + _s, 4), _a + 3);}

TEST_P(LowerBoundFixture, test_5) {
	ASSERT_EQ(GetParam()(_a, _a + _s, 5), _a + 3);}

TEST_P(LowerBoundFixture, test_6) {
	ASSERT_EQ(GetParam()(_a, _a + _s, 6), _a + 4);}
