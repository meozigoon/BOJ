#include <stdio.h>
#include<math.h>

int main()
{
	int sum = 0, a[6];
    int i;
    for(i=0;i<6;i++)
    {
        a[i]=0;
    }
	for (i = 0; i < 6; i++)
    {
		scanf("%1d", &a[i]);
		sum += pow(a[i], 5);
	}
	printf("%d", sum);
    return 0;
}