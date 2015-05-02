// --------
// Sieve1.h
// --------

#ifndef Sieve1_h
#define Sieve1_h

#include <algorithm> // fill
#include <cassert>   // assert
#include <cmath>     // sqrt

template <typename T, typename OI>
void sieve (const T& n, OI x) {
    assert(n >= 2);
    std::fill(x, x + n + 1, true);
    x[1] = false;
    for (int i = 4; i < (n + 1); i += 2)
        x[i] = false;
    for (int i = 3; i < (std::sqrt(n) + 1); i += 2)
        if (x[i])
            for (int j = (i * i); j < (n + 1); j += (2 * i))
                x[j] = false;}

#endif // Sieve1_h
