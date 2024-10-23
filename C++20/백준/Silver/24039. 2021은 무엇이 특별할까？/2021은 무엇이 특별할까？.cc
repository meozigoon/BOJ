#include <iostream>
#include <cmath>

using namespace std;

bool is(int num)
{
    if (num == 2)
        return true;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0) 
           return false;
    return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	int last = 0;
	int i = 2;
	int sum;
	while(1)
    {
		if(is(i))
        {
			sum = last * i;
			if(sum > n)
				break;
			last = i;
		}
		i++;
	}
	cout << sum << '\n';
}