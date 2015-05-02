#!/usr/bin/env python

# -------
# GCDT.py
# -------

# https://docs.python.org/3.4/library/fractions.html

from fractions import gcd
from unittest  import main, TestCase

from GCD import gcd_iteration, gcd_recursion

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
