// ---------------
// BinarySearch2.h
// ---------------

#ifndef BinarySearch2_h
#define BinarySearch2_h

#include <cassert> // assert

#include "LowerBound2.h"

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

template <typename RI, typename F, typename G>
bool binary_search_recursion_2 (RI b, RI e, F f, G g) {
    const RI p = lower_bound_recursion(b, e, f);
    return (p != e) && !g(*p);}

template <typename RI, typename F, typename G>
bool binary_search_iteration_2 (RI b, RI e, F f, G g) {
    const RI p = lower_bound_iteration(b, e, f);
    return (p != e) && !g(*p);}

#endif // BinarySearch2_h
