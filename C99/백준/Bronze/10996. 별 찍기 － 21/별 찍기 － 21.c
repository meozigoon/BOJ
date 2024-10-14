#include <stdio.h>

int main()
{
    int a;
	int i, j, b;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		int k;
	int f = 0; 
	f = a % 2;
	int p = a;
	int count=0;

	while (p > 1)
	{
		p = p - 2;
		count++;
	}

	if (f == 0)
	{
		for (k =0 ; k < count; k++ )
			printf("* ");
		printf("\n");
		for (k = 0; k < count; k++)
			printf(" *");
	}
	else if (f==1)
	{
		for (k = 0; k < count+1; k++)
			printf("* ");
		if(a!=1)
		printf("\n");
		for (k = 0; k < count; k++)
			printf(" *");

	}
		if (i == a)
			break;
		printf("\n");
	}
return 0;
}