#include <iostream>

using namespace std;

int main(void)
{
	int tmp = 0;
	int i;
	int n;
	cin >> n;
	for (i = 0; 1; i++)
	{
		tmp += i;
		if (tmp >= n)
		{
			tmp -= i;
			break;
		}
	}
	tmp = n - tmp;
	cout << ((i%2 == 0) ? tmp : (i- tmp+1)) <<"/" << ((i % 2 == 0) ? (i - tmp +1) : tmp);
}