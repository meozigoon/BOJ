#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    while (1)
    {
        string input;
        getline(cin, input);
        if (input == ".")
            break;
        stack<char> s;
        bool flag = 0;
        for (int i = 0; i < input.length(); i++)
        {
            char c = input[i];
            if ((c == '(') || (c == '['))
                s.push(c);
            else if (c == ')')
            {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (c == ']')
            {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0 && s.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}