#include <stdio.h>
#include <string.h>

/*
struct person
{
    char name[30];
    int age;
    char eye_color[20];
    int id;
};
struct person Abdullah = {"Abdullah", 21, "black", 01};

int main()
{

    return 0;
}
*/

/*
void parser(char array[])
{
    int n = strlen(array);
    for (int i = 5; i < n - 6; i++)
    {
        printf("%c", array[i]);
    }
}

int main()
{
    char string[] = "<h1> This is the heading </h1>";
    int n = strlen(string);
    parser(string);
    return 0;
}
*/

/*
int b = 34;

int func1(int b1)
{
    static int var = 0;
    printf("the value of var is %d\n", var);
    var++;
    // printf("the value of b inside func1 is %d\n", b);
    return b1 + var;
}

int main()
{
    int b = 333;
    // printf("the address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("%d", val);

    return 0;
}
*/

// /*

void parser(char *string)
{
    int in = 0;
    int index = 0;
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    while (string[0] == ' ')
    {
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j + 1];
        }
    }

    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<hwll0>      This is the heading    </hwll0>";
    parser(string);
    printf("parsed string: ~~%s~~\n", string);
    return 0;
}

// */