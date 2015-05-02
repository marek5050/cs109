// -----
// GCD.h
// -----

#ifndef GCD_h
#define GCD_h

#include <cassert> // assert

template <typename T>
T gcd_recursion (const T& m, const T& n) {
    assert((m >= 0) && (n >= 0));
    if (m == 0)
        return n;
    return gcd_recursion(n % m, m);}

template <typename T>
T gcd_iteration (T m, T n) {
    assert((m >= 0) && (n >= 0));
    while (m) {
        const T t = m;
        m = n % m;
        n = t;}
    return n;}

#endif // GCD_h
