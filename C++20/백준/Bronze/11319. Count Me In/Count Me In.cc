#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n;
    char c[1001];
    int cnt = 0;
    cin >> n;
    cin.ignore();
    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        cnt2 = 0;
        cin.getline(c, 1001, '\n');
        int len = strlen(c);
        for (int j = 0; j < len; j++)
        {
            if (c[j] == 'a' || c[j] == 'e' || c[j] == 'i' || c[j] == 'o' || c[j] == 'u' || c[j] == 'A' || c[j] == 'E' || c[j] == 'I' || c[j] == 'O' || c[j] == 'U')
                cnt++;
            else if ('A' < c[j] && c[j] <= 'Z' || 'a' < c[j] && c[j] <= 'z')
                cnt2++;
        }
        cout << cnt2 << ' ' << cnt << '\n';
    }
}