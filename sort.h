#ifndef SORT_H
#define SORT_H
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*prototypes*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*task 0*/
void bubble_sort(int *array, size_t size);

/*task 1*/
void insertion_sort_list(listint_t **list);

/*task 2*/
void selection_sort(int *array, size_t size);

/*task 3*/
void quick_sort(int *array, size_t size);
void sort(int *array, int low, int high, size_t size);
int partition_array(int *array, int low, int high, size_t size);
void swap(int *first, int *second);
#endif
