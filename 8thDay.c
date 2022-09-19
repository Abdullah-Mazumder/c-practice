#include <stdio.h>
#include <math.h>

float sum()
{
    return 5 + sqrt(254);
}

void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int main()
{
    printf("%f\t", sum());
    printStar(7);
    return 0;
}