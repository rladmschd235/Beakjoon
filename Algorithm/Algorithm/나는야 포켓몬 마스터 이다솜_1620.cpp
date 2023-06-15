#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<string, int> pokemons1;
	map<int, string> pokemons2;

	string pokemonName, inputData;
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> pokemonName;

		pokemons1[pokemonName] = i;
		pokemons2[i] = pokemonName;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> inputData;

		if (isdigit(inputData[0])) // 0~9까지의 수면 true를 반환
		{
			int findNum = stoi(inputData);
			cout << pokemons2.find(findNum)->second << '\n';
		}
		else
		{
			cout << pokemons1.find(inputData)->second << '\n';
		}
	}
}