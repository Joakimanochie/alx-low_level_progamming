#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *cs;

	if (head != NULL)
	{
		cs = *head;
		while ((temp = cs) != NULL)
		{
			cs = cs->next;
			free(temp);
		}
		*head = NULL;
	}
}
