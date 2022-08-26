#include "sort.h"
/**
 * insertion_sort_list - task 1
 * @list : list of nodes.
 * Description: function that sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp_1 = NULL;
	listint_t *tmp_2 = NULL;

	tmp_1 = (*list)->next;

	while (tmp_1 != NULL)
	{
		tmp_2 = tmp_1->next;
		while (tmp_1->prev != NULL && tmp_1->n < tmp_1->prev->n)
		{
			if (tmp_1->next != NULL)
			{
				tmp_1->next->prev = tmp_1->prev;
			}
			tmp_1->prev->next = tmp_1->next;
			tmp_1->next = tmp_1->prev;
			tmp_1->prev = tmp_1->next->prev;
			tmp_1->next->prev = tmp_1;
			if (tmp_1->prev != NULL)
			{
				tmp_1->prev->next = tmp_1;
			}
			else
			{
				*list = tmp_1;
			}
			print_list(*list);
		}
		tmp_1 = tmp_2;
	}
}
