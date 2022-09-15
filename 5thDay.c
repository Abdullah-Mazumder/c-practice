#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    /*
    char ch;
    printf("Enter your character - ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57)
    {
        printf("%c is a number\n", ch);
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("%c is a uppercase letter\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c is a lowercase letter\n", ch);
    }
    else
    {
        printf("%c is a special letter\n", ch);
    }
    */

    /*
     char ch;
     printf("Enter your character - ");
     scanf("%c", &ch);

     if (ch >= 'A' && ch <= 'Z')
     {
         printf("Lowercase of %c is %c\n", ch, ch + 32);
     }
     else if (ch >= 'a' && ch <= 'z')
     {
         printf("Uppercase of %c is %c\n", ch, ch - 32);
     }
     else
     {
         printf("Invalid letter");
     }
     */

    /*
    int year = 900;
    int is_leap_year = 0;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        is_leap_year = 1;
    }

    if (is_leap_year)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    */

    /*
     const int PICKED_NUMBER = 9;
     int given_number;
     scanf("%d", &given_number);

     if (PICKED_NUMBER == given_number)
     {
         printf("You are win!!!\n");
     }
     else
     {
         printf("You lose!\n");
     }
     */

    /*
    int picked_number, given_number;
    time_t t;
    scanf("%d", &given_number);

    srand((unsigned)time(&t));
    picked_number = rand() % 10 + 1;

    if (picked_number == given_number)
    {
        printf("You are win!!!\n");
        printf("random number is %d\n", picked_number);
    }
    else
    {
        printf("You lose!\n");
        printf("random number is %d\n", picked_number);
    }
    */

    /*
     int i;
     for (i = 0; i <= 100; i++)
     {
         printf("%d - Abdullah\n", i);
     }
     */

    /*
    int width, height, i, j;

    scanf("%d %d", &width, &height);

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    */

    /*
     int a, b;
     char ch = 'c';

     while (ch != 'q')
     {
         scanf("%d %d", &a, &b);
         printf("result = %d\n", a + b);
         printf("Type c to run again, type q to quit");
         scanf(" %c", &ch);
     }
     */

    time_t t;
    srand((unsigned)time(&t));

    int choosen_number;
    int lucky_number = rand() % 10 + 1;

    while (true)
    {
        printf("guess a number - ");
        scanf("%d", &choosen_number);

        if (lucky_number == choosen_number)
        {
            printf("Congratulation! You have choose the correct number\n");
            break;
        }
    }

    return 0;
}
