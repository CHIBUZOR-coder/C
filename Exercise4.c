#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SCISSORS 0
#define ROCK 1
#define PAPER 2

int a[] = {SCISSORS, ROCK, PAPER};
int len = sizeof(a) / sizeof(a[0]);
int score;
int *GamePlay(void);

int main()
{
    int playerScore, ComputerScore;

    int *score = GamePlay();
    if (score == NULL)
    {

        printf("Memory allocation failed.\n");
        return 1;
    }

    playerScore = score[0];
    ComputerScore = score[1];
    // printf("Player Score: %d\n", playerScore);
    // printf("Computer Score: %d\n", ComputerScore);

    if (playerScore > ComputerScore)
        printf("Player wins overall 💪🤣\n");
    else if (playerScore < ComputerScore)
        printf("Computer wins overall 💪🤖\n");
    else
    {
        printf("It's a tie! Replaying the game...\n");
    }

    while (playerScore == ComputerScore)
    {
        printf("It's a tie! Replaying the game...\n");
        score = GamePlay(); // Run the game

        if (score == NULL)
        {

            printf("Memory allocation failed.\n");
            return 1;
        }

        playerScore = score[0];
        ComputerScore = score[1];
        printf("Player Score: %d\n", playerScore);
        printf("Computer Score: %d\n", ComputerScore);

        if (playerScore > ComputerScore)
            printf("Player wins overall 💪🤣\n");
        else if (playerScore < ComputerScore)
            printf("Computer wins overall 💪🤖\n");
        else
        {
            printf("It's a tie! Replaying the game...\n");
        }
    }
}

int *GamePlay(void)
{
    int player_count = 0, computer_count = 0, player_entery;
    srand(time(0));

    for (int i = 0; i < 2; i++)
    {
        int computer_choice = a[rand() % len];

        // printf("dddddd:%d", computer_choice);
        if (i == 0)
            printf("Round1:\n");
        else
            printf("Round2:");

        printf(" Choose rock(1) papper(2) or sissors(0):");
        scanf("%d", &player_entery);
        printf("\n");

        if (player_entery == 0)
            printf(" Player choice: Sissors\n");
        else if (player_entery == 1)
            printf(" Player choice: Rock\n");
        else if (player_entery == 2)
            printf(" Computer choice: Papper\n");
        else
            printf("😭");

        if (computer_choice == 0)
            printf(" Computer choice: Sissors\n\n");
        else if (computer_choice == 1)
            printf(" Computer choice: Rock\n\n");
        else if (computer_choice == 2)
            printf(" Computer choice: Papper\n\n");
        else
            printf("Error");

        if (0 <= computer_choice && computer_choice <= 2 && 0 <= player_entery && player_entery <= 2)
        {
            if (computer_choice == SCISSORS && player_entery == PAPER || computer_choice == PAPER && player_entery == ROCK || computer_choice == ROCK && player_entery == SCISSORS)
            {
                computer_count += 1;
                printf("player score:%d\n", player_count);
                printf("Computer score:%d \n\n", computer_count);
                printf("Computer wins this round 💻\n");
                printf("****************************\n\n");
            }
            else if (computer_choice == PAPER && player_entery == SCISSORS || computer_choice == ROCK && player_entery == PAPER || computer_choice == SCISSORS && player_entery == ROCK)
            {
                player_count += 1;
                printf("player score:%d\n", player_count);
                printf("Computer score:%d \n\n", computer_count);
                printf("Player wins this round ✊😎 \n");
                printf("****************************\n\n");
            }
            else
            {
                printf("player score:%d\n", player_count);
                printf("computer score:%d\n", computer_count);
                printf("A tie 🤝\n");
                printf("**************************\n\n");
            }
        }
        else
            printf("Number must be from 0-2");
    }

    static int result[2];
    printf("player Total score: %d\n", player_count);
    printf("Computer Total score: %d \n", computer_count);
    result[0] = player_count;
    result[1] = computer_count;
    return result;
}
