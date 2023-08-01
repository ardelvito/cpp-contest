#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/231/A
int main()
{
    int a, num;
    int petya, vasya, tonya;
    int totalSure = 0;
    int totalWrite = 0;

    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> petya >> vasya >> tonya;
        totalSure = petya + vasya + tonya;
        if (totalSure >= 2)
        {
            totalWrite += 1;
                }
        totalSure = 0;
    }
    cout << totalWrite << endl;

    return 0;
}
