#include <stdio.h>
// int main()
// {
//     int age;
//     int year;
//     printf("Enter Age and year \n");
//     scanf("%d, %d", &age, &year);
//     printf("You are  %d years old", age);
// if(age % 4 == 0 && age )
//     return 0;
// }

// leap year Sudo Code
//=========================

// If year is divisible by 4 & 400 == leap year
// if year is divisible by 100 & 400 == leap year

int main()
{
    int year;
    printf("Enter Year");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
            if (year % 400 == 0)
                printf("A leap Year");
            else
                printf("Not A leap Year");
    }
    else
        printf("Not A leap Year");

    return 0;
}
