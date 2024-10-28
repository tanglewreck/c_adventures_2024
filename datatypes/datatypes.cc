/*******************************************************************
 * datatypes -- C++ program to test various number operations
 *
 * Author:
 *      mier
 * Date:
 *      2024-10-27
 * Purpose: 
 *      Learning about datatypes in C++
 * Usage: 
 *      Run the program and various messages appear.
 * *******************************************************************/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cctype>
#include <vector>

using namespace std;  // so we can omit the 'std::' prefix
// using string = basic_string<char>; 

void new_lines(int n) {
    // cout << "newlines\n";
    for (int k = 0; k < n; k++) {
        cout << "\n";
    }
}


void separator(char separator_char, int separator_length) {
    for (int k = 0; k < separator_length; k++) {
        cout << separator_char;
    }
    cout << "\n";
}


void heading(string header_text, char separator_char, int separator_length) {
    separator(separator_char, separator_length);
    cout << " " << header_text << "\n";
    separator(separator_char, separator_length);
    // cout << "\n";
}

int main() {


    heading("C++ Datatypes", '=', 10);
    new_lines(1);

    cout << 29 + 13 << "\n";
    cout << 29 - 13 << "\n";
    cout << 29 * 13 << "\n";
    cout << 29 / 13 << "\n";
    cout << 29.0 / 13 << "\n";
    cout << 29 / 13. << "\n";
    cout << 29 / 13.0 << "\n";
    cout << 29  % 13 << "\n";
    cout << bool (29 == 13) << "\n";
    cout << (bool) (1 == true) << "\n";
    cout << (bool) (2 == true) << "\n";

    vector<int> v {1,2,3,4,5};
    cout << v[3] << "\n";
    int prime37 {37}; 
    cout << prime37 << "\n";

    return 0;
}
