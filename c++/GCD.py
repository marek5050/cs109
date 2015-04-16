#!/usr/bin/env python

# ------
# GCD.py
# ------

from fractions import gcd
from unittest  import main, TestCase

class MyUnitTests (TestCase) :
    def test_0 (self) :
        self.assertEqual(gcd(0, 0), 0)

    def test_1 (self) :
        self.assertEqual(gcd(0, 1), 1)

    def test_2 (self) :
        self.assertEqual(gcd(1, 0), 1)

    def test_3 (self) :
        self.assertEqual(gcd(6, 9), 3)

    def test_4 (self) :
        self.assertEqual(gcd(9, 6), 3)

    def test_5 (self) :
        self.assertEqual(gcd(21, 35), 7)

    def test_6 (self) :
        self.assertEqual(gcd(35, 21), 7)

    def test_7 (self) :
        self.assertEqual(gcd(22, 35), 1)

if __name__ == "__main__" :
    main()
