while True:
    a=input()
    b=a.split(' ')
    if a=='0 0':
        break
    print(int(b[0])+int(b[1]))