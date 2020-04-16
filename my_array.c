#include "my_array.h"

my_array *new_array(void)
{
    my_array *array = malloc(sizeof(my_array));
    array->length = 0;
    array->elements = malloc(sizeof(int) * array->length);
    return array;
}

void push(my_array *array, int element)
{
    array->length++;
    array->elements = realloc(array->elements, sizeof(int) * array->length);
    array->elements[array->length - 1] = element;
}

void print_array(my_array *array)
{
    printf("[");
    for (int i = 0; i < array->length; i++)
    {
        if (i == array->length - 1)
        {
            printf("%d", (array->elements)[i]);
        }
        else
        {
            printf("%d, ", (array->elements)[i]);
        }
    }
    printf("]\n");
}