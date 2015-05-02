// -------
// GCD.c++
// -------

// https://en.wikipedia.org/wiki/Greatest_common_divisor

#include <cassert>  // assert
#include <iostream> // cout, endl

#include "boost/math/common_factor.hpp" // gcd

#include "GCD.h"

using namespace std;
using namespace boost::math;

template <typename F>
void test (F f) {
    assert(f( 0,  0) ==   0);
    assert(f( 0,  1) ==   1);
    assert(f( 1,  0) ==   1);
    assert(f( 6,  9) ==   3);
    assert(f( 9,  6) ==   3);
    assert(f(21, 35) ==   7);
    assert(f(35, 21) ==   7);
    assert(f(22, 35) ==   1);}

int main () {
    cout << "GCD.c++" << endl;

    test(gcd_recursion<int>);
    test(gcd_iteration<int>);
    test(gcd          <int>);

    cout << "Done." << endl;
    return 0;}
