#!/usr/bin/env python3

# ---------------
# LowerBound1T.py
# ---------------

# https://docs.python.org/3.4/library/bisect.html
# http://docs.scipy.org/doc/numpy/reference/generated/numpy.searchsorted.html

from bisect   import bisect_left
from numpy    import searchsorted
from unittest import main, TestCase

from LowerBound1 import lower_bound_iteration, lower_bound_recursion

def bind (f) :
    class MyUnitTests (TestCase) :
        def setUp (self) :
            self.a = (1, 3, 3, 5)

        def test_0 (self) :
            self.assertEqual(f(self.a, 0), 0)

        def test_1 (self) :
            self.assertEqual(f(self.a, 1), 0)

        def test_2 (self) :
            self.assertEqual(f(self.a, 2), 1)

        def test_3 (self) :
            self.assertEqual(f(self.a, 3), 1)

        def test_4 (self) :
            self.assertEqual(f(self.a, 4), 3)

        def test_5 (self) :
            self.assertEqual(f(self.a, 5), 3)

        def test_6 (self) :
            self.assertEqual(f(self.a, 6), 4)

    return MyUnitTests

lower_bound_recursion_tests = bind(lower_bound_recursion)
lower_bound_iteration_tests = bind(lower_bound_iteration)
bisect_tests                = bind(bisect_left)
searchsorted_tests          = bind(searchsorted)

if __name__ == "__main__" :
    main()
