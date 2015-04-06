// --------------
// LowerBound.c++
// --------------

#include <algorithm> // lower_bound
#include <cassert>   // assert
#include <iostream>  // cout, endl

using namespace std;

int main () {
    cout << "LowerBound.c++" << endl;

    const int    a[] = {1, 3, 3, 5};
    const size_t s   = sizeof(a) / sizeof(a[0]);

    assert(lower_bound(a, a + s, 0) == a);
    assert(lower_bound(a, a + s, 1) == a);
    assert(lower_bound(a, a + s, 2) == a + 1);
    assert(lower_bound(a, a + s, 3) == a + 1);
    assert(lower_bound(a, a + s, 4) == a + 3);
    assert(lower_bound(a, a + s, 5) == a + 3);
    assert(lower_bound(a, a + s, 6) == a + 4);

    cout << "Done." << endl;
    return 0;}
