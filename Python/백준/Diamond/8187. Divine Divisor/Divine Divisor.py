import sys
import random
import math
from collections import defaultdict

input = sys.stdin.readline

P = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]

def p(x, y, m):
    x %= m
    res = 1
    while y > 0:
        if y % 2:
            res = (res * x) % m
        x = (x * x) % m
        y //= 2
    return res

def mr(n, a):
    if a == n:
        return True
    k = n - 1
    while True:
        tmp = p(a, k, n)
        if tmp == n - 1:
            return True
        if k % 2 == 1:
            return tmp == 1 or tmp == n - 1
        k //= 2

def ip(n):
    if n in (2, 3):
        return True
    if n % 2 == 0:
        return False
    return all(mr(n, i) for i in P)

def f(x, c, n):
    return (x * x % n + c) % n

def pr(n):
    if n % 2 == 0:
        return 2
    if ip(n):
        return n
    x = random.randint(2, n - 1)
    y = x
    c = random.randint(1, 10)
    g = 1
    while g == 1:
        x = f(x, c, n)
        y = f(f(y, c, n), c, n)
        g = math.gcd(abs(x - y), n)
        if g == n:
            return pr(n)
    return g if ip(g) else pr(g)

if __name__ == "__main__":
    n = int(input())
    d = list(map(int, input().split()))
    dd = defaultdict(int)
    for i in d:
        while i > 1:
            a = pr(i)
            dd[a] += 1
            i //= a
    ma = max(dd.values())
    cnt = sum(1 for v in dd.values() if v == ma)
    print(ma)
    print(2 ** cnt - 1)