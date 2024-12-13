#include "sort.h"


void selection_sort(int *array, size_t size)
{
size_t i, j, temp;
if (size == 0)
return;
for (i = 0; i < size; i++)
{
for (j = i + 1; j < i; j++)
if (array[j] > array[i])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
