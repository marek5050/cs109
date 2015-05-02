// ----------
// Sieve2.c++
// ----------

// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

#include <algorithm> // equal
#include <cassert>   // assert
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

#include "Sieve2.h"

using namespace std;

int main () {
    cout << "Sieve2.c++" << endl;

    const int a[12] = {1, 2, 3, 2, 5, 2, 7, 2, 3, 2, 11};

    {
    const int    n = 2;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 3;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 4;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 5;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 6;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 7;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 8;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 9;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 10;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 11;
    const size_t s = n + 1;
          int    x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    cout << "Done." << endl;
    return 0;}
