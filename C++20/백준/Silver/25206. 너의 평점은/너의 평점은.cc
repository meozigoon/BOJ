#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

struct P
{
	double g;
	double p;
};

double sp, spg;

void ans(P p)
{
	sp += p.p;
	spg += p.p * p.g;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s, g;
	P tmp;
	vector<P> p;
	while (cin >> s)
	{
		cin >> tmp.p >> g;
		if (g == "A+")
			tmp.g = 4.5;
		else if (g == "A0")
			tmp.g = 4.0;
		else if (g == "B+")
			tmp.g = 3.5;
		else if (g == "B0")
			tmp.g = 3.0;
		else if (g == "C+")
			tmp.g = 2.5;
		else if (g == "C0")
			tmp.g = 2.0;
		else if (g == "D+")
			tmp.g = 1.5;
		else if (g == "D0")
			tmp.g = 1.0;
		else if (g == "F")
			tmp.g = 0;
		else
			continue;
		p.push_back(tmp);
	}
	for (int i = 0; i < p.size(); i++)
		ans(p[i]);
	cout << spg / sp;
	return 0;
}