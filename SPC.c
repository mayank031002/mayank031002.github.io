#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int random()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()
{
    int n = 0, num, cscore = 0, pscore = 0;
    char arr[10];
    printf("*****WELCOME RO THE GAME*****\n");
    printf("Disclaimer-\n");
    printf("1.Press 0 to choose ROCK\n");
    printf("2.Press 1 to choose PAPER\n");
    printf("3.Press 2 to choose SCISSOR \n");
    printf("Enter your name- ");
    scanf("%s", arr);
    getchar();
    while (n < 3)
    {
        printf("Enter your choice as instructed above.\n ");
        scanf("%d", &num);
        printf("Computer's choice %d\n", random());
        if (num == 0)
        {
            printf("You have chose ROCK\n");
        }
        else if (num == 1)
        {
            printf("You have chose PAPER\n");
        }
        else if (num == 2)
        {
            printf("You have chose SCISSOR\n");
        }
        if (random() == 0)
        {
            printf("Computer opted ROCK\n");
        }
        else if (random() == 1)
        {
            printf("Computer opted PAPER\n");
        }
        else if (random() == 2)
        {
            printf("Computer opted SCISSOR\n");
        }
        if (num == random())
        {
            cscore, pscore = 0;
        }
        else if (num == 0 && random() == 1)
        {
            cscore++;
        }
        else if (num == 1 && random() == 0)
        {
            pscore++;
        }
        else if (num == 0 && random() == 2)
        {
            pscore++;
        }
        else if (num == 2 && random() == 0)
        {
            cscore++;
        }
        else if (num == 1 && random() == 2)
        {
            cscore++;
        }
        else if (num == 2 && random() == 1)
        {
            pscore++;
        }
        n++;
    }
    printf("Score of %s is %d.\n", arr, pscore);
    printf("Score of computer is %d.\n", cscore);
    if (cscore > pscore)
        printf("Computer is the winner.");
    else if (pscore > cscore)
        printf("%s is the winner.", arr);
    return 0;
}
