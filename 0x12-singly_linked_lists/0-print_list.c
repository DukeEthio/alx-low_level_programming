#include "lsits.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the start to the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
