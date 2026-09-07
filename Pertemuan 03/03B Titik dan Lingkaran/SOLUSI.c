#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);
    int r2 = r*r; // kuadrat

    int x, y;
    int dalam = 0, luar = 0;

    // ambil 2 bilangan sekaligus
    // kalo yg pertama -999 -> break

    while (1)
    {
        scanf("%d", &x);
        if (x == -999) break;
        scanf("%d", &y);

        // yang tepat di garis gak dihitung di dalam
        if (x*x + y*y < r2) dalam++;
        else if (x*x + y*y > r2) luar++;
    }

    printf("%d %d", dalam, luar);

    return 0;
}