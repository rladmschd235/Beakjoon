#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<string> myset;
	string str;

	cin >> str;

	for (int i = 1; i <= str.size(); i++) // ��� ����� ������
	{
		int cnt = 0;
		
		for (int j = 0; j <= str.size()-i; j++) // ��� ��𼭺��� �� ����
		{
			//cout << str.substr(j, i) << endl;
			
			myset.insert(str.substr(j, i));
		}
	}
	cout << myset.size();
}