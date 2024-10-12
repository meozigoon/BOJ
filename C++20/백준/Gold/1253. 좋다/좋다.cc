#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    int cnt = 0;
    bool ch;
    for (int i = 0; i < n; i++)
    {
        ch = false;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
                if (v[k] + v[j] == v[i] && k != i && j != i)
                {
                    cnt++;
                    ch = true;
                    break;
                }
            if (ch)
                break;
        }
    }
    cout << cnt;
}