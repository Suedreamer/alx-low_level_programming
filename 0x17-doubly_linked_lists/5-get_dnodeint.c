#include "lists.h"

/**
* get_dnodeint_at_index - Returns the node at a
* given position in a doubly linked list.
* @head: Pointer to the first node in the list.
* @index: The position of the node to return.
*
* Return: The node at position index, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter = 0;

/* Traverse the list to find the node at index */
while (head != NULL)
{
/* If the current node is the one we're looking for, return it */
if (counter == index)
{
return (head);
}

/* Move to the next node and increment the counter */
head = head->next;
counter++;
}

/* If we've reached this point, the node at index doesn't exist */
return (NULL);
}
