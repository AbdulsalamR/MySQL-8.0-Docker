#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("%d\n", array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 42;

    int index = linear_search(array, size, value);

    if (index != -1) {
        printf("Value found at index: %d\n", index);
    } else {
        printf("Value not found in array\n");
    }

    return 0;
}
