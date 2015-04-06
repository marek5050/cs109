// --------
// GCD2.c++
// --------

#include <cassert>  // assert
#include <iostream> // cout, endl

#include "boost/math/common_factor.hpp" // gcd

using namespace std;
using namespace boost::math;

template <typename T>
T gcd_recursion (const T& m, const T& n) {
    assert((m >= 0) && (n >= 0));
    if (m == 0)
        return n;
    return gcd_recursion(n % m, m);}

template <typename T>
T gcd_iteration (const T& m, const T& n) {
    assert((m >= 0) && (n >= 0));
    while (m) {
        const T t = m;
        m = n % m;
        n = t;}
    return n;}

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
    test(gcd_recursion<int>);
    test(gcd          <int>);

    cout << "Done." << endl;
    return 0;}
