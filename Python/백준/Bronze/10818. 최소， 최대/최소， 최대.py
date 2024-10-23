a=input()
b=input()
c=b.split(' ')
d=int(c[0])
e=int(c[0])
for i in range(int(a)):
    if d<int(c[i]):
        d=int(c[i])
    if e>int(c[i]):
        e=int(c[i])
print(str(e)+' '+str(d))