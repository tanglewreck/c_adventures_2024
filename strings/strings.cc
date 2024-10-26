/*******************************************************************
 * strings -- C++ program to test various string operations
 *
 * Author:
 *      mier
 * Date:
 *      2024-10-26
 * Purpose: 
 *      Learning about strings in C++
 * Usage: 
 *      Run the program and various messages appear.
 * *******************************************************************/
#include <stdio.h>
#include <string.h>
#include <iostream>

bool accept() {
    std::cout << "Proceed (y/N)? ";
    char answer = 'n';
    std::cin >> answer;

    if (answer == 'y') return true;
    return false;
}


bool accept2() {
    char answer = 'n';
    std::cout << "Proceed (y/N)? ";
    std::cin >> answer;
    switch (answer) {
        case 'y':
            return true;
        case 'Y':
            return true;
        case 'n':
            return false;
        default:
            return false;
    }
}

int main() {
    std::cout << "Hello, World!\n\n";
    std::cerr << "Hello, STDERR!\n";
    if (accept2()){
        std::cout << "Accepted\n";
    } else {
        std::cout << "Not accepted\n";
    }

}


