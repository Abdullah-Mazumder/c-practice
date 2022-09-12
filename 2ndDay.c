// format specifire
// constant
// escape sequences
// if else if else
// switch
// loop

#include <stdio.h>

#define PI 3.1416

int main()
{
    // int a = 7;
    // float b = 7.67;

    // const float b = 7.67;
    // b = 7.44;
    // printf("The value of a is %d and the value of b is %-20.1f\n", a, b);
    // printf("%f", PI);

    // int age;
    // printf("Enter age\n");
    // scanf("%d", &age);
    // printf("You have entered %d as your age\n", age);

    // if (age > 18)
    // {
    //     printf("You are adult");
    // }

    // switch (age)
    // {
    // case 3:
    //     printf("the age is 3");
    //     break;
    // case 32:
    //     printf("the age is 32");
    //     break;
    // case 31:
    //     printf("the age is 31");
    //     break;

    // default:
    //     break;
    // }

    // do
    // {
    //     printf("%d\n", i);
    //     i += 1;
    // } while (i < age);

    int n = 10, i, j = 0;

    for (i = 0; i < n; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}
