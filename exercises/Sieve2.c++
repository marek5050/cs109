// ----------
// Sieve2.c++
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
    fill(x, x + n + 1, true);
    x[1] = false;
    for (int i = 4; i < (n + 1); i += 2)
        x[i] = false;
    for (int i = 3; i < (sqrt(n) + 1); i += 2)
        if (x[i])
            for (int j = (i * i); j < (n + 1); j += i)
                x[j] = false;}

int main () {
    cout << "Sieve2.c++" << endl;

    const int a[12] = {false, true, true, false, true, false, true, false, false, false, true};

    {
    const int    n = 2;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 3;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 4;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 5;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 6;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 7;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 8;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 9;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 10;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    {
    const int    n = 11;
    const size_t s = n + 1;
          bool   x[s];
    sieve(n, x);
    assert(equal(x + 1, x + s, a));
    }

    cout << "Done." << endl;
    return 0;}
