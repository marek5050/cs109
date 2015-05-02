// ------------
// IsPrime2.c++
// ------------

// https://en.wikipedia.org/wiki/Primality_test

#include <cassert>  // assert
#include <iostream> // cout, endl

#include "IsPrime2.h"

int main () {
    using namespace std;
    cout << "IsPrime2.c++" << endl;

    assert(!is_prime(1));
    assert( is_prime(2));
    assert( is_prime(3));
    assert(!is_prime(4));
    assert( is_prime(5));
    assert( is_prime(7));
    assert(!is_prime(9));
    assert(!is_prime(27));
    assert( is_prime(29));

    cout << "Done." << endl;
    return 0;}

/*
% IsPrime2
IsPrime2.c++
Done.



% gcov -b IsPrime2.c++ | grep -A 5 "File 'IsPrime2.c++'"
File 'IsPrime2.c++'
Lines executed:100.00% of 19
Branches executed:100.00% of 28
Taken at least once:64.29% of 28
No calls
IsPrime2.c++:creating 'IsPrime2.c++.gcov'
*/
