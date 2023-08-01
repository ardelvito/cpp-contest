#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/263/A
int main()
{
    std::vector<std::vector<int>> mainVector(6, std::vector<int>(6, 0));
    int score;
    int firstIdx, secondIdx;
    int minimalMoves;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            std::cin >> score;
            if (score == 1)
            {
                firstIdx = i;
                secondIdx = j;
                minimalMoves = abs(3 - i) + abs(3 - j);
            }
            mainVector[i][j] = score;
        }
    }
    std::cout << minimalMoves;

    return 0;
}
