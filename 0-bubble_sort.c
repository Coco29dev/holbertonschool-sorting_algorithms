#include "sort.h"

void bubble_sort(int *array, size_t size)
{
size_t i, temp;
int global_flag = 0;
int swap_flag = 0;
if (size == 0)
return;
while (global_flag == 0)
{
swap_flag = 0;
for (i = 0; i < size - 1; i++)
{
if (array[i + 1] < array[i])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
swap_flag = 1;
}
}
if (swap_flag != 1)
global_flag = 1;
}
}
