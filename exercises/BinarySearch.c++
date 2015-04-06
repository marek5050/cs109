// ----------------
// BinarySearch.c++
// ----------------

#include <algorithm> // binary_search
#include <cassert>   // assert
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

using namespace std;

int main () {
    cout << "BinarySearch.c++" << endl;

    const int    a[] = {1, 3, 3, 5};
    const size_t s   = sizeof(a) / sizeof(a[0]);

    assert(binary_search(a, a + s, 0) == false);
    assert(binary_search(a, a + s, 1) == true);
    assert(binary_search(a, a + s, 2) == false);
    assert(binary_search(a, a + s, 3) == true);
    assert(binary_search(a, a + s, 4) == false);
    assert(binary_search(a, a + s, 5) == true);
    assert(binary_search(a, a + s, 6) == false);

    cout << "Done." << endl;
    return 0;}
