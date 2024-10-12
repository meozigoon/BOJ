#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t, n;
    cin >> t;
    bool err;
    string s, in, tmp;
    deque <int> dq;
    bool rev;
    while(t--)
    {
        dq.clear();
        err = false;
        cin >> s;
        cin >> n;
        cin >> in;
        tmp = "";
        if (n != 0)
        {
            for (int i = 0; i < in.length(); i++)
            {
                if (in[i] == '[' || in[i] == ']' || in[i] == ',')
                {
                    if (in[i] != '[')
                        dq.push_back(stoi(tmp));
                    tmp.clear();
                    continue;
                }
                tmp += in[i];
            }
        }
        rev = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R')
                rev = !rev;
            else 
            {
                if (dq.size() == 0)
                {
                    cout << "error\n";
                    err = true;
                    break;
                }
                if (rev)
                    dq.pop_front();
                else
                    dq.pop_back();
            }
        }
        if (!err)
        {
            cout << '[';
            if (rev)
                while (!dq.empty())
                {
                    if (dq.size() != 1)
                        cout << dq.front() << ',';
                    else
                        cout << dq.front();
                    dq.pop_front();
                }
            else
                while (!dq.empty())
                {
                    if (dq.size() != 1)
                        cout << dq.back() << ",";
                    else
                        cout << dq.back();
                    dq.pop_back();
                }
            cout << "]\n";
        }
    }
}