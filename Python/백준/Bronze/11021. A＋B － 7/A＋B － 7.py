a=int(input())
for i in range(1, a+1):
    b=input()
    c=b.split(' ')
    print('Case #'+str(i)+':'+' '+str(int(c[0])+int(c[1])))