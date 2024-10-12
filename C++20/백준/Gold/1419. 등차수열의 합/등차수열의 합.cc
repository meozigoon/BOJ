#include<iostream>

using namespace std;

int S(int l, int r, int k)
{
	if (k & 1) 
    {
		int t = k + 1 >> 1;
		int L = (l + k - 1) / k;
		int R = r / k;
		if (t > R)
            return 0;
		return R - max(L, t) + 1;
	}
	else
    {
		int t = k + 1;
		int L = (l + k / 2 - 1) / (k / 2);
		int R = r / (k / 2);
		int bias = (k == 4) * (L <= 6 && 6 <= R);
		if (t > R)
            return 0;
		return R - max(L, t) + 1 - bias;
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
	int l, r, k;
    cin >> l >> r >> k;
	cout << S(l, r, k) << '\n';
}