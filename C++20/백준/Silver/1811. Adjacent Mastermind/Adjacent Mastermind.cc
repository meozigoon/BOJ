#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string p, t;
    string pch, tch;
    int b, g, w;
    while (1)
    {
        b = 0;
        g = 0;
        w = 0;
        cin >> p;
        if (p == "#")
            break;
        cin >> t;
        pch = p;
        tch = t;
        for (int i = 0; i < p.length(); i++)
            if (pch[i] == tch[i])
            {
                pch[i] = '*';
                tch[i] = '*';
                b++;
            }
        if (count(pch.begin(), pch.end(), '*') == pch.length())
        {
            cout << t << ": " << b << " black, " << g << " grey, " << w << " white\n";
            continue;
        }
        pch = " " + pch + " ";
        tch = " " + tch + " ";
        for (int i = 1; i < pch.length() - 1; i++)
        {
            if (tch[i] != '*' && pch[i - 1] == tch[i])
            {
                pch[i - 1] = '*';
                tch[i] = '*';
                g++;
            }
            if (tch[i] != '*' && pch[i + 1] == tch[i])
            {
                pch[i + 1] = '*';
                tch[i] = '*';
                g++;
            }
        }
        pch = pch.substr(1, pch.length() - 2);
        tch = tch.substr(1, tch.length() - 2);
        if (count(pch.begin(), pch.end(), '*') == pch.length())
        {
            cout << t << ": " << b << " black, " << g << " grey, " << w << " white\n";
            continue;
        }
        for (int i = 0; i < pch.length(); i++)
            if (pch[i] != '*' && tch.find(pch[i]) != string::npos)
            {
                w++;
                tch[tch.find(pch[i])] = '*';
            }
        cout << t << ": " << b << " black, " << g << " grey, " << w << " white\n";
    }
    return 0;
}
