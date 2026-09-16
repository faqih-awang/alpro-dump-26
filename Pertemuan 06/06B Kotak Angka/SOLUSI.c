#include <stdio.h>

int main()
{
    // matriks berukuran MxN
    int M, N;
    scanf("%d %d", &M, &N);

    int current_num = 0; // modulo 10 for cycles

    for (int i=0; i<M; i++)
    {
        for (int j=0; j<N; j++)
        {
            printf("%d ", current_num);
            current_num = (current_num+1) % 10;
        }
        printf("\n");
    }

    return 0;
}