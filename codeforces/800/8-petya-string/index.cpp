#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/112/A
int main()
{
    int n;
    std::string firstWord, secondWord, lowerFirstWord, lowerSecondWord;

    cin >> firstWord >> secondWord;

    std::transform(firstWord.begin(), firstWord.end(), firstWord.begin(), ::tolower);
    std::transform(secondWord.begin(), secondWord.end(), secondWord.begin(), ::tolower);

    const char *firstArr = firstWord.c_str();
    const char *secondArr = secondWord.c_str();

    if (lexicographical_compare(firstArr, firstArr + firstWord.length(), secondArr, secondArr + secondWord.length()))
    {
        cout << -1;
    }
    else
    {
        bool equal = std::equal(firstArr, firstArr + firstWord.length(), secondArr, secondArr + secondWord.length());

        if (equal)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }

    return 0;
}
