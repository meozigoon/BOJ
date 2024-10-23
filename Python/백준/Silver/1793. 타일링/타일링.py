num = [0 for i in range(251)]
num[1] = 1
num[2] = 3

def t(n):
    if n == 0:
        return 1
    if num[n] == 0:
        num[n] = t(n - 1) + t(n - 2) * 2
    return num[n]

while True:
    try:
        print(t(int(input())))
    except:
        break