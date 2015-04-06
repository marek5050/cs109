#!/usr/bin/env python

# -------
# GCD2.py
# -------

from fractions import gcd
from unittest  import main, TestCase

def gcd_recursion (m, n) :
    assert (m >= 0) and (n >= 0)
    if m == 0 :
        return n
    return gcd(n % m, m)

def gcd_iteration (m, n) :
    assert (m >= 0) and (n >= 0)
    while m != 0 :
        m, n = n % m, m
    return n

def bind (f) :
    class MyUnitTests (TestCase) :
        def test_0 (self) :
            self.assertEqual(f(0, 0), 0)

        def test_1 (self) :
            self.assertEqual(f(0, 1), 1)

        def test_2 (self) :
            self.assertEqual(f(1, 0), 1)

        def test_3 (self) :
            self.assertEqual(f(6, 9), 3)

        def test_4 (self) :
            self.assertEqual(f(9, 6), 3)

        def test_5 (self) :
            self.assertEqual(f(21, 35), 7)

        def test_6 (self) :
            self.assertEqual(f(35, 21), 7)

        def test_7 (self) :
            self.assertEqual(f(22, 35), 1)

    return MyUnitTests

gcd_recursion_tests = bind(gcd_recursion)
gcd_iteration_tests = bind(gcd_iteration)
gcd_tests           = bind(gcd)

if __name__ == "__main__" :
    main()
