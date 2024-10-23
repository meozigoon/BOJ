a=input()
b=a.split(' ')
A=int(b[0])
B=int(b[1])
if A>B:
    print('>')
elif A<B:
    print('<')
else:
    print('==')