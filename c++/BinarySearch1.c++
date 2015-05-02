// ----------------
// BinarySearch.c++
// ----------------

// http://www.cplusplus.com/reference/algorithm/binary_search/

#include <algorithm> // binary_search
#include <cassert>   // assert
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

#include "BinarySearch1.h"

using namespace std;

template <typename F>
void test (F f) {
    const int    a[] = {1, 3, 3, 5};
    const size_t s   = sizeof(a) / sizeof(a[0]);

    assert(f(a, a + s, 0) == false);
    assert(f(a, a + s, 1) == true);
    assert(f(a, a + s, 2) == false);
    assert(f(a, a + s, 3) == true);
    assert(f(a, a + s, 4) == false);
    assert(f(a, a + s, 5) == true);
    assert(f(a, a + s, 6) == false);}

int main () {
    cout << "BinarySearch.c++" << endl;

    test(binary_search_recursion_1<const int*, int>);
    test(binary_search_iteration_1<const int*, int>);

    test(binary_search_recursion_2<const int*, int>);
    test(binary_search_iteration_2<const int*, int>);

    test(binary_search            <const int*, int>);

    cout << "Done." << endl;
    return 0;}
