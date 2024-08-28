#include <stdio.h>
#include <string.h>

void main()
{
    int a[5] = {1, 3, 4, 6, 8};
    int b[5] = {4, 3, 3, 2, 1};
    int c[5], sum = 0, i;

    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d \t", c[i]);
    }

}