#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k, score;
    vector<vector<int>> mainVector;
    cout << "Number of array ";
    cin >> n;
    cout << "Number of queries ";
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        vector<int> tempVector;
        cout << "Total items in array ";
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> score;
            tempVector.push_back(score);
        }
        mainVector.push_back(tempVector);
    }

    int firstIdx, secondIdx;
    for (int x = 0; x < q; x++)
    {
        cout << "First index & second index";
        cin >> firstIdx >> secondIdx;
        cout << mainVector[firstIdx][secondIdx];
    }

    return 0;
}