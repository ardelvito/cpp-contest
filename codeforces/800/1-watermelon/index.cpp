#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/4/A
int main()
{
    int a;
    cin >> a;
    int val = a;
    if (val % 2 == 0 && val != 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
