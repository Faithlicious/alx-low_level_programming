#include "search_algos.h"

/**
 * linear_skip - Searches for a specified value in a sorted singly linked list
 *               of integers using a linear skip technique.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 * Return: If the value is not present or the head of the list is NULL, NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *jump;

	if (list == NULL)
		return (NULL);

	for (curr = jump = list; jump->next != NULL && jump->n < value;)
	{
		curr = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			curr->index, jump->index);

	for (; curr->index < jump->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
