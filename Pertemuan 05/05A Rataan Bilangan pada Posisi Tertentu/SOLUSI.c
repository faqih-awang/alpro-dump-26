#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    if (n == 0 || n < k-1)
    {
        printf("0.00");
    }

    else
    {
        int sum = 0, count = 0;
        int temp;

        for (int i=0; i<n; i++)
        {
            scanf("%d", &temp);
            if ((i+1) % k == 0)
            {
                sum += temp;
                count++;
            }
        }

        double res = (double)sum / (double)count;
        printf("%.2lf", res);
    }

    return 0;
}