from decimal import Decimal, getcontext

getcontext().prec = 1001
a, b = map(float, input().split())
print(Decimal(a) / Decimal(b))