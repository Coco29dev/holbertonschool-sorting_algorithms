#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size
 * Return: nothing
 */


void selection_sort(int *array, size_t size)
{
size_t i, j, temp, min_index;
if (size == 0)
return;
for (i = 0; i < size - 1; i++)
{
min_index = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_index])
{
min_index = j;
}
}
if (min_index != i)
{
temp = array[i];
array[i] = array[min_index];
array[min_index] = temp;
print_array(array, size);
}
}
}
