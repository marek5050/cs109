// -------------
// LowerBound2.h
// -------------

#ifndef LowerBound2_h
#define LowerBound2_h

#include <cassert> // assert

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

#endif // LowerBound2_h
