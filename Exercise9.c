// Create Rock Paper Scissors Gane
/*rock vs scissors - rock wins
  paper vs scissors - scissors wins
  paper vs rock - paper wins


  Writa A c program  to allow user to play this game three times with computer . log the scores of computer and player .
  display the name of the winner at the end.
  notes - You have to display the name of the palyer during the game . Take users name as input from the user .
  like veeru turn or computer turns  */
//Rock Paper Scissor Game 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    //  For Rock Paper scissor returns1 if c1>c2 and 0 otherwise .If c1==c2 it will return -1.
    if (c1 == c2)
    {
        return -1;
    }

    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
            return 0;
    }
}
int main()
{
    int playerScore = 0, ComputerScore = 0, temp;
    char playerChar, ComputerChar;
    char dict[] = {'r', 'p', 's'};
    printf(" Welcome To The Rock, Paper, Scissor.\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player input
        printf("Player's Turn : \n");
        printf(" Choose 1 for Rock,Choose 2 for Paper,Choose 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        // Generate computer's input
        printf("Computer's Turn : \n");
        printf("Choose 1 for Rock,Choose 2 for Paper,Choose 3 for Scissor\n");
        temp = generateRandomNumber(3) + 1;
        ComputerChar = dict[temp - 1];
        printf("Cpu choose %c\n", ComputerChar);

        // Cparing Scores
        if (greater(ComputerChar, playerChar) == 1)
        {
            ComputerScore += 1;
            printf("CPU Got It!!\n");
        }
        else if (greater(ComputerChar, playerChar) == -1)
        {
            ComputerScore += 1;
            playerScore += 1;
            printf("Its A Draw!!\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got It!!\n");
        }
        printf("You : %d\nCpu: %d\n\n", playerScore, ComputerScore);
    }
    if (playerScore > ComputerScore)
    {
        printf("You Win The Game   OooooWhoooooo!!!!");
    }
    else if (playerScore < ComputerScore)
    {
        printf("You Loose The Game  Computer Wins   Oh Shit!!!!");
    }
    else
    {
        printf("Its A Draw ");
    }
    return 0;
}
