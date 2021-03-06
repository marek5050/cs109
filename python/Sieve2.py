#!/usr/bin/env python3

# ---------
# Sieve2.py
# ---------

from math import sqrt

def sieve (n) :
    assert n >= 2
    x = (n + 1) * [0]
    for i in range(1, n + 1, 2) :
        x[i] = i
    for i in range(2, n + 1, 2) :
        x[i] = 2
    for i in range(3, int(sqrt(n)) + 1, 2) :
        if x[i] :
            for j in range(i ** 2, n + 1, 2 * i) :
                x[j] = i
    return x
