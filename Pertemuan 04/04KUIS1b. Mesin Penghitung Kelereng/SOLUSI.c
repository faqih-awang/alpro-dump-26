#include <stdio.h>

int main()
{
    /*
    1: jumlah++
    2: if (!jumlah%2) jumlah /= 2 else jumlah *= 2
    9: stop
    jumlah dari 0

    kotretan
    1 1 2 1 2 2 2 1 9 = 2
    1, 2, 1, 2, 1, 2, 1, 2
    */
   
    long long int jumlah = 0;
    int tombol;
    scanf("%d", &tombol);

    while (tombol != 9)
    {
        if (tombol == 1)
        {
            jumlah++;
        }
        else if (tombol == 2)
        {
            if (jumlah % 2 == 0 && jumlah > 0) jumlah /= 2;
            else jumlah *= 2;
        }
        scanf("%d", &tombol);
    }

    printf("%lli", jumlah);

    return 0;
}