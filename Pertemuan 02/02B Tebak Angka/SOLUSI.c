#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // swap nums if bigger
    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }

    if (c < a) printf("kiri");
    else if (c > b) printf("kanan");
    else if (c > a && c < b) printf("tengah");
    else if (c == a || c == b) printf("tepi");
    
    return 0;
}