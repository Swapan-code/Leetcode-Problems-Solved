# Two Sum Problem

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Approaches

### Approach 1: Brute Force
This approach checks each pair of numbers to find the solution.
- Time Complexity: O(N^2)
- Space Complexity: O(1)

### Approach 2: Sorting and Two Pointer 
This approach involves sorting the array and then using a two-pointer technique to find the two numbers that add up to the target.
- Time Complexity: O(N*logN)
- Space Complexity: O(N)

### Approach 3: Two Pass Hash Table
This approach uses a hash table to store the indices of the numbers.
- Time Complexity: O(N)
- Space Complexity: O(N)

### Approach 4: One Pass Hass Table
This approach optimizes the previous method by combining the two passes into one.
- Time Complexity: O(N)
- Space Complexity: O(N)