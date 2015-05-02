#!/usr/bin/env python3

# ---------
# Sieve1.py
# ---------

from math import sqrt

def sieve (n) :
    assert n >= 2
    x = (n + 1) * [True]
    x[1] = False
    for i in range(4, n + 1, 2) :
        x[i] = False
    for i in range(3, int(sqrt(n)) + 1, 2) :
        if x[i] :
            for j in range(i ** 2, n + 1, 2 * i) :
                x[j] = False
    return x
