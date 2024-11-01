#include <stdio.h>

const int IN = 1;   // Indicates whether we're INside a word
const int OUT = 0;  // Indicates whether we're OUTside a word

int main(int argc, char* argv[]) {
    int nc, nl, nw;   // char-count, line-count, word-count
    int c;            // character read
    int state;        // state is either IN (1) or OUT (0)

    nc = nl = nw = 0;  // initialise all counts
    state = OUT;       // we begin outside a word

    while ( (c = getchar()) != EOF ) {
        nc += 1;  // Up the number of characters
        if ( c == '\n' ) {  // Newline
            nl += 1;  // Up the number of lines
        }
        if ( c == ' ' || c == '\n' || c == '\t') {  // Whitespace
            state = OUT;  // Set state to OUTSide a word
/* #IFDEF DEBUG
            printf("OUT: %d\n", c);
#ENDIF */
        } else if ( state == OUT ) {  // If we're outside a word
            nw += 1;    // Up the number of words
            state = IN; // Set state to INside a word
/* #IFDEF DEBUG
            printf("IN: %d (%d)\n", c, nw);
#ENDIF */
        }

    }
    printf("%d %d %d\n", nl, nw, nc);
}
