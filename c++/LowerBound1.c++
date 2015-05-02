// --------------
// LowerBound.c++
// --------------

// http://www.cplusplus.com/reference/algorithm/lower_bound/

#include <algorithm> // lower_bound
#include <cassert>   // assert
#include <iostream>  // cout, endl

#include "LowerBound1.h"

using namespace std;

template <typename F>
void test (F f) {
    const int    a[] = {1, 3, 3, 5};
    const size_t s   = sizeof(a) / sizeof(a[0]);

    assert(f(a, a + s, 0) == a);
    assert(f(a, a + s, 1) == a);
    assert(f(a, a + s, 2) == a + 1);
    assert(f(a, a + s, 3) == a + 1);
    assert(f(a, a + s, 4) == a + 3);
    assert(f(a, a + s, 5) == a + 3);
    assert(f(a, a + s, 6) == a + 4);}

int main () {
    cout << "LowerBound.c++" << endl;

    test(lower_bound_recursion<const int*, int>);
    test(lower_bound_iteration<const int*, int>);
    test(lower_bound          <const int*, int>);

    cout << "Done." << endl;
    return 0;}
