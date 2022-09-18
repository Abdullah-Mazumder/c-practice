#include <stdio.h>

/*
int main(void)
{
    int rolls[] = {1, 2, 3, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15};
    int length = sizeof(rolls) / sizeof(rolls[0]);

    int search_key, i;
    int is_found = -1;
    printf("enter search key: ");
    scanf("%d", &search_key);

    for (i = 0; i < length; i++)
    {
        if (rolls[i] == search_key)
        {
            is_found = i;
            break;
        }
    }

    if (is_found >= 0)
    {
        printf("Item found at index %d\n", i);
    }
    else
    {
        printf("item not found...");
    }

    int numbers[] = {5, 3, 0, 8, 58, 33, 54, 43, 32, 23, 88, 74, 34, 23, 232};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int i, j, temp;

    // sorting logic
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // print array
    for (i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
*/

int main(void)
{
    system("cls");
    int input, value, index;
    const MAX_LENGTH = 100;
    int data[MAX_LENGTH];
    int length = 0;

    do
    {
        printf("Menu: \n");
        printf("----------------\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");
        printf("----------------\n");

        printf("Enter a menu: ");
        scanf("%d", &input);

        system("cls");

        printf("===== Result =====\n");

        switch (input)
        {
        case 0:
            // do nothin, just terminate
            break;
        case 1:
            // add operation
            printf("Please enter a integer value: ");
            scanf("%d", &value);

            data[length] = value;

            printf("%d inserted at index %d\n", value, length);
            length++;

            break;
        case 2:
            // insert operation
            printf("Please enter a integer value: ");
            scanf("%d", &value);
            printf("Please enter an index between 0 - %d: ", length);
            scanf("%d", &index);

            for (int i = length; i > index; i--)
            {
                data[i] = data[i - 1];
            }
            data[index] = value;
            length++;
            printf("%d inserted at index %d\n", value, index);

            break;
        case 3:
            // edit operation
            printf("Please enter an index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            printf("Please enter a new integer value: ");
            scanf("%d", &value);
            data[index] = value;
            printf("%d updated at index %d\n", value, index);

            break;
        case 4:
            // delete operation
            printf("Please enter an index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            int dv = data[index];
            for (int i = index; i < length; i++)
            {
                data[i] = data[i + 1];
            }
            data[length] = 0;
            length--;
            printf("%d deleted at index %d\n", dv, index);

            break;
        case 5:
            // display items using a for loop
            if (length == 0)
            {
                printf("There is no data\n");
            }
            else
            {

                printf("DATA: ");
                for (int i = 0; i < length; i++)
                {
                    printf("%d\t", data[i]);
                }
                printf("\n");
            }

            break;
        case 6:
            // clear data
            for (int i = 0; i < length; i++)
            {
                data[i] = 0;
            }
            length = 0;
            printf("data cleared...\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }

        printf("===== Result End =====\n");
    } while (input != 0);
}