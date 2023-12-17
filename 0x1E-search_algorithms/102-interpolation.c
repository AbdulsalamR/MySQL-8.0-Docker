#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - Search for a value in a sorted array using Interpolation Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of 'value', or -1 if not found or if 'array' is NULL
 */
int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    size_t low = 0, high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value) {
            return (int)pos; // Value found
        }

        if (array[pos] < value) {
            low = pos + 1; // Search in the right half
        } else {
            high = pos - 1; // Search in the left half
        }
    }

    printf("Value checked array[%lu] is out of range\n", low);

    return -1; // Value not found
}

int main(void) {
    int array[] = {0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));

    return EXIT_SUCCESS;
}
