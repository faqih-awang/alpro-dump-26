#include <stdio.h>

int main()
{
    int UTS, UAS, rata2;
    scanf("%d %d", &UTS, &UAS);
    rata2 = UTS + UAS;
    if ((rata2) > 120)
    {
        if (UTS > 40 && UAS > 40)
        {
            printf("LULUS");
        }
        else
        {
            printf("LULUS BERSYARAT");
        }
    }
    else
    {
        if (rata2 < 120)
        {
            printf("TIDAK LULUS");
        }
    }
    return 0;
}