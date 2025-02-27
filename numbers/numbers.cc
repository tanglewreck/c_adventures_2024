/*******************************************************************
 * numbers -- program to test various number operations
 *
 * Author:
 *      mier
 * Date:
 *      2024-10-26
 * Purpose: 
 *      Learning about numbers
 * Usage: 
 *      Run the program and various messages appear.
 * *******************************************************************/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cctype>

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

// NOTE: In modern versions of C/C++, function declarations without a 
// prototype is deprecated. Adding 'void' to the prototype of main(),
// i.e. 'int main(void)' instead of 'int main()', resolves this and 
// makes clang not issue a warning (which gcc does not seem to do).
int main(void) {

    int c = 0;
    /* 
    float f1 = 10 / 3; 
    float f2 = 10.0 / 3.0; 
    double d1 = 10 / 3; 
    double d1 = 10 / 3; 
    */
    int i1 = 100;
    int i2 = 10;
    int i3 = 3;

    // cout << "F00" + " " + "bar";
    string s1 = "foo";
    string s2 = "bar";
    string s3 = s1 + ' ' + s2;
    s3 += '\n';
    cout << s3;
    // cout << s1 + ' ' + s2;
    // cout << "foo"[0] + "\n";
    cout << "foo"[0];
    char c1 = "foo"[0];
    char c2 = toupper(c1);

    // this produces an error when compiled
    // with clang++ on MacOS:
    //      numbers.cc:68:14: error: expected ';' at end of declaration
    //        68 |     string s4 {"spam ham bam"};
    //           |              ^  
    //           |              ;
    //      1 error generated.
    /* string s4 {"spam ham bam"}; */
    string s4 = "spam ham bam";

    string s5 = "HAM SPAM";
    cout << s5;
    new_lines(1);


    heading("C++ ftw", '=', 10);
    new_lines(1);
    cout << "int c: " << c << "\n";

    new_lines(1);
    cout << "int 10 / 3 = " << 10 / 3 << "\n";

    new_lines(1);
    printf("float 10.0 / 3.0 = %lg\n", (float) 10.0 / 3.0 );
    printf("float 10.0 / 3.0 = %lf\n", (float) 10.0 / 3.0); 
    
    new_lines(1);
    printf("double 10 / 3 = %lf\n", (double) 10 / 3); 
    printf("double 10.0 / 3 = %lf\n", (double) 10.0 / 3); 
    printf("double 10.0 / 3.0 = %lf\n", (double) 10.0 / 3.0); 

    new_lines(1);
    printf("long e 10.0 / 3.0 = %le\n", 10.0 / 3.0); 
    printf("long f 10.0 / 3.0 = %lf\n", 10.0 / 3.0); 

    new_lines(1);
    printf("long g 10.0 / 3.0 = %lg\n", 10.0 / 3.0); 
    printf("long G 10.0 / 3.0 = %lG\n", 10.0 / 3.0); 

    new_lines(1);
    printf("long 30.20f right adjusted 10.0 / 3.0 = %30.20lf\n", 10.0 / 3.0); 
    printf("long 30.20f left adjusted 10.0 / 3.0 = %-30.20lf\n", 10.0 / 3.0); 

    new_lines(1);
    int n = 99;
    printf("decimal %d / 3 = %i\n", n, (unsigned int) n / 3); 
    printf("octal %d / 3 = %o\n", n, (unsigned int) n / 3); 
    printf("hexadecimal %d / 3 = %x\n", n, (unsigned int) n / 3); 
    printf("binary %d / 3 = %b\n", n, (unsigned int) n / 3); 

    new_lines(1);
    printf("dec %u / %u: %u\n", i1, i3, i1 / i3);
    printf("dec %u / %u: %u\n", i2, i3, i2 / i3);
    printf("hex %u / %u: %x\n", i1, i3, i1 / i3);
    printf("hex %u / %u: %x\n", i2, i3, i2 / i3);
}
