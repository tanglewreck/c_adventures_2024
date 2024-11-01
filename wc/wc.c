#include <stdio.h>

const int INSIDE = 1;                                   // Indicates whether we're INside a word
const int OUTSIDE = 0;                                  // Indicates whether we're OUTside a word


int main(int argc, char* argv[]) {
#ifdef DEBUG
    fprintf(stderr, "number of arguments (argc) = %d\n", argc);
#endif

    // Use fgets() to read a character string on stdin:
    //
    // man 3 fgets:
    //  Synopsis:
    //      char * fgets(char * restrict str, int size, FILE * restrict stream);
    //  Description:
    //      The fgets() function reads at most one less than the number of characters
    //      specified by size from the given stream and stores them in the string str.
    //      
    //      Reading stops when a newline character is found, at end-of-file or error.
    //      
    //      The newline, if any, is retained. 
    //
    //      If any characters are read and there is no error, a ‘\0’ character is
    //      appended to end the string.
    //
    char a_line[80];  // Read at most 80 characters into this char array
    char *a_char_ptr; // a pointer to the data returned by fgets
    char a_char;      // the character read from the input

    a_char_ptr = fgets(a_line, sizeof(a_line), stdin);
#ifdef DEBUG
    fprintf(stderr, "string read by fgets (a_char_ptr) = %s\n", a_char_ptr);

    char *another_char_ptr;

    /* These two are equivalent */
    another_char_ptr = a_line; 
    another_char_ptr = &a_line[0];

    /* Hence, these two are also equivalent */
    // printf("another_char_ptr = %s\n", another_char_ptr);
    printf("another_char_ptr = %s\n", &a_line[0]);
    /* man 3 printf says this about %s:
     *      s   The char * argument is expected to be a pointer
     *      to an array of character type (**pointer to a string**).
     */

    printf("stepping through the input using another_char_ptr:\n");
    while ( (a_char = *another_char_ptr) != '\0' ) {
            printf("%c ", a_char);
            another_char_ptr += 1;
            // ++another_char_ptr;
    }
    printf("\n");
#endif

    /* char *outputSomething(void);                    // Prototype of a function implemented further down
    outputSomething(); */

    int nc = 0;  // character-counter
    int nl = 0;  // line-counter
    int nw = 0;  // word-counter
    int state;   // indicator as to whether we're INSIDE or OUTSIDE of a word,
    state = OUTSIDE;  // we begin outside a word

#ifdef DEBUG
    printf("\n");
    printf("about to enter the main while loop,\n");
    printf("printing characters as we go:\n");
#endif
    // while ( (c = getchar()) != EOF ) {  // read until there's nothing more to read
    while ( (a_char = *a_char_ptr ) != '\0' ) {  // read until there's nothing more to read
        nc += 1;  // increase the number of characters by one

        if ( a_char == '\n' ) { 
            nl += 1;  // character is a newline, so up the number of lines
        }

        /* handle whitespace character read: */
        if ( a_char == ' ' ||
                a_char == '\n' ||
                a_char == '\t') {  
            state = OUTSIDE;  // set state to OUTSIDE of a word

#ifdef DEBUG
            printf("\nOUT: (%d)  ", a_char);
#endif

        } else if ( state == OUTSIDE ) {  // we've just entered a word
            nw += 1;  // increase the number of words by one
            state = INSIDE;  // and set state to INSIDE a word
#ifdef DEBUG
            printf("IN: %c (%d) ", a_char, nw);
#endif
        } else if ( state == INSIDE ) {
#ifdef DEBUG
            printf("IN: %c (%d) ", a_char, nw);
#endif

        }
        a_char_ptr += 1;  // move on to the next character

    }
#ifdef DEBUG
    printf("\n\n");
    printf("and here's the results:\n");
#endif
    printf("    %d    %d    %d\n", nl, nw, nc);     // Loop is done, so print results
}

char *outputSomething(void) {
    printf("something\n");
    return 0;
} 
