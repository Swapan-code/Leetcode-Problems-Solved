# Merge Two Sorted Lists

## Problem Statement
You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

## Approaches

### Approach 1: Iterative Approach
This approach uses an iterative method to merge the two sorted linked lists using a dummy node to begin with.
- Time Complexity: O(n+m) where n and m are length of linked lists
- Space Complexity: O(1)

<br>

### Approach 2: Recursive Approach
This approach uses recursion to merge the two sorted linked lists.
- Time Complexity: O(n+m) where n and m are length of linked lists
- Space Complexity: O(n+m). This space is used by recursion stack.


