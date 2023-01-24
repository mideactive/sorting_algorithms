#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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


void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void print_array(const int *array, size_t size);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void selection_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);
int get_max(int *array, int size);
void counting_sort(int *array, size_t size);
void merge_ar(int *subarr, int *buff, size_t front, size_t mid, size_t back);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);
int get_max(int *array, int size);
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
void radix_sort(int *array, size_t size);
void bitonic_compare(int up, int *array, size_t start, size_t end);
void bitonic_merge(int up, int *array, size_t start, size_t end);
void _bitonic_sort(int up, int *array, size_t size, size_t start, size_t end);
void bitonic_sort(int *array, size_t size);


#endif/*SORT_H*/
