#include<stdio.h>

int main()
{
	int b,d;
	int L=0,l=0;
    int i;
	for (i=0;i<3;i++)
    {
		scanf("%d",&b);
		if(L==0)
            L=b;
		if(L>b)
            L=b;
	}
	for (i=0;i<2;i++)
    {
		scanf("%d",&d);
		if(l==0)
            l=d;
		if(l>d)
            l=d;
	}
	printf("%d",L+l-50);
	return 0;
}