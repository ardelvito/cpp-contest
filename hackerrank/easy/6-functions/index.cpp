#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int answer;
    if (a > b && a > c && a > d)
    {
        answer = a;
    }
    else if (b > a && b > c && b > d)
    {
        answer = b;
    }
    else if (c > a && c > b && c > d)
    {
        answer = c;
    }
    else if (d > a && d > b && d > c)
    {
        answer = d;
    }
    return answer;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
