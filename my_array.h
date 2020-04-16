#include<stdio.h>
#include <stdlib.h>

typedef int *intptr;

typedef struct
{
    int length;
    intptr elements;
} my_array;

my_array *new_array(void);
void push(my_array *array, int element);
void print_array(my_array *array);