#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    string str, bomb, answer, check;
    int bombIndex;

    cin >> str >> bomb;
    for (int i = 0; i < str.size(); i++)
    {
        answer += str[i];
        if (str[i] == bomb.back() && answer.size() >= bomb.size())
        {
            bombIndex = 0;
            check = "";

            for (int j = answer.size() - bomb.size(); j < answer.size(); j++)
            {
                if (bomb[bombIndex++] == answer[j])
                {
                    check += answer[j];
                }
                else
                {
                    break;
                }
            }

            if (check == bomb)
            {
                answer.erase(answer.size() - bomb.size(), bomb.size());
            }
        }
    }
    if (answer == "")
        cout << "FRULA";
    else
        cout << answer;
}