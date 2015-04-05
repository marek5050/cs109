#!/usr/bin/env python3

# --------
# Sieve.py
# --------

from math     import sqrt
from unittest import main, TestCase

def sieve (n) :
    a    = [1] * (n + 1)
    a[1] = 0
    a[2] = 1
    for i in range(4, n + 1, 2) :
        a[i] = 0
    for i in range(3, int(sqrt(n)) + 1, 2) :
        j = i
        while j <= n :
            a[j]  = 0
            j    *= i
    return a[1:]

print(sieve(11))

class MyUnitTestss (TestCase) :
    def test_0 (self) :
        self.assertEqual(sieve(0), [])

    def test_1 (self) :
        self.assertEqual(sieve(1), [0])

    def test_2 (self) :
        self.assertEqual(sieve(2), [0, 1])

    def test_3 (self) :
        self.assertEqual(sieve(3), [0, 1, 1])

    def test_4 (self) :
        self.assertEqual(sieve(4), [0, 1, 1, 0])

    def test_5 (self) :
        self.assertEqual(sieve(5), [0, 1, 1, 0, 1])

    def test_6 (self) :
        self.assertEqual(sieve(6), [0, 1, 1, 0, 1, 0])

    def test_7 (self) :
        self.assertEqual(sieve(7), [0, 1, 1, 0, 1, 0, 1])

    def test_8 (self) :
        self.assertEqual(sieve(8), [0, 1, 1, 0, 1, 0, 1, 0])

    def test_9 (self) :
        self.assertEqual(sieve(9), [0, 1, 1, 0, 1, 0, 1, 0, 0])

    def test_10 (self) :
        self.assertEqual(sieve(10), [0, 1, 1, 0, 1, 0, 1, 0, 0, 0])

    def test_11 (self) :
        self.assertEqual(sieve(11), [0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1])

#if __name__ == "__main__" :
#    main()
