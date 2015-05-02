#!/usr/bin/env python3

# --------------
# LowerBound1.py
# --------------

def lower_bound_recursion (a, v, b = 0, e = None) :
    e = len(a) if e is None else e
    if b == e :
        return b
    p = (b + e) // 2
    assert (p >= b) and (p < e)
    if a[p] < v :
        return lower_bound_recursion(a, v, p + 1, e)
    return lower_bound_recursion(a, v, b, p)

def lower_bound_iteration (a, v, b = 0, e = None) :
    e = len(a) if e is None else e
    while b != e :
        p = (b + e) // 2
        assert (p >= b) and (p < e)
        if a[p] < v :
            b = p + 1
        else :
            e = p
    return b
