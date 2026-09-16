#include <stdio.h>

int main()
{
    int N, a, b;
    int maxDiff = 0;
    scanf("%d %d", &N, &a); // minimal ada 1 nomor

    if (N == 1)
    {
        // kalo gini print yg ada aja
        printf("%d", a);
        return 0;
    }
    
    if (N == 2)
    {
        // cuman ada 2 nomor, print selisihnya
        scanf("%d", &b);
        int diff = a - b;
        if (diff < 0) diff *= -1;
        printf("%d", diff);
        return 0;
    }

    // selain 2 kasus ini, for loop
    for (int i=1; i<N; i++)
    {
        scanf("%d", &b);
        // ambil selisihnya trus bandingin, klo lebih gede itu maxnya
        int diff = a - b;
        if (diff < 0) diff *= -1;
        if (diff > maxDiff) maxDiff = diff;
        // geser nomornya: a jadi b, b dapet lagi di loop berikutnya
        a = b;
    }

    printf("%d", maxDiff);

    return 0;
}