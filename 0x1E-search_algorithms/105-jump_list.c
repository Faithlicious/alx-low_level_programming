#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, step_size;
	listint_t *current, *next_jump;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = 0;
	step_size = sqrt(size);
	for (current = next_jump = list; next_jump->index + 1
	     < size && next_jump->n < value;)
	{
		current = next_jump;
		for (jump_step += step_size; next_jump->index <
		     jump_step; next_jump = next_jump->next)
		{
			if (next_jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
		       next_jump->index, next_jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, next_jump->index);

	for (; current->index < next_jump->index && current->n <
	     value; current = current->next)
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	return (current->n == value ? current : NULL);
}

