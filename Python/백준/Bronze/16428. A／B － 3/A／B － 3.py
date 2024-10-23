a, b = map(int, input().split())
q = a // b
r = a % b
if a != 0 and r < 0:
    q += 1
    r -= b
print(q)
print(r)