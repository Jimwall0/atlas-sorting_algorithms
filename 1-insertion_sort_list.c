#include "sort.h"
/**
 * insertion_sort_list - sorting a struct
 * @list: what list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *current = (*list);
	while (current != NULL)
	{
		temp = current->prev;
		current = current->next;
		while (temp->n > current->n)
		{
			if (current->next != NULL)
				current->next->prev = temp;
			if (temp->prev != NULL)
				temp->prev->next = current;
			else
			{
				(*list) = current;
				current->prev = NULL;
				temp->next = current->next;
				temp->prev = current;
				current->next = temp;
				temp = NULL;
				break;
			}
			temp->next = current->next;
			current->prev = temp->prev;
			temp->prev = current;
			current->next = temp;
			temp = current->prev;
			print_list((*list));
		}
	}
}
