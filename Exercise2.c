#include <stdio.h>
#include <string.h>

int main()
{
    int smallPizza = 100, MediumPizza = 200, LargePizza = 300, smallPizzaPeperoni = 30, largePizzaPeperoni = 50, extraCheesForAnySizePizza = 20, bill = 0;
    char pizza, pepeAnswer, peperoni, chees;

    for (int i = 0; i < 1; i++)
    {

        printf("What size of pizza do you want?\n Type s For small pizza, m For Medium pizza, l For large pizza \n Type your answer:");
        scanf(" %c", &pizza);
        if (pizza == 's' || pizza == 'S')
        {
            bill = smallPizza;
            printf("\nYour bill is %d \n", bill);
        }
        else if (pizza == 'm' || pizza == 'M')
        {
            bill = MediumPizza;
            printf("\nYour bill is %d \n", bill);
        }
        else if (pizza == 'l' || pizza == 'L')
        {
            bill = LargePizza;
            printf("\nYour bill is %d \n", bill);
        }
        else
        {
            printf("You have not made a Valid Selection");
            break;
        }

        printf("\nDo you want Peperoni?\n Type y for Yes and N for No \n Type your answer:");
        scanf(" %c", &pepeAnswer);
        if (pepeAnswer == 'y' || pepeAnswer == 'Y')
        {
            printf("What size of peperoni do you want?\n Type s for smallPizzaPeperoni, l for largePizzaPeperoni \n Type your answer:");
            scanf(" %c", &peperoni);
            if (peperoni == 's' || peperoni == 'S')
            {
                bill += smallPizzaPeperoni;
                printf("\nYour bill is now %d\n", bill);
            }
            else if (peperoni == 'l' || peperoni == 'L')
            {
                bill += largePizzaPeperoni;
                printf("\nYour bill is now %d \n", bill);
            }
            else
            {
                printf("You have not made a Valid Selection");
                break;
            }
        }
        else
        {
            bill = bill;
        }
        printf("\nDo you want extra chees? Extra chess will cost extra %d \n Type y for Yes, n for No \n Type your answer:", extraCheesForAnySizePizza);
        scanf(" %c", &chees);
        if (chees == 'y' || chees == 'Y')
        {
            bill += extraCheesForAnySizePizza;
            printf("\nYour total bill is %d \n", bill);
        }
        else if (chees == 'n' || chees == 'N')
            printf("\nYour total bill is %d \n", bill);
        printf("EnJoy your Snack");
    }
    return 0;
}