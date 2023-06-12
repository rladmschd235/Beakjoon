#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class User
{
public:
	int age;
	string name;
};

bool Compare(User a, User b)
{
	return a.age < b.age;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<User> vt1;
	int T;
	int age;
	string name;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> age >> name;
		vt1.push_back({ age, name });
	}

	stable_sort(vt1.begin(), vt1.end(), Compare);

	for (auto a : vt1)
	{
		cout << a.age << ' ' << a.name << "\n";
	}
}