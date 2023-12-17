# C - Search Algorithms Project

This project represents my work on search algorithms as part of the ALX curriculum. I've implemented various search algorithms and provided corresponding space/time complexities for each.

## Tests :heavy_check_mark:

* [tests](./tests): Directory containing test files for all tasks. These tests have been provided by ALX for validation.

## Helper Files :raised_hands:

* [listint](./listint): Directory of helper files for Task 12, which involves singly linked list jump search.
  * [create_list.c](./listint/create_list.c): C function creating a `listint_t` singly linked list.
  * [free_list.c](./listint/free_list.c): C function freeing a `listint_t` singly linked list.
  * [print_list.c](./listint/print_list.c): C function printing the contents of a `listint_t` singly linked list.

* [skiplist](./skiplist): Directory of helper files for Task 13, which involves singly skipped list jump search.
  * [create_skiplist.c](./skiplist/create_skiplist.c): C function creating a `skiplist_t` singly skipped list.
  * [free_skiplist.c](./skiplist/free_skiplist.c): C function freeing a `skiplist_t` singly skipped list.
  * [print_skiplist.c](./skiplist/print_skiplist.c): C function printing the contents of a `skiplist_t` singly skipped list.

## Header File :file_folder:

* [search_algos.h](./search_algos.h): Header file containing definitions and prototypes for all types and functions written for the project.

### Data Structures
```c
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure for ALX project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

### Function Prototypes

| File                    | Prototype                                                       |
| ----------------------- | --------------------------------------------------------------- |
| `0-linear.c`            | `int linear_search(int *array, size_t size, int value);`        |
| `1-binary.c`            | `int binary_search(int *array, size_t size, int value);`        |
| `100-jump.c`            | `int jump_search(int *array, size_t size, int value);`          |
| `102-interpolation.c`   | `int interpolation_search(int *array, size_t size, int value);` |
| `103-exponential.c`     | `int exponential_search(int *array, size_t size, int value);`   |
| `104-advanced_binary.c` | `int advanced_binary(int *array, size_t size, int value);`      |

## Tasks :page_with_curl:

* **0. Linear search**
  * [0-linear.c](./0-linear.c): C function searching for a value in an array of integers using linear search.
  * Returns the first index where `value` is located or `-1` if not present or if the array is `NULL`.

* **1. Binary search**
  * [1-binary.c](./1-binary.c): C function searching for a value in a sorted array of integers using binary search.
  * Returns the index where `value` is located, or `-1` if not present or if the array is `NULL`.

* **2. Big O #0**
  * [2-O](./2-O): Text file containing the worst-case time complexity of linear search.

* **3. Big O #1**
  * [3-O](./3-O): Text file containing the worst-case space complexity of iterative linear search.

* **4. Big O #2**
  * [4-O](./4-O): Text file containing worst-case time complexity of binary search.

* **5. Big O #3**
  * [5-O](./5-O): Text file containing worst-case space complexity of binary search.

* **6. Big O #4**
  * [6-O](./6-O): Text file containing the space complexity of the provided algorithm for allocating a map.

* **7. Jump search**
  * [100-jump.c](./100-jump.c): C function searching for a value in a sorted array of integers using jump search.
  * Returns the index where `value` is located, or `-1` if not present or if the array is `NULL`.

* **8. Big O #5**
  * [101-O](./101-O): Text file containing the average case time complexity of jump search in an array of size `n` using `step = sqrt(n)`.

* **9. Interpolation search**
  * [102-interpolation.c](./102-interpolation.c): C function searching for a value in a sorted array of integers using interpolation search.
  * Returns the first index where `value` is located, or `-1` if not present or if the array is `NULL`.

* **10. Ex

ponential search**
  * [103-exponential.c](./103-exponential.c): C function searching for a value in a sorted array of integers using exponential search.
  * Returns the first index where `value` is located, or `-1` if not present or if the array is `NULL`.

* **11. Advanced binary search**
  * [104-advanced_binary.c](./104-advanced_binary.c): C function searching for a value in a sorted array of integers using advanced binary search.
  * Returns the first index where `value` is located, or `-1` if not present or if the array is `NULL`.

* **12. Jump search in a singly linked list**
  * [105-jump_list.c](./105-jump_list.c): C function searching for a value in a `listint_t` sorted singly linked list of integers using jump search.
  * Returns a pointer to the first node where `value` is located, or `NULL` if not present or if the head of the list is `NULL`.

* **13. Linear search in a skip list**
  * [106-linear_skip.c](./106-linear_skip.c): C function searching for a value in a `skiplist_t` sorted skipped linked list of integers using jump search.
  * Returns a pointer to the first node where `value` is located, or `NULL` if not present or if the head of the list is `NULL`.

* **14. Big O #6**
  * [107-O](./107-O): Text file containing the average time complexity of jump search in a singly linked list of size `n` using `step = sqrt(n)`.

* **15. Big O #7**
  * [108-O](./108-O): Text file containing the average time complexity of jump search in a sorted skipped linked list of size `n` using `step = sqrt(n)`.
