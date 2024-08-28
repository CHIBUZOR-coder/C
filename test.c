#include <stdio.h>
#include <string.h>
// int avrg(int[], int);

// void main()
// {
//     int marks[5] = {10, 20, 30, 40, 50}, size = 0, avrage;
//     size = sizeof(marks) / sizeof(marks[0]);
//     avrage = avrg(marks, size);
//     printf("average:%d", avrage);
// }

// int avrg(int marks[], int size)
// {

//     int i, sum = 0, averagee = 0;
//     for (i = 0; i < size; i++)
//     {
//         sum = sum + marks[i];
//     }
//     averagee = sum / size;
//     return averagee;
// }

//     int avrg(int[], int);

// void main()
// {
//     // char str[] = "John";
//     // int len = strlen(str);
//     // printf("len: %d", len);

//     int marks[5] = {10, 20, 30, 40, 50}, length = sizeof(marks) / sizeof(marks[0]), avrage = 0;
//     printf("length:%d", length);
//     avrage = avrg(marks, length);
//     printf("average:%d", avrage);
// }

// int avrg(int marks[], int length)
// {

//     int i, sum = 0, averagee = 0;
//     for (i = 0; i < length; i++)
//     {
//         sum = sum + marks[i];
//     }
//     averagee = sum / length;
//     return averagee;
// }

// void modify(char*, char*);
// void main()
// {
//     char *str1 = "jenny";
//     char *str2 = "danny";
//     modify(str1, str2);
// }

// void modify(char str1[], char str2[])
// {
//     int i, l = 0;

//     for (i = 0; str1[i] != '\0'; i++)
//     {
//         l +=1;
//     }

//     str2[i] = 'z';
//     printf("str1 length: %d", l);
//     printf("both strings are: %s %s", str1, str2);
// }

#include <stdio.h>

void modify(char *, char *);
void main()
{
    char str1[] = "jenny";
    char str2[] = "danny";
    modify(str1, str2);
}

void modify(char *str1, char *str2)
{
    int i, l = 0;

    for (i = 0; str1[i] != '\0'; i++)
    {
        l += 1;
    }

    if (i >= sizeof(str2) / sizeof(str2[0]))
    {
        str2[i-1] = 'z'; // Replace the last character in str2
    }
    printf("Length:%d \n", i);
    printf("Length:%d \n", sizeof(str2) / sizeof(str2[0]));
    printf("Length1:%d \n", sizeof(str1) / sizeof(str1[0]));
    printf("str1 length: %d \n", l);
    printf("both strings are: %s and %s\n", str1, str2);
}
