#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <typeinfo>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/339/A
int main()
{
    string word;
    cin >> word;
    vector<int> intVector;

    size_t startPos = 0;
    size_t pos = word.find('+');

    while (pos != std::string::npos)
    {
        intVector.push_back(stoi(word.substr(startPos, pos - startPos)));
        startPos = pos + 1;              // Move startPos to the character after the plus sign
        pos = word.find('+', startPos); // Search for the next plus sign
    }

    // Extract the last token (substring from startPos to the end of the string)
    intVector.push_back(stoi(word.substr(startPos)));
    sort(intVector.begin(), intVector.end());

    for (int i = 0; i < intVector.size(); i++)
    {
        if (i != intVector.size()-1)
        {
            cout << intVector[i] << "+";
        }
        else
        {
            cout << intVector[i];
        }
        
    }
    

    // cout << typeid(intVector[0]).name();

    //sorting 
    

    return 0;
}
