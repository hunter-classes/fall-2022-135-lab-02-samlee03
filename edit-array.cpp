/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab2C

This programs creates an array of 10 elements with the value 1. The program then prompts the user to change any index to any value as long as the index are within the bounds.
*/
#include <iostream>
int main() 
{
    const int ARRAY_SIZE = 10;
    int myData[ARRAY_SIZE];
    int index = 0;
    int value = 1;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        myData[i] = 1;
        // std::cout << myData[i] << " ";
    }
    do {
        myData[index] = value;
        std::cout << "\n";
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            std::cout << myData[i] << " ";
        }
        std::cout << "\n\n";
        std::cout << "Input index: ";
        std::cin >> index;
        if (index < 10 && index >= 0)
        {
            std::cout << "Input value: ";
            std::cin >> value;
        }
    } while (index < 10 && index >= 0);

    std::cout << "\n" << "Index out of range. Exit." << std::endl;
    return 0;
}