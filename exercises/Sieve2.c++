// ----------
// Sieve2.c++
// ----------

// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

#include <algorithm> // equal, fill
#include <cassert>   // assert
#include <cmath>     // pow, sqrt
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

using namespace std;

template <typename RI>
void sieve (RI b, RI e) {
    assert((e - b) >= 3);
    fill(b, e, true);
    b[1] = false;
    for (RI p = b + 4; p < e; p += 2)
        *p = false;
    for (RI p = b + 3; p < (b + static_cast<int>(sqrt(e - b - 1)) + 1); p += 2)
        if (*p) {
            auto d = p - b;
            for (RI q = b + static_cast<int>(pow(d, 2)); q < e; q += d)
                *q = false;}}

int main () {
    cout << "Sieve2.c++" << endl;

    int b[12] = {false, true, true, false, true, false, true, false, false, false, true};

    {
    const size_t s = 3;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 4;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 5;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 6;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 7;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 8;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 9;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 10;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 11;
          bool   a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    cout << "Done." << endl;
    return 0;}
