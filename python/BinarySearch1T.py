#!/usr/bin/env python3

# ----------------
# BinarySearch1.py
# ----------------

# https://en.wikipedia.org/wiki/Binary_search_algorithm

from unittest import main, TestCase

from BinarySearch1 import                                 \
    binary_search_iteration_1, binary_search_iteration_2, \
    binary_search_recursion_1, binary_search_recursion_2

def bind (f) :
    class MyUnitTests (TestCase) :
        def setUp (self) :
            self.a = (1, 3, 3, 5)

        def test_0 (self) :
            self.assertFalse(f(self.a, 0))

        def test_1 (self) :
            self.assertTrue (f(self.a, 1))

        def test_2 (self) :
            self.assertFalse(f(self.a, 2))

        def test_3 (self) :
            self.assertTrue (f(self.a, 3))

        def test_4 (self) :
            self.assertFalse(f(self.a, 4))

        def test_5 (self) :
            self.assertTrue (f(self.a, 5))

        def test_6 (self) :
            self.assertFalse(f(self.a, 6))

    return MyUnitTests

binary_search_recursion_1_tests = bind(binary_search_recursion_1)
binary_search_iteration_1_tests = bind(binary_search_iteration_1)

binary_search_recursion_2_tests = bind(binary_search_recursion_2)
binary_search_iteration_2_tests = bind(binary_search_iteration_2)

if __name__ == "__main__" :
    main()
