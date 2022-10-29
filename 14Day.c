#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*

struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};

int main()
{
    struct Driver d1, d2, d3;
    printf("enter the details of the driver\n");

    printf("enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("enter the dlNo of the first driver\n");
    scanf("%s", &d1.dlNo);

    printf("enter the route of the first driver\n");
    scanf("%s", &d1.route);

    printf("enter the number of kms of the first driver\n");
    scanf("%d", &d1.kms);

    return 0;
}

*/

/*

int main()
{
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    // ptr = (int *)calloc(3, sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

*/

// /*

int main()
{
    int bhajjo = 858, bhajok = 325;

    int bhagsesh;

    while (bhajjo % bhajok != 0)
    {
        bhagsesh = bhajjo % bhajok;
        bhajjo = bhajok;
        bhajok = bhagsesh;
    }

    int GCD = bhagsesh;
    int LCM = (bhajjo * bhajok) / GCD;

    printf("G.C.D = %d\n", GCD);
    printf("L.C.M = %d\n", LCM);

    return 0;
}

// */