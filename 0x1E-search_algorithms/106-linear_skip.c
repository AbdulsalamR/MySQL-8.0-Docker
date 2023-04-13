#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer on the first node where value is located, or NULL if value
 *         is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *express = list, *prev = NULL;

    if (list == NULL)
        return (NULL);

    while (express->express != NULL && express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               express->express->index, express->express->n);
        prev = express;
        express = express->express;
    }

    if (express->n < value)
    {
        prev = express;
        while (express->next != NULL)
            express = express->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           prev->index, express->index);

    while (prev != express->next)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
