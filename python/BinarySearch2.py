#!/usr/bin/env python3

# ----------------
# BinarySearch2.py
# ----------------

from LowerBound2 import lower_bound_recursion, lower_bound_iteration

def binary_search_recursion_1 (f, g, b, e) :
    e = len(a) if e is None else e
    if b == e :
        return False
    p = (b + e) // 2
    assert (p >= b) and (p < e)
    if f(p) :
        return binary_search_recursion_1(f, g, p + 1, e)
    if g(p) :
        return binary_search_recursion_1(f, g, b,     p)
    return True

def binary_search_iteration_1 (f, g, b, e) :
    e = len(a) if e is None else e
    while b != e :
        p = (b + e) // 2
        assert (p >= b) and (p < e)
        if f(p) :
            b = p + 1
        elif g(p) :
            e = p
        else :
            return True
    return False

def binary_search_recursion_2 (f, g, b, e) :
    p = lower_bound_recursion(f, b, e)
    return (p != e) and not g(p)

def binary_search_iteration_2 (f, g, b, e) :
    p = lower_bound_iteration(f, b, e)
    return (p != e) and not g(p)
