#include "fib.h"

#include <iostream>

int fib(int i)
{    
    if(i == 0)
    {
        return 0;
    }
    else if(i == 1)
    {
        return 1;
    }
    else
    {
        return (fib(i-1) + fib(i-2));
    }
}