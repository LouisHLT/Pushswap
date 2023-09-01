# Pushswap
## {EPITECH} | 1st year | CPE (Elementary Programming)

⚠️ For Epitech students, don't copy-paste the code, be aware of the -42 ⚠️

### Subject : &nbsp;

The game is made up of two lists of numbers named l_a and l_b.
In the beginning, l_b will be empty and l_a will contain a certain amount of positive or negative numbers.
The objective of the game is to sort l_a.
In order to accomplish this, you will only have access to the following operation:

In order to manipulate the lists `l_a` and `l_b`, you have access to the following operations:

- **sa**: Swap the first two elements of `l_a`. No effect if there are less than two elements.
  
- **sb**: Swap the first two elements of `l_b`. No effect if there are less than two elements.
  
- **sc**: Perform both `sa` and `sb` simultaneously.
  
- **pa**: Take the first element from `l_b` and move it to the beginning of the `l_a` list. No effect if `l_b` is empty.
  
- **pb**: Take the first element from `l_a` and move it to the beginning of the `l_b` list. No effect if `l_a` is empty.
  
- **ra**: Rotate `l_a` towards the beginning. The first element becomes the last.
  
- **rb**: Rotate `l_b` towards the beginning. The first element becomes the last.
  
- **rr**: Perform both `ra` and `rb` simultaneously.
  
- **rra**: Rotate `l_a` towards the end. The last element becomes the first.
  
- **rrb**: Rotate `l_b` towards the end. The last element becomes the first.
  
- **rrr**: Perform both `rra` and `rrb` simultaneously.

You must create a program in which l_a is given as parameter (all numbers are valid and can fit in an integer).
The goal is to sort the list by using the fewest possible operations.
The program must print the series of operations that enable this list to be sorted.

Read the subject for more details and examples.

Good luck.

========================

## Test Results
Grade CPE : A | Note : 8.4 | No crash

| Category                                                | Percentage | Tests       |
|---------------------------------------------------------|------------|-------------|
| Algorithm app. - One number                             | 100%       | 3/3         |
| Algorithm app. - One operation needed                   | 55.6%      | 5/9         |
| Algorithm app. - Sorted list                            | 0%         | 0/6         |
| Basics                                                  | 66.7%      | 2/3         |
| Data structure                                          | 33.3%      | 2/6         |
| Optimization - Execution speed - 50 to 100              | 66.7%      | 4/6         |
| Optimization - Execution speed - 500 to 1000            | 66.7%      | 4/6         |
| Optimization - Execution speed - 2000 to 10000          | 66.7%      | 6/9         |
| Optimization - Execution speed - 50000 to 100000        | 0%         | 0/6         |
| Optimization - Number of operations - 50 to 100         | 66.7%      | 4/6         |
| Optimization - Number of operations - 500 to 1000       | 66.7%      | 4/6         |
| Optimization - Number of operations - 2000 to 10000     | 66.7%      | 6/9         |
| Optimization - Number of operations - 50000 to 100000   | 0%         | 0/6         |
| Robustness                                              | 0%         | 0/2         |


<!--
| **End scores**                        | **21.6%**  | **11/51** | **Yes (7)** |
-->
