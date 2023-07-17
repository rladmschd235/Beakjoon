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
		// 종류 및 개수 입력 받을 맵과 결과를 초기화 해준다
		unordered_map<string, int> clothesType; 
		result = 1;

		cin >> N;

		for (int j = 0; j < N; j++)
		{
			cin >> name >> type;
			clothesType[type]++; // 종류 별로 몇개의 옷이 있는지 세기
		}
		
		for (auto clothes : clothesType)
		{
			result *= (clothes.second + 1); // 안 입었을 때 포함해서 종류별로 개수만큼 곱해주기(종류 별 개수 + 1(안입었을 때))
		}

		cout << result - 1 << endl; // 아무 것도 안입었을 때를 빼준다
	}
} 