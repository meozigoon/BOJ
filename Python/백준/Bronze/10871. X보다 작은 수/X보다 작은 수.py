a=input()
e=input()
b=a.split(' ')
f=e.split(' ')
c=int(b[0])
d=int(b[1])
for i in range(0, c):
    if int(f[i])<d:
        print(int(f[i]))