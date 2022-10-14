#include <stdio.h>

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