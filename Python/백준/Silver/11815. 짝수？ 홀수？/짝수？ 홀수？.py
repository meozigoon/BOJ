count = int(input())
num = input()
num = num.split()
num = list(map(int, num))

for i in range(count):
    if num[i] == (int(num[i] ** 0.5) ** 2):
        print(1, end = " ")
    else:
        print(0, end = " ")