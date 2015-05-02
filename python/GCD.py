#!/usr/bin/env python

# ------
# GCD.py
# ------

def gcd_recursion (m, n) :
    assert (m >= 0) and (n >= 0)
    if m == 0 :
        return n
    return gcd_recursion(n % m, m)

def gcd_iteration (m, n) :
    assert (m >= 0) and (n >= 0)
    while m != 0 :
        m, n = n % m, m
    return n
