# Longest Common Prefix Problem

## Problem Statement
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

## Approaches

### Approach 1: Comparing with the First String
This approach involves comparing each string with the first string and finding the last index until which all strings are common.
- Time Complexity: O(S) where S is the sum of all characters in all strings. This is because in the worst case, each character of each string is compared once.
- Space Complexity: O(1)

<br>

### Approach 2: Sorting and comparing first and last strings
This approach involves sorting the array and then finding the common prefix between the first and last strings.

- Time Complexity: O(N*logN + m) where N is the number of strings and m is length of shortest string
- Space Complexity: O(1)