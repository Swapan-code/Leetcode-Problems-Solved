# Palindrome Number Problem

## Problem Statement
Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

## Approaches

### Approach 1: Converting the Number to a String and Reversing it
This approach converts the number to a string and reverses it. Then check if original and reversed are equal strings or not.
- Time Complexity: O(log x) or O(N) where N is number of digits in x
- Space Complexity: O(log x) or O(N) where N is number of digits in x

### Approach 2: Converting the Number to a String
This approach converts the number to a string and checks if the string is a palindrome.
- Time Complexity: O(log x) or O(N) where N is number of digits in x
- Space Complexity: O(log x) or O(N) where N is number of digits in x

### Approach 3: Reversing the Number
This approach reverses the number and checks if the reversed number is equal to the original number.
- Time Complexity: O(log x) or O(N) where N is number of digits in x
- Space Complexity: O(1)
<br>
<strong>Note: Negative integers can never be palindrome so create special case for them.<strong>
<br>
<strong>Note: log base 10 is used.<strong>