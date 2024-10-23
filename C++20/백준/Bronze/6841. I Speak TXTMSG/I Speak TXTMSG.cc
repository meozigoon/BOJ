#include <iostream>
#include <string>

using namespace std;

const string sh[12] = { "CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA",
                              "CCC", "CUZ", "TY", "YW", "TTYL" };
const string tra[12] = { "see you", "I’m happy", "I’m unhappy", "wink",
                                "stick out my tongue", "sleepy", "totally awesome",
                                "Canadian Computing Competition", "because", "thank-you",
                                "you’re welcome", "talk to you later" };

string trans(const string& str)
{
    for (int i = 0; i < 12; i++)
        if (str == sh[i])
            return tra[i];
    return str;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string in;
    while (1)
    {
        cin >> in;
        cout << trans(in) << '\n';
        if (in == "TTYL")
            break;
    }
}