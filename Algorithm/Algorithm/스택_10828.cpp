#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	stack<int> array;
	int num;
	string inputStack;

	cin >> num;
	cin.ignore();

	for (int i = 0; i < num; i++)
	{
		getline(cin, inputStack);
		
		if (inputStack == "pop")
		{
			if (array.empty())
			{
				cout << -1 << endl;
				continue;
			}
			cout << array.top() << endl;
			array.pop();
		}
		else if (inputStack == "size")
		{
			cout << array.size() << endl;
		}
		else if (inputStack == "empty")
		{
			if (array.empty())
			{
				cout << 1 << endl;
			}
			else if (!array.empty())
			{
				cout << 0 << endl;
			}
		}
		else if (inputStack == "top")
		{
			if (array.empty())
			{
				cout << -1 << endl;
				continue;
			}
			cout << array.top() << endl;
		}
		else
		{
			int saveNum = stoi(inputStack.substr(5, inputStack.size() - 5));
			array.push(saveNum);
		}
	}
}