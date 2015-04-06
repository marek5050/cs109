#!/usr/bin/env python3

# ---------------
# BinarySearch.py
# ---------------

from unittest import main, TestCase

class MyUnitTestss (TestCase) :
    def setUp (self) :
        self.a = (1, 3, 3, 5)

    def test_0 (self) :
        self.assertFalse(binary_search(self.a, 0))

    def test_1 (self) :
        self.assertTrue (binary_search(self.a, 1))

    def test_2 (self) :
        self.assertFalse(binary_search(self.a, 2))

    def test_3 (self) :
        self.assertTrue (binary_search(self.a, 3))

    def test_4 (self) :
        self.assertFalse(binary_search(self.a, 4))

    def test_5 (self) :
        self.assertTrue (binary_search(self.a, 5))

    def test_6 (self) :
        self.assertFalse(binary_search(self.a, 6))

if __name__ == "__main__" :
    main()
