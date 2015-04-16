// ----------
// Sieve4.c++
// ----------

// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

#include <algorithm> // equal, fill
#include <cassert>   // assert
#include <cmath>     // sqrt
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

using namespace std;

template <typename T, typename OI>
void sieve (const T& n, OI x) {
    assert(n >= 2);
    for (int i = 1; i < (n + 1); i += 2)
        x[i] = i;
    for (int i = 2; i < (n + 1); i += 2)
        x[i] = 2;
    for (int i = 3; i < (sqrt(n) + 1); i += 2)
        if (x[i])
            for (int j = (i * i); j < (n + 1); j += (2 * i))
                x[j] = i;}

int main () {
    cout << "Sieve4.c++" << endl;

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
