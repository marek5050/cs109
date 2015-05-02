#!/usr/bin/env python3

# ----------------
# BinarySearch1.py
# ----------------

from LowerBound1 import lower_bound_iteration, lower_bound_recursion

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
