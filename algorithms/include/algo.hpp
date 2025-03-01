#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

long fibonacci(const int n) {
    //these will return the base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    //used to store the last two nums in sequence
    long a = 0, b = 1;

    for (int i = 2; i <= n; ++i) {
        long next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int linear_search(Array * a, const int target)
{
    for (size_t i = 0; i < a->len; i++) {
        if (a->data[i] == target) {
            return i;
        }
    }
    return -1;
}

long factorial(const long n) { 
    if (n < 0) return -1; //will handle negative cases
    if (n = 0) return 1; //handles base case of 0
    long fctr = n;
    for (long i = n-1; i > 0; i--) {
        fctr = fctr * i;
    }
    return fctr;
}

//int main() {
//    //to test fibonnaci
//    int n = 10;
//
//    long result = fibonacci(n);
//
//    printf("The %dth Fibonacci number is: %ld\n", n, result);
//
//    n = 6;
//    result = fibonacci(n);
//    printf("The %dth Fibonacci number is: %ld\n", n, result);
//    
//    //to test linear search
//    int data[] = {3, 7, 1, 9, 5};
//
//    Array *a = init(5, data);
//
//    int target = 9;
//    int index = linear_search(a, target);
//
//    if (index != -1) {
//        printf("Element %d found at index %d\n", target, index);
//    } else {
//        printf("Element %d not found\n", target);
//    }
//    
//    //to test factorial
//    int m = 5;
//    printf("Factorial of %d is %ld\n", m, factorial(m)); 
//    return 0;
//}

#endif // ALGO_H_
