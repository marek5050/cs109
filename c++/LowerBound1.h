// -------------
// LowerBound1.h
// -------------

#ifndef LowerBound1_h
#define LowerBound1_h

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

#endif // LowerBound1_h
