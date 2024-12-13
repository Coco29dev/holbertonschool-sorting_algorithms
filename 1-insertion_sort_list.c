#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: doubly linked list
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
listint_t *ptr_up, *ptr_desc, *temp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
ptr_up = (*list)->next;
while (ptr_up != NULL)
{
ptr_desc = ptr_up;
ptr_up = ptr_up->next;
while (ptr_desc->prev != NULL && ptr_desc->n < ptr_desc->prev->n)
{
temp = ptr_desc->prev;
if (temp->prev == NULL)
*list = ptr_desc;
temp->next = ptr_desc->next;
if (ptr_desc->next)
ptr_desc->next->prev = temp;
ptr_desc->prev = temp->prev;
if (temp->prev)
temp->prev->next = ptr_desc;
ptr_desc->next = temp;
temp->prev = ptr_desc;
print_list(*list);
}
}
}
