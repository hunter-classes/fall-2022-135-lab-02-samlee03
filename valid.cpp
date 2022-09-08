/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab2A

This program squares the value of any integer from 0-99 and prints it to the console.
*/

#include <iostream>
#include <cmath>

int main() 
{
    int userNum;
    std::cout << "Please enter an integer: ";
    std::cin >> userNum;
    while (userNum > 99 || userNum < 1)
    {
        std::cout << "Please re-enter: ";
        std::cin >> userNum;
    }
    std::cout << "\n" << "Number squared is " << pow(userNum, 2) << "\n";

    return 0;
}