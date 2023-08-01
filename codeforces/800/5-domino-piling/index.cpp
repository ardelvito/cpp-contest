#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/50/A
int main()
{
    int m, n;
    int board = 0;
    int max_dominos = 0;
    cin >> m >> n;

    board = m * n;
    max_dominos = board / 2;
    cout << max_dominos;

    return 0;
}
