// -----------------
// BinarySearch2.c++
// -----------------

#include <algorithm> // binary_search
#include <cassert>   // assert
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

using namespace std;

template <typename RI, typename T>
bool binary_search_recursion_1 (RI b, RI e, const T& v) {
    if (b == e)
        return false;
    const RI p = b + ((e - b) / 2);
    assert((p >= b) && (p < e));
    if (*p < v)
        return binary_search_recursion_1(p + 1, e, v);
    if (v < *p)
        return binary_search_recursion_1(b,     p, v);
    return true;;}

template <typename RI, typename T>
bool binary_search_iteration_1 (RI b, RI e, const T& v) {
    while (b != e) {
        const RI p = b + ((e - b) / 2);
        assert((p >= b) && (p < e));
        if (*p < v)
            b = p + 1;
        else if (v < *p)
            e = p;
        else
            return true;}
    return false;}

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

template <typename RI, typename T>
bool binary_search_recursion_2 (RI b, RI e, const T& v) {
    const RI p = lower_bound_recursion(b, e, v);
    return (p != e) && !(v < *p);}

template <typename RI, typename T>
bool binary_search_iteration_2 (RI b, RI e, const T& v) {
    const RI p = lower_bound_iteration(b, e, v);
    return (p != e) && !(v < *p);}

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
    cout << "BinarySearch2.c++" << endl;

    test(binary_search_recursion_1<const int*, int>);
    test(binary_search_iteration_1<const int*, int>);

    test(binary_search_recursion_2<const int*, int>);
    test(binary_search_iteration_2<const int*, int>);

    test(binary_search            <const int*, int>);

    cout << "Done." << endl;
    return 0;}
