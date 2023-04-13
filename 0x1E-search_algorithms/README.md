# 0x1E. C - Search Algorithms

## Resources:books:
Read or watch:
* [Search algorithm](https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw)
* [Space complexity (1)](https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g)

---
## Learning Objectives:bulb:
What you should learn from this project:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

---

### [0. Linear search](./0-linear.c)
* Create a function that uses the Linear search method to look for an integer in a given array. (https://intranet.alxswe.com/rltoken/17RKhbmvh_u4ebCwaSxCxg)


### [1. (./1-binary.c) ### Create a method that uses the Binary search algorithm to look for an integer in a sorted array. (https://intranet.alxswe.com/rltoken/SnveFJhSDE7o8bEx-kGGpA)

### [2. Big O #0](./2-O) * When searching an array of size n, how long does the worst-case scenario take for a linear search?


### [3. Big O #1](./3-O) * In an array of size n, how much space does an iterative linear search method use in the worst case?


### [4. Big O #2](./4-O) * When searching an array of size n, how long does the worst-case scenario for a binary search take?


### [5. Big O #3](./5-O) * How much space does a binary search across an array of size n take?


### [6. Big O #4](./6-O) * How much space does this function or algorithm need to run?

### [7./100-jump.c) * Create a method that uses the Jump search algorithm to look up an integer in a sorted array. (https://intranet.alxswe.com/rltoken/1Op40kSYMN23JsOu6F3P1A)


### [8. Big O #5](./101-O) * When searching an array of size n, how long does it take on average to do a jump search if the search step size is set to sqrt(n)?


### [9. (./102-interpolation.c)
* Create a method that use the Interpolation search technique to locate a given integer in a sorted array. (https://intranet.alxswe.com/rltoken/cswpABHiyyRmGrPkzsMTyw)


### [10. (./103-exponential.c)
* Create a search function that use the exponential search technique to comb over a sorted array of numbers. (https://intranet.alxswe.com/rltoken/J7wng_ddosamvEkFl0ekqA)


### [11] High-Level Binary Search(./104-advanced_binary.c)
* Observed that if a value occurs more than once in an array, the simple binary search will not always return its index as the first result.


#12: "Jump search in a singly linked list"(./105-jump_list.c) * It's possible that you've come to the conclusion that linear search isn't nearly as efficient as alternative algorithms. 
functions - (https://intranet.alxswe.com/rltoken/DXrlCzhZtQAc3pUOJth8OQ)

### [13. Linear search in a skip list](./106-linear_skip.c)
* You can now see that searching for a single value in a singly linked list requires you to go through all of the list's elements.
Adding a "express lane" to traverse a single linked list is a typical technique for decreasing the time complexity of a search inside the list.
Skip lists are linked lists that function like fast lanes.
There will be fallout from this transformation. The space complexity of a search in such a list will indeed increase with increasing sizeof
(skiplist_t) > sizeof(listint_t) (see example below).
functions (https://intranet.alxswe.com/rltoken/ZTcTNOravCLvET4WjJJqrg)

### [14. Big O #6](./107-O)
* What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?


### [15. Big O #7](./108-O)
* What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?

---

## Author
* **Adebanji Adeniyi** - [ADETOLAR01](https://github.com/ADETOLAR01)