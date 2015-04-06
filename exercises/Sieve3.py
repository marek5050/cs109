#!/usr/bin/env python3

# ---------
# Sieve3.py
# ---------

# https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

from math     import sqrt
from unittest import main, TestCase

class MyUnitTestss (TestCase) :
    def setUp (self) :
        self.a = [1, 2, 3, 2, 5, 2, 7, 2, 3, 2, 11]

    def test_2 (self) :
        self.assertEqual(sieve(2), self.a[:2])

    def test_3 (self) :
        self.assertEqual(sieve(3), self.a[:3])

    def test_4 (self) :
        self.assertEqual(sieve(4), self.a[:4])

    def test_5 (self) :
        self.assertEqual(sieve(5), self.a[:5])

    def test_6 (self) :
        self.assertEqual(sieve(6), self.a[:6])

    def test_7 (self) :
        self.assertEqual(sieve(7), self.a[:7])

    def test_8 (self) :
        self.assertEqual(sieve(8), self.a[:8])

    def test_9 (self) :
        self.assertEqual(sieve(9), self.a[:9])

    def test_10 (self) :
        self.assertEqual(sieve(10), self.a[:10])

    def test_11 (self) :
        self.assertEqual(sieve(11), self.a[:11])

if __name__ == "__main__" :
    main()
