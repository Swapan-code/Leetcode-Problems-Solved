# Merge Sorted Arrays

## Problem Description

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2`, respectively.

Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to 0 and should be ignored. `nums2` has a length of `n`.

## Approaches

### 1. Using a Temporary Array and two-pointer

Create a temporary array to store the merged result, then copy the result back to `nums1`.

- Time Complexity: O(m+n)
- Space Complexity: O(m+n)

### 2. Two-pointer Approach

Use two pointers to iterate through both arrays from the end towards the beginning. This way, you can fill `nums1` from the back to avoid overwriting the existing elements.

- Time Complexity: O(m+n)
- Space Complexity: O(1)


