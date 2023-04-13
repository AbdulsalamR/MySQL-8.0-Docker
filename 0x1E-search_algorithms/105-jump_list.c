#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the jump search algorithm.
 * @list: Pointer to the head of the list to search.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the node containing the value.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *current = list, *prev = NULL;
    size_t jump = sqrt(size), left = 0, right = jump;

    if (!list)
        return (NULL);

    while (right < size && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        prev = current;
        current = current->next;
        left = right;
        right += jump;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    right = (right < size) ? right : size;

    while (left <= right && current->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        left++;
        prev = current;
        current = current->next;
    }
    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
    return (NULL);
}
