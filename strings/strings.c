/*******************************************************************
 * strings -- program to test various string operations
 *
 * Author:
 *      mier
 * Date:
 *      2024-10-26
 * Purpose: 
 *      Learning about strings
 * Usage: 
 *      Run the program and various messages appear.
 * *******************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    /* Defining character arrays (strings) either
     * as an array of chars or as a pointer.
     * Both works but they're not of the same
     * type: */
    char *a_char_pointer = "FOO";

    printf("a_char_pointer = %s\n", a_char_pointer);
    printf("sizeof(a_char_pointer) = %lu\n\n", sizeof(a_char_pointer));

    a_char_pointer = "foo bar";
    printf("sizeof(a_char_pointer) = %lu\n", sizeof(a_char_pointer));
    printf("a_char_pointer = %s\n\n", a_char_pointer);
    for (int k = 0; k < sizeof(a_char_pointer) - 1; k++){
        printf("\ta_char_pointer[%d] = %c\n", k, a_char_pointer[k]);
    }

    char *another_char_pointer = "ham spam";
    printf("\n");
    printf("another_char_pointer = %s\n\n", another_char_pointer);

    // char a_name[] = "foo bar";
    char* a_name = "foo bar";
    printf("a_name = %s\n\n", a_name);

    // char* another_name = "";
    // char another_name[] = "";
    char another_name[sizeof(a_name)] = "";
    printf("another_name (pre strcpy) = %s\n", another_name);
    strcpy(another_name, "F00 BAR");
    printf("another_name (post strcpy) = %s\n", another_name);

    printf("\n");

    return(0);
}


