#include<stdio.h>
#include <stdlib.h>

void itoa_mf(int num, char *str)
{
	int sign = num;
	int i = 0;
	int j = 0;
	char temp[100];
	//          , -1234  1234
	if (sign < 0)
	{
		num = -num;
	}
	//     ，1234  "4321"
	do
	{
		temp[i] = num % 10 + '0';
		num /= 10;
		i++;
	} while (num > 0);
	//       ，       ， ："4321-"
	if (sign < 0)
	{
		temp[i++] = '-';
	}
	temp[i] = '\0';
	i--;
	// temp        str   
	// "4321-" ====> "-1234"
	while (i >= 0)
	{
		str[j] = temp[i];
		j++;
		i--;
	}
	//       
	str[j] = '\0';
}

int main(void)
{
	int m, n;
	int i = 0;
	scanf("%d %d", &m, &n);
	char a[21];
	if (m == 0)
	{
		a[0] = '0';
		i = 1;
	}
	for (i = i; m != 0; i++)
	{
		if(m % n < 10)itoa_mf(m % n, &a[i]);
		else
		{
			a[i] = m % n + 55;
		}
		m /= n;
	}

	for (i = i - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}

	return 0;
}