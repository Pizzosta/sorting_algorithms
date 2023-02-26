#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

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

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* prototype header files*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void _qsort(int *a, int low, int high, int size);
void shell_sort(int *array, size_t size);
void _ssort(int *a, int size, int n);
void cocktail_sort_list(listint_t **list);
void swap_list(listint_t **ptr1, listint_t **ptr2, int n);
void increase_sort(listint_t **ptr, listint_t **limit, listint_t **list);
void decrease_sort(listint_t **ptr, listint_t **limit, listint_t **list);

#endif /* _SORT_H_ */
