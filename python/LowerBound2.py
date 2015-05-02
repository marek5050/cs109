#!/usr/bin/env python3

# --------------
# LowerBound2.py
# --------------

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
