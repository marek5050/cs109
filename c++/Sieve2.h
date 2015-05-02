// --------
// Sieve2.h
// --------

#ifndef Sieve2_h
#define Sieve2_h

#include <cassert> // assert
#include <cmath>   // sqrt

template <typename T, typename OI>
void sieve (const T& n, OI x) {
    assert(n >= 2);
    for (int i = 1; i < (n + 1); i += 2)
        x[i] = i;
    for (int i = 2; i < (n + 1); i += 2)
        x[i] = 2;
    for (int i = 3; i < (std::sqrt(n) + 1); i += 2)
        if (x[i])
            for (int j = (i * i); j < (n + 1); j += (2 * i))
                x[j] = i;}

#endif // Sieve2_h
