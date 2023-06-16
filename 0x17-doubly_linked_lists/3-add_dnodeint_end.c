#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Double pointer to the first node in the list.
* @n: The integer to put in the new node.
*
* Return: Address of the new node, or NULL if it fails.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last_node;

/* Allocate memory for the new node. */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

/* Initialize the new node. */
new_node->n = n;
new_node->next = NULL;

/* If the list is empty, insert the new node at the head. */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Traverse to the last node. */
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

/* Attach the new node at the end. */
last_node->next = new_node;
new_node->prev = last_node;

return (new_node);
}
