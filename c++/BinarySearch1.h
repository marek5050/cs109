// ---------------
// BinarySearch1.h
// ---------------

#ifndef BinarySearch1_h
#define BinarySearch1_h

#include <cassert> // assert

#include "LowerBound1.h"

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
bool binary_search_recursion_2 (RI b, RI e, const T& v) {
    const RI p = lower_bound_recursion(b, e, v);
    return (p != e) && !(v < *p);}

template <typename RI, typename T>
bool binary_search_iteration_2 (RI b, RI e, const T& v) {
    const RI p = lower_bound_iteration(b, e, v);
    return (p != e) && !(v < *p);}

#endif // BinarySearch1_h
