#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	string name, type;
	int T, N, result = 1;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		// ���� �� ���� �Է� ���� �ʰ� ����� �ʱ�ȭ ���ش�
		unordered_map<string, int> clothesType; 
		result = 1;

		cin >> N;

		for (int j = 0; j < N; j++)
		{
			cin >> name >> type;
			clothesType[type]++; // ���� ���� ��� ���� �ִ��� ����
		}
		
		for (auto clothes : clothesType)
		{
			result *= (clothes.second + 1); // �� �Ծ��� �� �����ؼ� �������� ������ŭ �����ֱ�(���� �� ���� + 1(���Ծ��� ��))
		}

		cout << result - 1 << endl; // �ƹ� �͵� ���Ծ��� ���� ���ش�
	}
} 