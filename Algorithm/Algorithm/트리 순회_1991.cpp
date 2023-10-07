#include <iostream>
#include <map>
using namespace std;

map<char, pair<char, char>> node;

void Preorder(char ch)
{
	if (ch == '.') return;
	
	cout << ch;

	Preorder(node[ch].first);
	Preorder(node[ch].second);
}

void Inorder(char ch)
{
	if (ch == '.') return;

	Inorder(node[ch].first);
	cout << ch;
	Inorder(node[ch].second);
}

void Postorder(char postorder)
{
	if (postorder == '.') return;

	Postorder(node[postorder].first);
	Postorder(node[postorder].second);

	cout << postorder;
}

int main()
{
	int n;
	char lname, name, rname;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> lname >> rname;
		node[name] = { lname,rname };
	}

	Preorder('A'); cout << "\n";
	Inorder('A'); cout << "\n";
	Postorder('A'); cout << "\n";
}