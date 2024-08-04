# Valid Parentheses Problem

## Problem Statement
Given a string `s` containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

## Approaches

### Approach 1: Using a Stack
This approach uses a stack to keep track of opening brackets and ensures they are closed in the correct order.
- Check if stack is empty in end [Checks if there is closing bracket for every opening bracket]
- Check if stack is not empty when closing bracket is received.

