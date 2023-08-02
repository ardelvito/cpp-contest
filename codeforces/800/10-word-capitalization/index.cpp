#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <typeinfo>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/281/A
int main()
{
    string word, excludeFirstCh;
    char firstChar, firstLowerCase, firstUpperCase;
    cin >> word;

    firstChar = word[0];
    firstLowerCase = tolower(word[0]);
    firstUpperCase = toupper(word[0]);
    excludeFirstCh = word.substr(1);


    if(firstChar == firstLowerCase){
        cout << firstUpperCase + excludeFirstCh;
    }
    else{
        cout << word;
    }

    return 0;
}
