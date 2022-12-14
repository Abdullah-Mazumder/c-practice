#include <stdio.h>

void reverse_array(int *array, int length)
{
    if (length % 2 == 0)
    {
        int middle = length / 2;
        for (int j = 0; j < middle; j++)
        {
            int temp = array[j];
            array[j] = array[middle + middle - j - 1];
            array[middle + middle - j - 1] = temp;
        }
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (i != length - i - 1)
            {
                int temp = array[i];
                array[i] = array[length - i - 1];
                array[length - i - 1] = temp;
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
    int length = sizeof(array) / sizeof(array[0]);

    reverse_array(array, length);

    for (int j = 0; j < length; j++)
    {
        printf("%d ", array[j]);
    }

    return 0;
}