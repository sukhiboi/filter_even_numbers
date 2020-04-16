#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5, 34, 34, 24, 25, 3, 5, 34, 2, 313, 23, 32, 34, 23};
    int numberOfEvens = 0;
    int count_of_numbers = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < count_of_numbers; i++)
    {
        if (numbers[i] % 2 == 0)
            numberOfEvens++;
    }
    int *evens = malloc(sizeof(int) * numberOfEvens);
    for (int i = 0, j = 0; i < count_of_numbers; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evens[j] = numbers[i];
            j++;
        }
    }
    for (int i = 0; i < numberOfEvens; i++)
    {
        printf("%d\n", evens[i]);
    }

    return 0;
};