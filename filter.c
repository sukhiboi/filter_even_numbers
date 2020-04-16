#include "my_array.h"
#define length_of(arr) sizeof(arr)/sizeof(arr[0])
#define iterate_on_array(arr) for (int i = 0; i < length_of(arr); i++)

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};
    my_array *filteredNUmbers = new_array();
    iterate_on_array(numbers)
    {
        if(numbers[i] %2 ==0){
            push(filteredNUmbers, numbers[i]);
        }
    }
    print_array(filteredNUmbers);
    printf("Length of array: %d\n", filteredNUmbers->length);
    return 0;
}