#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    scanf("%lf", &num);
    int res = (int)num;
    double comma = num - res;
    printf("%d %.5lf", (int)res, comma);
    return 0;
}