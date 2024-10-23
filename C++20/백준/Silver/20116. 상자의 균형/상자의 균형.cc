#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, L, tmp;
	double sum = 0;
	bool a =true;
	cin >> n >> L;
	vector<int> x;
	x.reserve(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		x.push_back(tmp);
		sum += tmp;
	}
	for (int i = 0; i < n-1; i++)
	{
		sum -= x[i];
		if (!(sum / (n - (i+1)) > x[i] - L && sum / (n-(i+1)) < x[i] + L))
		{
			a = false;
			break;
		}
	}
	cout << ((a==true)?"stable" :"unstable");
	return 0;
}