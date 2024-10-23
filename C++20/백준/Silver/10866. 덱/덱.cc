#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string str;
    int num;
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push_front")
        {
            cin >> num;
            q.push_front(num);
        }
        if (str == "push_back")
        {
            cin >> num;
            q.push_back(num);
        }
        if (str == "pop_front")
        {
            if (q.empty() == 1)
                cout << -1 << endl;
            else
            {
                cout << q.front() << endl;
                q.pop_front();
            }
        }
        if (str == "pop_back")
        {
            if (q.empty() == 1)
                cout << -1 << endl;
            else
            {
                cout << q.back() << endl;
                q.pop_back();
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