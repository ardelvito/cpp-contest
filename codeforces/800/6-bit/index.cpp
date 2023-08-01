#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/282/A
int main()
{
    int n;
    string cmd;
    int x = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cmd;
        if (cmd[0] == '+' && cmd[1] == '+' && cmd[2] == 'X' || cmd[0] == 'X' && cmd[1] == '+' && cmd[2] == '+')
        {
            x += 1;
        }
        else if (cmd[0] == '-' && cmd[1] == '-' && cmd[2] == 'X' || cmd[0] == 'X' && cmd[1] == '-' && cmd[2] == '-')
        {
            x -= 1;
        }
    }
    cout << x;

    return 0;
}
