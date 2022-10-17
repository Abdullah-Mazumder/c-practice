#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
void change(int *n)
{
    *n = 5;
}

int main()
{
    int s = 55;
    change(&s);
    printf("%d\n", s);
    return 0;
}
*/

/*
int avg_func(int arra[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arra[i]);
    }

    arra[0] = 1;

    return 0;
}

void func(int *ptr)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
}

int main()
{
    int arr[] = {55, 4, 4, 34, 4343, 44};
    // avg_func(arr);
    // printf("%d\n", arr[0]);
    func(arr);
    return 0;
}
*/

/*
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverseStarPattern(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("How many rows do you want to?\n");
    scanf("%d", &rows);
    starPattern(rows);
    reverseStarPattern(rows);

    return 0;
}

*/

/*
int main()
{
    char srt[] = "Abdullah";
    // int n = sizeof(srt) / sizeof(srt[0]);
    int n = 0, i = 0;
    while (srt[i] != '\0')
    {
        n++;
        i++;
    }

    printf("%d\n", n);
    return 0;
}
*/

/*

int main()
{
    char str1[] = "Abdullah";
    char str2[] = "Imran";
    char str3[33];

    // puts(strcat(str1, str2));
    // printf("%d\n", strlen(str2));
    // printf("%s\n", strrev(str1));

    // strcpy(str3, strcat(str1, str2));
    // puts(str3);

    printf("%d\n", strcmp(str1, str2));

    return 0;
}

*/
