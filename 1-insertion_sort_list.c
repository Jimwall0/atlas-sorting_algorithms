#include "sort.h"
/**
 * insertion_sort_list - sort a list
 * @list: list of data
*/
void insertion_sort_list(listint_t **list) {
	listint_t *current, *temp;

	if (list == NULL || *list == NULL) {
		return;
	}

	current = (*list)->next;
	while (current != NULL) {
		temp = current;
		current = current->next;

		listint_t *prev = NULL;
		listint_t *next = *list;

		// Find the correct position for temp in the sorted part of the list
		while (next != NULL && next->n < temp->n) {
			prev = next;
			next = next->next;
		}

		// Remove temp from its current position
		if (temp->prev != NULL) {
			temp->prev->next = temp->next;
		}
		if (temp->next != NULL) {
			temp->next->prev = temp->prev;
		}

		// Insert temp into its correct position
		if (prev == NULL) {
			temp->next = *list;
			temp->prev = NULL;
			(*list)->prev = temp;
			*list = temp;
		} else {
			temp->next = prev->next;
			temp->prev = prev;
			prev->next = temp;
			if (temp->next != NULL) {
				temp->next->prev = temp;
			}
		}
	}
}

