#include <stdio.h>

int main()
{
    // ganjil: 2n - 1, genap: 2n
    int N;
    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        int ganjil = 2*i + 1;
        int genap = 2*(N-i);

        printf("%d %d ", ganjil, genap);
    }

    return 0;
}