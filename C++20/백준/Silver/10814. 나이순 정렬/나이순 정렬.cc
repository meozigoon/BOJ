#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct s
{
	int age;
	string name;
	int idx;
};

bool cmp(s a, s b)
{
	if (a.age == b.age)
	{
		if (a.idx < b.idx)
			return true;
		else
			return false;
	}
	if (a.age < b.age)
		return true;
	if (a.age > b.age)
		return false;
}

int main(void)
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<s> li(n);
	for (int i = 0; i < n; i++)
	{
		cin >> li[i].age >> li[i].name;
		li[i].idx = i;
	}
	sort(li.begin(), li.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		cout << li[i].age << ' ' << li[i].name << '\n';
	}
}
