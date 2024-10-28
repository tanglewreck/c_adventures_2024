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


// NOTE: In modern versions of C/C++, function declarations without a 
// prototype is deprecated. Adding 'void' to the prototype of main(),
// i.e. 'int main(void)' instead of 'int main()', resolves this and 
// makes clang not issue a warning (which gcc does not seem to do).
int main(void) {

    /* 
    float f1 = 10 / 3; 
    float f2 = 10.0 / 3.0; 
    double d1 = 10 / 3; 
    double d1 = 10 / 3; 
    */
    int i1 = 100;
    int i2 = 10;
    int i3 = 3;
    long int c = 0;
    long int* C = &c;

    printf("long int c: %ld\n", c);
    printf("long int c (via a pointer, *C = &c): %ld\n", *C);
    printf("int 10 / 3: %d\n", 10 / 3);
    printf("\n");
    printf("float 10.0 / 3.0 :%lg\n", (float) 10.0 / 3.0 );
    printf("float 10.0 / 3.0: %lf\n", (float) 10.0 / 3.0); 
    printf("\n");
    printf("double 10 / 3: %lf\n", (double) 10 / 3); 
    printf("double 10.0 / 3: %lf\n", (double) 10.0 / 3); 
    printf("long e 10.0 / 3.0: %le\n", 10.0 / 3.0); 
    printf("long f 10.0 / 3.0: %lf\n", 10.0 / 3.0); 
    printf("long g 10.0 / 3.0: %lg\n", 10.0 / 3.0); 
    printf("long G 10.0 / 3.0: %lG\n", 10.0 / 3.0); 
    printf("double 10.0 / 3.0: %lf\n", (double) 10.0 / 3.0); 
    printf("long 30.20f right adjusted 10.0 / 3.0: %30.20lf\n", 10.0 / 3.0); 
    printf("long 30.20f left adjusted 10.0 / 3.0: %-30.20lf\n", 10.0 / 3.0); 
    printf("hexadecimal 10 / 3: %x\n", (unsigned int) 10 / 3); 
    printf("dec %u / %u: %u\n", i1, i3, i1 / i3);
    printf("dec %u / %u: %u\n", i2, i3, i2 / i3);
    printf("hex %u / %u: %x\n", i1, i3, i1 / i3);
    printf("hex %u / %u: %x\n", i2, i3, i2 / i3);

    char line[100];
    printf("\n\n");
    printf("Enter an integer: ");
    long int a = (long int) fgets(line, sizeof(line), stdin);
    sscanf(line, "%ld", &a);
    fflush(stdin);

    printf("Enter another integer: ");
    long int d = (long int) fgets(line, sizeof(line), stdin);
    printf("\n");
    printf("(pre sscanf, post fgets) d = %ld\n", d);   /* This not what we want */ 
    sscanf(line, "%ld", &d);  /* Now d contains the integer that was entered */
    
    printf("\n");
    printf("(post sscanf) d = %06ld\n", d);  

    printf("\n");
    printf("%04ld + %04ld = %ld\n", a, d, a + d);
    printf("%ld - %ld = %ld\n", a, d, a - d);
    printf("%ld * %ld = %ld\n", a, d, a * d);
    printf("%ld / %ld = %ld\n", a, d, a / d);
    printf("%2.2f / %2.2f = %2.2f\n", (float)a, (float)d, (float)a / d);
    printf("%ld %c %ld = %ld\n", a, '%', d, a % d);
    fflush(stdin);


     return(0);
}
