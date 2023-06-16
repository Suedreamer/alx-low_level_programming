#include "lists.h"

/**
* sum_dlistint - Computes the sum of all data in a doubly linked list.
* @head: Pointer to the head of the list.
*
* Return: Sum of the data in the list, or 0 if the list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

/* Traverse the list and add each node's data to the sum */
while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
