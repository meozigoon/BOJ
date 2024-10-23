c=input()
d=c.split(' ')
a = int(d[0])
b = int(d[1])
if a==0 and b<45:
    print(a+23)
    print(60+b-45)
elif b<45:
    print(a-1)
    print(60+b-45)
elif b>=45:
    print(a)
    print(b-45)    