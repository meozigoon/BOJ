#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string str;
    int num;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            q.push(num);
        }
        if (str == "pop")
        {
            if (q.empty() == 1)
                cout << -1 << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        if (str == "size")
            cout << q.size() << endl;
        if (str == "empty")
            cout << q.empty() << endl;
        if (str == "front")
        {
            if (q.empty())
                cout << -1 << endl;
            else
                cout << q.front() << endl;
        }
        if (str == "back")
        {
            if (q.empty())
                cout << -1 << endl;
            else
                cout << q.back() << endl;
        }
        str = '\0';
    }
}