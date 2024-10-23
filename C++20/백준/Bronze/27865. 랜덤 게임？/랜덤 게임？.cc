#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	char c;
	while (1)
	{
		cout << "? 1\n";
		cout << flush;
		cin >> c;
		if (c == 'Y')
		{
            cout << "! 1";
	        cout << flush;
	        break;
        }
	}
    return 0;
}