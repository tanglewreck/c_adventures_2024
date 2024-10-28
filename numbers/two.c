#include <stdio.h>

// NOTE: In modern versions of C/C++, function declarations without a 
// prototype is deprecated. Adding 'void' to the prototype of main(),
// i.e. 'int main(void)' instead of 'int main()', resolves this and 
// makes clang not issue a warning (which gcc does not seem to do).
int main(void) {
    printf("why is 2 + 2 = %d?\n"); // why is 2 + 2 = 5586 (or whatever)?
    printf("2 + 2 = %d\n", 2 + 2);  // this is what we want
}
