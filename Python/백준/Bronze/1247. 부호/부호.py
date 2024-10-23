import sys


for i in range(3):
    ans = 0
    n = int(sys.stdin.readline())
    for j in range(n):
        a = int(sys.stdin.readline())
        ans += a
    if ans < 0:
        print('-')
    elif ans == 0:
        print('0')
    elif ans > 0:
        print('+')