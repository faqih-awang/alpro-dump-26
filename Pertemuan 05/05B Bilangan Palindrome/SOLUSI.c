#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &num);
        int copy = num;
        int adjusted = 0;

        while (1)
        {
            int digit = copy % 10;
            adjusted += digit;
            copy /= 10;
            if (copy) adjusted *= 10;
            else break;
        }

        printf("%d\n", adjusted == num);
    }

    return 0;
}