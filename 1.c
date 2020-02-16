#include <stdio.h>
void main()
{
int k = 5;
int *p = &k;
int **m = &p;
printf("%d%d%d\n", k, *p, **p);// no commas
}

o/p: Compile time error

