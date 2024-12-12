#include "sort.h"

void bubble_sort(int *array, size_t size)
{
size_t i, temp;
size_t flag = 0;
if (size == 0)
return;
for (i = 0; i < size; i++)
{
if (array[i + 1] < array[i])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
flag = 1;
}
if (flag == 1)
bubble_sort(array, size);
}
