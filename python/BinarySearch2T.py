#!/usr/bin/env python3

# ----------------
# BinarySearch2.py
# ----------------

# https://en.wikipedia.org/wiki/Binary_search_algorithm

from unittest import main, TestCase

from BinarySearch2 import                                 \
    binary_search_iteration_1, binary_search_iteration_2, \
    binary_search_recursion_1, binary_search_recursion_2

def bind (f) :
    class MyUnitTests (TestCase) :
        def setUp (self) :
            self.a = (1, 3, 3, 5)

        def test_0 (self) :
            self.assertFalse(f(lambda p : self.a[p] < 0, lambda p : 0 < self.a[p], 0, len(self.a)))

        def test_1 (self) :
            self.assertTrue (f(lambda p : self.a[p] < 1, lambda p : 1 < self.a[p], 0, len(self.a)))

        def test_2 (self) :
            self.assertFalse(f(lambda p : self.a[p] < 2, lambda p : 2 < self.a[p], 0, len(self.a)))

        def test_3 (self) :
            self.assertTrue (f(lambda p : self.a[p] < 3, lambda p : 3 < self.a[p], 0, len(self.a)))

        def test_4 (self) :
            self.assertFalse(f(lambda p : self.a[p] < 4, lambda p : 4 < self.a[p], 0, len(self.a)))

        def test_5 (self) :
            self.assertTrue (f(lambda p : self.a[p] < 5, lambda p : 5 < self.a[p], 0, len(self.a)))

        def test_6 (self) :
            self.assertFalse(f(lambda p : self.a[p] < 6, lambda p : 6 < self.a[p], 0, len(self.a)))

    return MyUnitTests

binary_search_recursion_1_tests = bind(binary_search_recursion_1)
binary_search_iteration_1_tests = bind(binary_search_iteration_1)

binary_search_recursion_2_tests = bind(binary_search_recursion_2)
binary_search_iteration_2_tests = bind(binary_search_iteration_2)

if __name__ == "__main__" :
    main()
