// -----------------
// BinarySearch3.c++
// -----------------

#include <algorithm> // binary_search, lower_bound
#include <cassert>   // assert
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

using namespace std;

template <typename RI, typename F, typename G>
bool binary_search_recursion_1 (RI b, RI e, F f, G g) {
    if (b == e)
        return false;
    const RI p = b + ((e - b) / 2);
    assert((p >= b) && (p < e));
    if (f(*p))
        return binary_search_recursion_1(p + 1, e, f, g);
    if (g(*p))
        return binary_search_recursion_1(b,     p, f, g);
    return true;;}

template <typename RI, typename F, typename G>
bool binary_search_iteration_1 (RI b, RI e, F f, G g) {
    while (b != e) {
        const RI p = b + ((e - b) / 2);
        assert((p >= b) && (p < e));
        if (f(*p))
            b = p + 1;
        else if (g(*p))
            e = p;
        else
            return true;}
    return false;}

template <typename RI, typename F>
RI lower_bound_recursion (RI b, RI e, F f) {
    if (b == e)
        return b;
    const RI p = b + ((e - b) / 2);
    assert((p >= b) && (p < e));
    if (f(*p))
        return lower_bound_recursion(p + 1, e, f);
    return lower_bound_recursion(b, p, f);}

template <typename RI, typename F>
RI lower_bound_iteration (RI b, RI e, F f) {
    while (b != e) {
        const RI p = b + (e - b) / 2;
        assert((p >= b) && (p < e));
        if (f(*p))
            b = p + 1;
        else
            e = p;}
    return b;}

template <typename RI, typename F, typename G>
bool binary_search_recursion_2 (RI b, RI e, F f, G g) {
    const RI p = lower_bound_recursion(b, e, f);
    return (p != e) && !g(*p);}

template <typename RI, typename F, typename G>
bool binary_search_iteration_2 (RI b, RI e, F f, G g) {
    const RI p = lower_bound_recursion(b, e, f);
    return (p != e) && !g(*p);}

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
