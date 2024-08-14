
    if (year % 4 == 0)
    {

        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("A leap Year");

            else
                printf("Not A leap Year");
        }
        printf("A leap Year");
    }
    else
        printf("Not A leap Year");
