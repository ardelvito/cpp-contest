#include <stdio.h>

void update(int *a, int *b)
{
    // Complete this function
    int memoryA = *a;
    int memoryB = *b;
    *a += memoryB;
    *b = (memoryA - memoryB);
    if (*b < 0)
    {
        *b *= -1;
    }
}

int main()
{
    int a, b;
    a = 3514;
    b = 2122;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
