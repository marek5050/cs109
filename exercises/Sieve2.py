#!/usr/bin/env python3

# --------
# Sieve.py
# --------

from math     import sqrt
from unittest import main, TestCase

def sieve (n) :
    assert n >= 0
    a = [True] * (n + 1)
    if n == 0 :
        return a[1:]
    a[1] = False
    if n == 1 :
        return a[1:]
    a[2] = True
    for i in range(4, n + 1, 2) :
        a[i] = False
    for i in range(3, int(sqrt(n)) + 1, 2) :
        j = i
        while j <= n :
            a[j]  = False
            j    += i
    return a[1:]

class MyUnitTestss (TestCase) :
    def test_0 (self) :
        self.assertEqual(sieve(0), [])

    def test_1 (self) :
        self.assertEqual(sieve(1), [False])

    def test_2 (self) :
        self.assertEqual(sieve(2), [False, True])

    def test_3 (self) :
        self.assertEqual(sieve(3), [False, True, True])

    def test_4 (self) :
        self.assertEqual(sieve(4), [False, True, True, False])

    def test_5 (self) :
        self.assertEqual(sieve(5), [False, True, True, False, True])

    def test_6 (self) :
        self.assertEqual(sieve(6), [False, True, True, False, True, False])

    def test_7 (self) :
        self.assertEqual(sieve(7), [False, True, True, False, True, False, True])

    def test_8 (self) :
        self.assertEqual(sieve(8), [False, True, True, False, True, False, True, False])

    def test_9 (self) :
        self.assertEqual(sieve(9), [False, True, True, False, True, False, True, False, False])
"""
    def test_10 (self) :
        self.assertEqual(sieve(10), [False, True, True, False, True, False, True, False, False, False])

    def test_11 (self) :
        self.assertEqual(sieve(11), [False, True, True, False, True, False, True, False, False, False, True])
"""
if __name__ == "__main__" :
    main()
