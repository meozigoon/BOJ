a=int(input())
for i in range(1, a+1):
    b=input()
    c=b.split(' ')
    print('Case #'+str(i)+': '+c[0]+' + '+c[1]+' = '+str(int(c[0])+int(c[1])))