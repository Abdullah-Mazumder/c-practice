#include <stdio.h>

/*

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }

    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("the value of fibonacci number at position %d using iterative approach is %d\n", number, fib_iterative(number));

    printf("the value of fibonacci number at position %d using recursive approach is %d\n", number, fib_recursive(number));

    return 0;
}

*/

/*
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (a == 1)
    {
        for (int i = 5; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
*/
