#include <iostream>
#include<cstring>

using namespace std;

int main()
{
	char c[101];
	int cnt = 0;
	scanf("%s", c);
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == 'c' && c[i + 1] == '=')
		{
			cnt++;
			i++;
		}
		else if (c[i] == 'c' && c[i + 1] == '-')
		{
			cnt++;
			i++;
		}
		else if (c[i] == 'd' && c[i + 1] == 'z' && c[i + 2] == '=')
		{
			cnt++;
			i += 2;
		}
		else if (c[i] == 'd' && c[i + 1] == '-')
		{
			cnt++;
			i++;
		}
		else if (c[i] == 'l' && c[i + 1] == 'j')
		{
			cnt++;
			i++;
		}
		else if (c[i] == 'n' && c[i + 1] == 'j')
		{
			cnt++;
			i++;
		}
		else if (c[i] == 's' && c[i + 1] == '=')
		{
			cnt++;
			i++;
		}
		else if (c[i] == 'z' && c[i + 1] == '=')
		{
			cnt++;
			i++;
		}
		else
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}