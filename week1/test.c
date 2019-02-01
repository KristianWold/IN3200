#include <stdio.h>

int main()
{
    double a = 1;
    double b = 1;
    for(int i=0; i < 1000; i++)
    {
        b = -b/4;
        a += b;
    }
    printf("%f",a);
    return 0;
}
