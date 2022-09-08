/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab2B

The program references uses print_interval() function created in the funcs.cpp which prints every integer from the first int parameter til (but excluding) the second int parameter
*/

#include <iostream>
#include "funcs.h"
int main()
{
    int L, U;
    std::cout << "Please enter L: ";
    L = 5;
    std::cout << L << std::endl;
    std::cout << "Please enter U: ";
    U = 10;
    std::cout << U << std::endl;
    std::cout << "\n";

    print_interval(L, U);
    std::cout << std::endl;
    return 0;
}