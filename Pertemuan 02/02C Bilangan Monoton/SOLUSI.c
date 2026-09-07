#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == b && b == c && c == d) // konstan
    {
        printf("KONSTAN");
    }
    else // monoton
    {
        if (a <= b && b <= c && c <= d) printf("MONOTON MENAIK");
        else if (a >= b && b >= c && c >= d) printf("MONOTON MENURUN");
        else printf("TIDAK MONOTON");
    }

    return 0;
}