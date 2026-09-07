#include <stdio.h>
#include<math.h>

const double PI = 3.14159;

// volume silinder = pi * r^2 * t

int main()
{
    int lebar, tinggi;
    while (1)
    {
        scanf("%d", &lebar);
        if (lebar == -1) break;
        
        scanf("%d", &tinggi);

        // kasus 1: lebar kertas jadi keliling (l = 2*pi*r)
        double d1 = (double)lebar/PI;
        double r1 = d1/2;
        double h1 = tinggi - d1;
        double vol1 = PI * r1 * r1 * h1;

        // kasus 2: sisa tinggi kertas jadi keliling (t = (pi+1)(2*r))
        double d2 = (double)tinggi / (PI + 1);
        if (d2 > lebar) d2 = lebar; // batasan
        double r2 = d2/2;
        double vol2 = PI * r2 * r2 * lebar;

        // ambil yang terbesar volumenya
        double max;
        if (vol1 >= vol2) max = vol1;
        else max = vol2;
        printf("%.3f\n", max);
        // rounding karena ada errornya
        // int res = (int)(max*10000);
        // if (res%10 >= 4) res += 10;
        // printf("%.3f\n", (double)res/10000);
    }

    return 0;
}