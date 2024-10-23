#include <stdio.h>
#include<string.h>

int main()
{
	int i;
	int j;
	int num;
	int cnt = 0;
	int calc = 0;
	char ch[80];
	int sc[100];
	scanf("%d", &num);
	for (j = 0; j < num; j++)
	{
		cnt = 0;
		calc = 0;
		scanf("%s", ch);
		for (i = 0; i < strlen(ch); i++)
		{
			if (ch[i] == 'O')
			{
				cnt++;
				calc += cnt;
			}
			else if (ch[i] == 'X')
			{
				cnt = 0;
			}
		}
		sc[j] = calc;
	}
	for (i = 0; i < num; i++)
	{
		printf("%d\n", sc[i]);
	}
	return 0;
}