# Algorithms Assighment

## Fibonacci

The fibonacci sequence is a mathmatical sequence where the next number is the sum of the previous two numbers

0, 1, 2, 3, 5, 8, 13, 21 etc

Your job is to find the `nth` fibonacci number

for example the 5th fibonacci number is `5`, the 6th is `8`

i have stubbed out the function for you in `include/algo.hpp`

``` c
long fibonacci(const int n)
{
    return 0;
}
```

## Linear Search
A linear search algorithm is searching for a particular element in a series. 
``` c
int linear_search(Array * a, const int target)
{
    return 0;
}

```

your job is to search for the `target` element in the array `a` and return the `index` of the element, if no element is found return -1

### Custom Array Type
to ease the process of using arrays in `c` i have written a custom array type 

``` c
typedef struct {
    int *data;
    size_t len;
} Array;
```
Ive also stubbed out iterating through the array type by index
``` c
for(size_t i = 0; i < a->len; i++)
{
    int elem = a->data[i];
}
```

## Factorial

A factorial is defined by

```
n! = n×(n−1)×(n−2)×⋯×2×1
```

or in plain english 

``` mathematica
The factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n
```

``` c
long factorial(const int n)
{
    return 0;
}
```

* Rubric
| Description                      | Points |
|----------------------------------|--------|
| Code Compiles                    | 5      |
| Code is well formed/easy to read | 5      |
| Code Contains No Warnings        | 5      |
| Tests Pass                       | 5      |




  







