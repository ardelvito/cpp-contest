#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int i;
    long l;
    char ch;
    float f;
    double d;
    cin >> i >> l >> ch >> f >> d;
    printf("%d", i);
    scanf("%d", &i);
    printf("\n");
    printf("%ld", l);
    scanf("%ld", &l);
    printf("\n");
    printf("%c", ch);
    scanf("%c", &ch);
    printf("\n");
    printf("%.3f", f);
    scanf("%f", &f);
    printf("\n");
    printf("%.9lf", d);
    scanf("%lf", &d);

    return 0;
}
