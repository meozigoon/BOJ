#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main(void)
{
	int num;
	int ans = 0;
	int i;
	scanf("%d", &num);
	char* p = (char*)malloc(num * sizeof(char));
	scanf("%s", p);
	for (i = 0; i < num; i++)
	{
		if (p[i] == '0')
			ans += 0;
		else if (p[i] == '1')
			ans += 1;
		else if (p[i] == '2')
			ans += 2;
		else if (p[i] == '3')
			ans += 3;
		else if (p[i] == '4')
			ans += 4;
		else if (p[i] == '5')
			ans += 5;
		else if (p[i] == '6')
			ans += 6;
		else if (p[i] == '7')
			ans += 7;
		else if (p[i] == '8')
			ans += 8;
		else if (p[i] == '9')
			ans += 9;
	}
	printf("%d", ans);
	return 0;
}