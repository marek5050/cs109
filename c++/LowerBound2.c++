// ---------------
// LowerBound2.c++
// ---------------

// http://www.cplusplus.com/reference/algorithm/lower_bound/

#include <cassert>  // assert
#include <iostream> // cout, endl

#include "LowerBound2.h"

using namespace std;

template <typename F>
void test (F f) {
    const int    a[] = {1, 3, 3, 5};
    const size_t s   = sizeof(a) / sizeof(a[0]);

    assert(f(a, a + s, [] (int v) -> bool {return v < 0;}) == a);
    assert(f(a, a + s, [] (int v) -> bool {return v < 1;}) == a);
    assert(f(a, a + s, [] (int v) -> bool {return v < 2;}) == a + 1);
    assert(f(a, a + s, [] (int v) -> bool {return v < 3;}) == a + 1);
    assert(f(a, a + s, [] (int v) -> bool {return v < 4;}) == a + 3);
    assert(f(a, a + s, [] (int v) -> bool {return v < 5;}) == a + 3);
    assert(f(a, a + s, [] (int v) -> bool {return v < 6;}) == a + 4);}

int main () {
    cout << "LowerBound2.c++" << endl;

    test(lower_bound_recursion<const int*, bool (int)>);
    test(lower_bound_iteration<const int*, bool (int)>);

    cout << "Done." << endl;
    return 0;}
