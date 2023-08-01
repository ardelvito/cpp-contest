#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// Problem link
//  https://codeforces.com/problemset/problem/158/A
int main()
{
    int a, participantNumber, score;
    std::vector<int> vectorScore;
    int totalAdvancers = 0;
    int selectedParticipantScore = 0;

    cin >> a >> participantNumber;

    for (int i = 0; i < a; i++)
    {
        cin >> score;
        vectorScore.push_back(score);
    }

    selectedParticipantScore = vectorScore[participantNumber-1];
    if (vectorScore.size() > 1)
    {
        for (int j = 0; j < a; j++)
        {
            if (vectorScore[j] >= selectedParticipantScore && vectorScore[j] != 0)
            {
                totalAdvancers += 1;
            }
        }
    }
    else if(vectorScore.size() == 1){
        if (vectorScore[0] != 0)
        {
            totalAdvancers += 1;
        }
    }
    cout << totalAdvancers;

    return 0;
}
