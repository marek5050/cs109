// ---------------
// LowerBound2.c++
// ---------------

#include <algorithm> // lower_bound
#include <cassert>   // assert
#include <iostream>  // cout, endl

using namespace std;

template <typename RI, typename T>
RI lower_bound_recursion (RI b, RI e, const T& v) {
    if (b == e)
        return b;
    const RI p = b + ((e - b) / 2);
    assert((p >= b) && (p < e));
    if (*p < v)
        return lower_bound_recursion(p + 1, e, v);
    return lower_bound_recursion(b, p, v);}

template <typename RI, typename T>
RI lower_bound_iteration (RI b, RI e, const T& v) {
    while (b != e) {
        const RI p = b + (e - b) / 2;
        assert((p >= b) && (p < e));
        if (*p < v)
            b = p + 1;
        else
            e = p;}
    return b;}

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
    cout << "LowerBound2.c++" << endl;

    test(lower_bound_recursion<const int*, int>);
    test(lower_bound_iteration<const int*, int>);
    test(lower_bound          <const int*, int>);

    cout << "Done." << endl;
    return 0;}
