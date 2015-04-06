// ---------------
// LowerBound3.c++
// ---------------

#include <cassert>  // assert
#include <iostream> // cout, endl

using namespace std;

template <typename RI, typename F>
RI lower_bound_recursion (RI b, RI e, F f) {
    if (b == e)
        return b;
    const RI p = b + ((e - b) / 2);
    assert((p >= b) && (p < e));
    if (f(p))
        return lower_bound_recursion(p + 1, e, f);
    return lower_bound_recursion(b, p, f);}

template <typename RI, typename F>
RI lower_bound_iteration (RI b, RI e, F f) {
    while (b != e) {
        const RI p = b + (e - b) / 2;
        assert((p >= b) && (p < e));
        if (f(p))
            b = p + 1;
        else
            e = p;}
    return b;}

template <typename F>
void test (F f) {
    const int    a[] = {1, 3, 3, 5};
    const size_t s   = sizeof(a) / sizeof(a[0]);

    assert(f(a, a + s, [] (const int* p) -> bool {return *p < 0;}) == a);
    assert(f(a, a + s, [] (const int* p) -> bool {return *p < 1;}) == a);
    assert(f(a, a + s, [] (const int* p) -> bool {return *p < 2;}) == a + 1);
    assert(f(a, a + s, [] (const int* p) -> bool {return *p < 3;}) == a + 1);
    assert(f(a, a + s, [] (const int* p) -> bool {return *p < 4;}) == a + 3);
    assert(f(a, a + s, [] (const int* p) -> bool {return *p < 5;}) == a + 3);
    assert(f(a, a + s, [] (const int* p) -> bool {return *p < 6;}) == a + 4);}

int main () {
    cout << "LowerBound3.c++" << endl;

    test(lower_bound_recursion<const int*, bool (const int*)>);
    test(lower_bound_iteration<const int*, bool (const int*)>);

    cout << "Done." << endl;
    return 0;}
