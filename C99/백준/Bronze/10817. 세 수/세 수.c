#include <stdio.h>

int main()
{
	int a[3], ch = 0;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	for (int i = 0; i < 3; i++)
    {
		for (int j = i + 1; j < 3; j++)
        {
			if (a[i] > a[j])
            {
				ch = a[i];
				a[i] = a[j];
				a[j] = ch;
			}
		}
	}
	printf("%d", a[1]);
	return 0;
}