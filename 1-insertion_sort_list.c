#include "sort.h"
/**
 * insertion_sort_list - a function that sorts the integers in ascending order
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp;

	if (list == NULL)
		return;

	head = *list;

	while (head != NULL)
	{
		while (head->next && (head->n > head->next->n))
		{
			temp = head->next;
			head->next = temp->next;
			temp->prev = head->prev;
			if (head->prev)
				head->prev->next = temp;
			if (temp->next)
				temp->next->prev = head;

			head->prev = temp;
			temp->next = head;
			if (temp->prev)
			{
				head = temp->prev;
			}
			else
			{
				*list = temp;
			}
			print_list(*list);
		}
		head = head->next;
	}
}
