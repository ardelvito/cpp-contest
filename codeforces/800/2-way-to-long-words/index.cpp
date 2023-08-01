#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/71/A
int main()
{
    int a, num;
    string word, finalWord;
    char firstCh, lastCh;

    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> word;
        if(word.length() > 10){
            firstCh = word[0];
            lastCh = word[word.length()-1];
            num = word.length()-2;
            finalWord = firstCh + to_string(num) + lastCh;
            cout << finalWord << endl;
        }
        else{
            cout << word << endl;
        }
    }
    

    return 0;
}
