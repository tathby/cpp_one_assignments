#include <iostream>
#include "../include/algo.hpp"

int fib_iterative(const int n)
{
    int prev = 0;
    int prev_prev = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = prev + prev_prev;
        prev_prev = prev;
        prev = sum;
    }
    return sum;
}

int main() {
    int x= fibonacci(10000);
    std::cout << x << std::endl;
    return 0;
}
