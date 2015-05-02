// -----------------
// BinarySearch2.c++
// -----------------

// http://www.cplusplus.com/reference/algorithm/binary_search/

#include <cassert>  // assert
#include <cstddef>  // size_t
#include <iostream> // cout, endl

#include "BinarySearch2.h"

using namespace std;

template <typename F>
void test (F f) {
    const int    a[] = {1, 3, 3, 5};
    const size_t s   = sizeof(a) / sizeof(a[0]);

    assert(f(a, a + s, [] (int v) -> bool {return v < 0;}, [] (int v) -> bool {return 0 < v;}) == false);
    assert(f(a, a + s, [] (int v) -> bool {return v < 1;}, [] (int v) -> bool {return 1 < v;}) == true);
    assert(f(a, a + s, [] (int v) -> bool {return v < 2;}, [] (int v) -> bool {return 2 < v;}) == false);
    assert(f(a, a + s, [] (int v) -> bool {return v < 3;}, [] (int v) -> bool {return 3 < v;}) == true);
    assert(f(a, a + s, [] (int v) -> bool {return v < 4;}, [] (int v) -> bool {return 4 < v;}) == false);
    assert(f(a, a + s, [] (int v) -> bool {return v < 5;}, [] (int v) -> bool {return 5 < v;}) == true);
    assert(f(a, a + s, [] (int v) -> bool {return v < 6;}, [] (int v) -> bool {return 6 < v;}) == false);}

int main () {
    cout << "BinarySearch2.c++" << endl;

    test(binary_search_recursion_1<const int*, bool (int), bool (int)>);
    test(binary_search_iteration_1<const int*, bool (int), bool (int)>);

    test(binary_search_recursion_2<const int*, bool (int), bool (int)>);
    test(binary_search_iteration_2<const int*, bool (int), bool (int)>);

    cout << "Done." << endl;
    return 0;}
