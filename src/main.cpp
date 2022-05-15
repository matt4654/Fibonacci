#include <iostream>

#include "fib.h"

int main()
{
    int n;
    std::cout << "Enter length of Fibonacci sequence: ";
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cout << fib(i) << " ";
    }

    return 0;
}
