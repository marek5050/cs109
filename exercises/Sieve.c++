// ---------
// Sieve.c++
// ---------

// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

#include <cassert>  // assert
#include <cstddef>  // size_t
#include <iostream> // cout, endl

using namespace std;

int main () {
    cout << "Sieve.c++" << endl;

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
