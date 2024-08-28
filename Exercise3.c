#include <stdio.h>

int sumCalc(int, int);
int main()
{
    int sum, x, y;
    printf("Enter a and b:");
    scanf(" %d %d", &x, &y);
    sum = sumCalc(x, y);
    printf("sum is :%d", sum);
}

int sumCalc(int a, int b)
{
    int s;
    s = a + b;
    return s;
}

void main()
{
    int i = 0;
    while (i <= 10)
    {
        printf("%d \n", i);
        ++i;
    }
}



// int main()
// {
//     int i = 5;
//     int result;

//     // Using i++
//     result = i++ + 10;
//     printf("Using i++: result = %d, i = %d\n", result, i);

//     // Reset i to 5
//     i = 5;

//     // Using ++i
//     result = ++i + 10;
//     printf("Using ++i: result = %d, i = %d\n", result, i);

//     return 0;
// }
