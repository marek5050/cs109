// ----------
// Sieve3.c++
// ----------

// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

#include <algorithm> // equal
#include <cassert>   // assert
#include <cmath>     // sqrt
#include <cstddef>   // size_t
#include <iostream>  // cout, endl

using namespace std;

int main () {
    cout << "Sieve3.c++" << endl;

    int b[12] = {1, 2, 3, 2, 5, 2, 7, 2, 3, 2, 11};

    {
    const size_t s = 3;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 4;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 5;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 6;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 7;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 8;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 9;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 10;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    {
    const size_t s = 11;
          int    a[s];
    sieve(a, a + s);
    assert(equal(a + 1, a + s, b));
    }

    cout << "Done." << endl;
    return 0;}
