/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab2D

This program attempts to print out the first 60 numbers of the fibonacchi sequence.
COMMENT: As it approaches a very big number, it turns negative. It's likely that the integer cannot hold anything past the bounds of -2 billion and 2 billion. What happens is that it starts looping the numbers within those bounds.
*/

#include <iostream>

int main()
{
    int fib[60];

    fib[0] = 0;
    fib[1] = 1;
    std::cout << fib[0] << std::endl << fib[1] << std::endl;
    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
        std::cout << fib[i] << std::endl;
    }
    return 0;
}