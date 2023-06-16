#include "lists.h"

/**
* create_node - Creates a new node.
* @n: The integer for the new node to contain.
*
* Return: A pointer to the created node, or NULL on failure.
*/
dlistint_t *create_node(int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

return (new_node);
}

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: A pointer to the address of the head of the list.
* @idx: The index of the position to insert the new node, starting from 0.
* @n: The data for the new node.
*
* Return: The address of the new node or NULL if it fails.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i;

if (h == NULL)
return (NULL);

new_node = create_node(n);
if (new_node == NULL)
return (NULL);

if (*h == NULL || idx == 0)
{
if (*h)
(*h)->prev = new_node, new_node->next = *h;
*h = new_node;
return (new_node);
}

temp = *h;
for (i = 0; i < idx - 1 && temp->next != NULL; i++)
temp = temp->next;

if (i == idx - 1)
{
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}

free(new_node);
return (NULL);
}
