#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(void)
{
    map<string, int> p;
    vector<string> name;
    int n, m;
    string tmp;
    cin >> n >> m;
    vector<string> res;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        name.push_back(tmp);
        p.insert(make_pair(tmp, i));
    }
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        if (tmp[0] >= 65 && tmp[0] <= 90)
            res.push_back(to_string(p[tmp]));
        else
            res.push_back(name[stoi(tmp)-1]);
    }
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << '\n';
}