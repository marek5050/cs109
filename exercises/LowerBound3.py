#!/usr/bin/env python3

# --------------
# LowerBound3.py
# --------------

from unittest import main, TestCase

def lower_bound_recursion (f, b, e) :
    if b == e :
        return b
    p = (b + e) // 2
    assert (p >= b) and (p < e)
    if f(p) :
        return lower_bound_recursion(f, p + 1, e)
    return lower_bound_recursion(f, b, p)

def lower_bound_iteration (f, b, e) :
    while b != e :
        p = (b + e) // 2
        assert (p >= b) and (p < e)
        if f(p) :
            b = p + 1
        else :
            e = p
    return b

def bind (f) :
    class MyUnitTests (TestCase) :
        def setUp (self) :
            self.a = (1, 3, 3, 5)

        def test_0 (self) :
            self.assertEqual(f(lambda p : self.a[p] < 0, 0, len(self.a)), 0)

        def test_1 (self) :
            self.assertEqual(f(lambda p : self.a[p] < 1, 0, len(self.a)), 0)

        def test_2 (self) :
            self.assertEqual(f(lambda p : self.a[p] < 2, 0, len(self.a)), 1)

        def test_3 (self) :
            self.assertEqual(f(lambda p : self.a[p] < 3, 0, len(self.a)), 1)

        def test_4 (self) :
            self.assertEqual(f(lambda p : self.a[p] < 4, 0, len(self.a)), 3)

        def test_5 (self) :
            self.assertEqual(f(lambda p : self.a[p] < 5, 0, len(self.a)), 3)

        def test_6 (self) :
            self.assertEqual(f(lambda p : self.a[p] < 6, 0, len(self.a)), 4)

    return MyUnitTests

lower_bound_recursion_tests = bind(lower_bound_recursion)
lower_bound_iteration_tests = bind(lower_bound_iteration)

if __name__ == "__main__" :
    main()
