#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - search lnear form in array for element
 * @array: array list
 * @size: size of the array
 * @value: value of the array
 *
 * Return: index where user looks for
 */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    
    for (size_t i = 0; i < size; i++) {
        printf("Comparing %d with %d\n", array[i], value);
        if (array[i] == value) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 42;
    
    int index = linear_search(array, size, value);
    
    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found\n", value);
    }
    
    return 0;
}
