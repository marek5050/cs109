// -------
// GCD.c++
// -------

#include <cassert>  // assert
#include <iostream> // cout, endl

#include "boost/math/common_factor.hpp" // gcd

using namespace std;
using namespace boost::math;

int main () {
    cout << "GCD.c++" << endl;

    assert(gcd( 0,  0) ==   0);
    assert(gcd( 0,  1) ==   1);
    assert(gcd( 1,  0) ==   1);
    assert(gcd( 6,  9) ==   3);
    assert(gcd( 9,  6) ==   3);
    assert(gcd(21, 35) ==   7);
    assert(gcd(35, 21) ==   7);
    assert(gcd(22, 35) ==   1);

    cout << "Done." << endl;
    return 0;}
