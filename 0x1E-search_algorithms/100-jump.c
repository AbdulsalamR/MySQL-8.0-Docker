#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump = sqrt(size);
    size_t left = 0;
    size_t right = 0;

    if (array == NULL || size == 0)
        return -1;

    printf("Value checked array[%lu] = [%d]\n", left, array[left]);
    while (right < size - 1 && array[right] < value)
    {
        left = right;
        right += jump;
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    right = (right < size - 1) ? right : size - 1;

    while (left <= right)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return left;

        left++;
    }

    return -1;
}
