#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b == c)
        cout << "correct!";
    else
        cout << "wrong!";
}
        