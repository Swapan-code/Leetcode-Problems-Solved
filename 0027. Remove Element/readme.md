# Remove Element Problem

## Problem Statement
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` in-place. The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

Consider the number of elements in `nums` which are not equal to `val` be `k`. To get accepted, you need to do the following things:
1. Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`.
2. The remaining elements of `nums` are not important as well as the size of `nums`.
3. Return `k`.

## Approaches

### Approach 1: Two Pointers
This approach uses two pointers to iterate through the array and overwrite the unwanted elements.

- Time Complexity: O(N)
- Space Complexity: O(1)