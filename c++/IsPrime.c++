// -----------
// IsPrime.c++
// -----------

// https://en.wikipedia.org/wiki/Primality_test

#include <cassert>  // assert
#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << "IsPrime.c++" << endl;

    assert(!is_prime(1));
    assert(!is_prime(2));
    assert( is_prime(3));
    assert(!is_prime(4));
    assert( is_prime(5));
    assert( is_prime(7));
    assert( is_prime(9));
    assert(!is_prime(27));
    assert( is_prime(29));

    cout << "Done." << endl;
    return 0;}
