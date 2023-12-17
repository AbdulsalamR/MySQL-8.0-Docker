#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left, right, mid;

    if (array == NULL)
        return (-1);

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        for (left = 0; left < size; left++)
        {
            if (left == mid)
                printf("%d", array[left]);
            else
                printf("%d, ", array[left]);
        }
        printf("\n");

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
