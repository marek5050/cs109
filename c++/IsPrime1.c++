// ------------
// IsPrime1.c++
// ------------

// https://en.wikipedia.org/wiki/Primality_test

#include <cassert>  // assert
#include <iostream> // cout, endl

#include "IsPrime1.h"

int main () {
    using namespace std;
    cout << "IsPrime1.c++" << endl;

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

/*
% IsPrime1
IsPrime1.c++
Done.



% gcov -b IsPrime1.c++ | grep -A 5 "File 'IsPrime1.c++'"
File 'IsPrime1.c++'
Lines executed:100.00% of 19
Branches executed:100.00% of 28
Taken at least once:64.29% of 28
No calls
IsPrime1.c++:creating 'IsPrime1.c++.gcov'
*/
