#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <typeinfo>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/236/A
int main()
{
    string word;
    vector<char> distinctWord;
    bool isDistinct;
    cin >> word;
    int totalDistinct = 0;

    for (int i = 0; i < word.length(); i++)
    {
        isDistinct = true;
        for (int j = i + 1; j < word.length(); j++)
        {
            if (word[i] == word[j])
            {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct)
        {
            distinctWord.push_back(word[i]);
        }
    }

    if (distinctWord.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
