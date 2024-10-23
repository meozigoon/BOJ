#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    stack<long long> s;
    long long tmp, res;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        while (!s.empty() && s.top() <= tmp)
        {
            s.pop();
        }
        s.push(tmp);
        res += s.size() -1;
    }
    cout << res;
}