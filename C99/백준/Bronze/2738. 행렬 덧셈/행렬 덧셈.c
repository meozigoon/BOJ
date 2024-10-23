#include <stdio.h>

int main()
{
	int a[100][100];
	int b[100][100];
	int n,m;
    int i,j;
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			a[i][j] += b[i][j];
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}