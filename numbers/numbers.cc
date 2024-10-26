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

int main() {

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

    printf("int c: %d\n", c);
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
}
