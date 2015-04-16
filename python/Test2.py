#!/usr/bin/env python3

# --------
# Test2.py
# --------

from unittest import main, TestCase

class MyUnitTestss (TestCase) :
    def test (self) :
        self.assertEqual(2, 2)

if __name__ == "__main__" :
    main()
