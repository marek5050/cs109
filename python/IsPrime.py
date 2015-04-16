#!/usr/bin/env python3

# ----------
# IsPrime.py
# ----------

# https://en.wikipedia.org/wiki/Primality_test

from math     import sqrt
from unittest import main, TestCase

class MyUnitTests (TestCase) :
    def test_1 (self) :
        self.assertFalse(is_prime(1))

    def test_2 (self) :
        self.assertFalse(is_prime(2))

    def test_3 (self) :
        self.assertTrue(is_prime(3))

    def test_4 (self) :
        self.assertFalse(is_prime(4))

    def test_5 (self) :
        self.assertTrue(is_prime(5))

    def test_6 (self) :
        self.assertTrue(is_prime(7))

    def test_7 (self) :
        self.assertTrue(is_prime(9))

    def test_8 (self) :
        self.assertFalse(is_prime(27))

    def test_9 (self) :
        self.assertTrue(is_prime(29))

if __name__ == "__main__" :
    main()
