#include <stdio.h>

void main()
{
    static int x = 5;
    printf("%d", x);
    x = 9;
    printf("%d", x);
{
int x = 4;
printf("%d", x);
}
printf("%d", x);
}

