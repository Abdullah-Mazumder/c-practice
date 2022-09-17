#include <stdio.h>

int main(void)
{
    /*
    char name[30];
    int i = 0;

    fgets(name, 30, stdin);

    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
        i++;
    }

    printf("output: %s\n", name);
    */

    /*
     int i, j, rows = 5;

     for (i = 1; i <= rows; i++)
     {
         for (j = 1; j <= i; j++)
         {
             printf("* ");
         }
         printf("\n");
     }
     */

    /*
    int i, j, rows = 5;
    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < rows; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */

    /*
        int i, j, rows = 15, stars = 1, spaces = rows - 1;

        for (i = 1; i < rows * 2; i++)
        {
            for (j = 1; j <= spaces; j++)
            {
                printf(" ");
            }
            for (j = 1; j < stars * 2; j++)
            {
                printf("*");
            }
            printf("\n");
            if (i < rows)
            {
                spaces--;
                stars++;
            }
            else
            {
                spaces++;
                stars--;
            }
        }

    */

    /*

        int i;
        for (i = 0; i < 100; i++)
        {
            if (i == 5)
            {
                // break;
                continue;
            }
            printf("i = %d\n", i);
        }

    */

    int size = 5;
    int number[size];
    int i;

    for (i = 0; i < size; i++)
    {
        scanf("%d", &number[i]);
    }

    printf("Output\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", number[i]);
    }

    return 0;
}
