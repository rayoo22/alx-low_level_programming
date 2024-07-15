0. Linear search

Description:
Linear search is a simple search algorithm. It works by iterating through the elements of an array one by one until the target value is found or the end of the array is reached. It is straightforward and does not require the array to be sorted.
1. Binary search

Description:
Binary search is a more efficient search algorithm that works on sorted arrays. It repeatedly divides the search interval in half, comparing the target value to the middle element of the array. If the target value is equal to the middle element, the search is complete. If the target value is less than the middle element, the search continues in the lower half, otherwise, it continues in the upper half. This process repeats until the target value is found or the interval is empty.
2. Big O #0

Description:
This task requires you to determine the time complexity (worst case) of a linear search algorithm. In the worst case, linear search will have to check every element in the array, leading to a time complexity of O(n), where n is the number of elements in the array.
3. Big O #1

Description:
This task requires you to determine the space complexity (worst case) of an iterative linear search algorithm. Since linear search only uses a constant amount of additional space, its space complexity is O(1).
4. Big O #2

Description:
This task requires you to determine the time complexity (worst case) of a binary search algorithm. In the worst case, binary search repeatedly divides the array in half, leading to a time complexity of O(log n), where n is the number of elements in the array.
5. Big O #3

Description:
This task requires you to determine the space complexity (worst case) of a binary search algorithm. An iterative binary search has a space complexity of O(1) since it only uses a constant amount of additional space. A recursive binary search has a space complexity of O(log n) due to the recursion stack.
6. Big O #4

Description:
This task requires you to determine the space complexity of a function that allocates a 2D array. The function allocate_map(int n, int m) allocates an array of n pointers, each pointing to an array of m integers. Therefore, the space complexity is O(n * m).
7. Jump search

Description:
Jump search is an algorithm for searching sorted arrays. It works by dividing the array into blocks of a fixed size (typically the square root of the array size). It jumps ahead by this fixed size until it finds a block that may contain the target value, and then performs a linear search within that block.
8. Big O #5

Description:
This task requires you to determine the time complexity (average case) of a jump search algorithm. The average case time complexity of jump search is O(sqrt(n)), where n is the number of elements in the array.
9. Interpolation search

Description:
Interpolation search is an improved variant of binary search for uniformly distributed arrays. It estimates the position of the target value using a linear interpolation formula and then checks the estimated position. If the value is not found, it repeats the process in the appropriate subarray. It works well for uniformly distributed data.
10. Exponential search

Description:
Exponential search is an algorithm that first finds the range where the target value may be present by repeatedly doubling the index until it finds an interval containing the target. It then performs a binary search within this range. It is useful for unbounded or very large arrays.
11. Advanced binary search

Description:
Advanced binary search aims to find the first occurrence of a value in a sorted array. This is achieved by modifying the binary search to continue searching in the left subarray even after finding the target value, to ensure that the first occurrence is found.
12. Jump search in a singly linked list

Description:
This variant of jump search works on singly linked lists. Instead of jumping ahead by a fixed number of elements, it uses pointers to skip ahead by a fixed number of nodes (usually the square root of the list size). Once it finds a block where the target value may be present, it performs a linear search within that block.

