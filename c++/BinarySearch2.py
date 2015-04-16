#!/usr/bin/env python3

# ----------------
# BinarySearch2.py
# ----------------

from LowerBound2 import lower_bound_recursion, lower_bound_iteration
from unittest    import main, TestCase

def binary_search_recursion_1 (a, v, b = 0, e = None) :
    e = len(a) if e is None else e
    if b == e :
        return False
    p = (b + e) // 2
    assert (p >= b) and (p < e)
    if a[p] < v :
        return binary_search_recursion_1(a, v, p + 1, e)
    if v < a[p] :
        return binary_search_recursion_1(a, v, b,     p)
    return True

def binary_search_iteration_1 (a, v, b = 0, e = None) :
    e = len(a) if e is None else e
    while b != e :
        p = (b + e) // 2
        assert (p >= b) and (p < e)
        if a[p] < v :
            b = p + 1
        elif v < a[p] :
            e = p
        else :
            return True
    return False

def binary_search_recursion_2 (a, v, b = 0, e = None) :
    p = lower_bound_recursion(a, v, b, e)
    return (p != len(a)) and (not (v < a[p]))

def binary_search_iteration_2 (a, v, b = 0, e = None) :
    p = lower_bound_iteration(a, v, b, e)
    return (p != len(a)) and (not (v < a[p]))

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

        def test_2 (self) :
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
