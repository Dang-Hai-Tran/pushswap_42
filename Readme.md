# Push_swap

## Project Overview

Push_swap is a sorting algorithm project at 42 Paris. The goal is to sort a stack of integers using a limited set of operations, with the objective of using the lowest possible number of actions.

## Features

-   Sorts a stack of integers using two stacks: A and B
-   Implements various sorting algorithms depending on the number of integers
-   Includes a checker program to verify the sorting operations

## How it Works

1. The program takes a list of integers as arguments
2. It sorts these integers using a combination of the following operations:

    - sa : swap a - swap the first 2 elements at the top of stack a
    - sb : swap b - swap the first 2 elements at the top of stack b
    - ss : sa and sb at the same time
    - pa : push a - take the first element at the top of b and put it at the top of a
    - pb : push b - take the first element at the top of a and put it at the top of b
    - ra : rotate a - shift up all elements of stack a by 1
    - rb : rotate b - shift up all elements of stack b by 1
    - rr : ra and rb at the same time
    - rra : reverse rotate a - shift down all elements of stack a by 1
    - rrb : reverse rotate b - shift down all elements of stack b by 1
    - rrr : rra and rrb at the same time

3. The program outputs the list of actions taken to sort the stack

## Installation

Clone the repository and compile the program:

1. `git clone https://github.com/Dang-Hai-Tran/pushswap_42.git`
2. `cd pushswap_42`
3. `make`

## Usage

1. To use push_swap:
   `./push_swap 2 1 3 6 5 8`
2. To use the checker:
   `make bonus` and then
   `./push_swap 2 1 3 6 5 8 | ./checker 2 1 3 6 5 8`

## Project Structure

-   `push_swap.c`: Main program file
-   `checker.c`: Checker program file
-   `push_swap_utils.c`: Utility functions
-   `sort.c`: Sorting algorithms
-   `instructions.c`: Stack manipulation functions
-   `Makefile`: Compilation instructions

## Algorithm

The sorting algorithm varies based on the number of integers:

-   For 3 numbers: Uses a hardcoded optimal solution
-   For larger sets: Implements a custom algorithm using the following approach:
    1. Push all elements except 3 from stack A to stack B
    2. Sort the remaining 3 elements in stack A
    3. For each element in stack B:
       a. Calculate the number of rotations needed in both stacks to insert the element in the correct position
       b. Choose the element that requires the least number of operations
       c. Perform the rotations and push the element back to stack A
    4. Perform final rotations to ensure the smallest element is at the top of stack A

Key features of the algorithm for larger sets:

-   Utilizes both stacks efficiently
-   Minimizes the total number of operations by calculating optimal rotations
-   Handles same-direction and different-direction rotations separately for optimization
-   Uses a greedy approach to choose the best element to push back in each iteration

## Author

[datran](mailto:datran@42.student.42.fr)

## Acknowledgements

This project is part of the 42 school curriculum.
