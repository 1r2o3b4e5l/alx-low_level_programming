#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;
if (head == NULL || *head == NULL)
return (0);
temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);
return (n);
}
