#include <iostream>

using namespace std;

int main(void)
{
	int k, cnt=1, num;
	bool sieve[7368788] = { false, };
	for(int i = 3; i < 7368788; i += 2)
		sieve[i] = true;
	for(int i = 3; i < 7368788; i += 2)
		if(sieve[i])
			for(int j = 2 * i; j < 7368788; j += i)
				sieve[j] = false;
	cin >> k;
	if(k == 1)
		cout << 2;
	else
	{
		for(num = 3; cnt < k; num += 2)
			cnt += sieve[num];
        cout << num - 2;
	}
}