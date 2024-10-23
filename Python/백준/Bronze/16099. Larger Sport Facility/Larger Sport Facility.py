t = int(input())

for i in range (t):
    lt, wt, le, we = map(int, input().split())
    if lt * wt > le * we :
        print("TelecomParisTech")
    elif lt * wt < le * we :
        print("Eurecom")
    else :
        print("Tie")