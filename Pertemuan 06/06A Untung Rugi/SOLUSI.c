#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // U = untung terbesar, R = rugi terbesar
    int U = 0, R = 0;
    int previous = 0;

    while (N--)
    {
        int temp;
        scanf("%d", &temp);

        if (previous)
        {
            int diff = temp - previous;
            if (diff > 0)
            {
                if (!U || U < diff)
                {
                    U = diff;
                }
            }
            else if (diff < 0)
            {
                diff *= -1;
                if (!R || R < diff)
                {
                    R = diff;
                }
            }
        }
        previous = temp;
    }

    printf("%d %d", U, R);
    return 0;
}