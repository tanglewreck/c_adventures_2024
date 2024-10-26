/*******************************************************************
 * bitwise -- program to test various bitwise operations
 *
 * Author:
 *      mier
 * Date:
 *      2024-10-26
 * Purpose: 
 *      Learning bitwise operations
 * Usage: 
 *      Run the program and various messages appear.
 * *******************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    int a = 7;
    int b = 5;
    int c = 31;
    int d = 19;

/* and */
    int a_and_b = a & b;
    int a_and_c = a & c;
    int a_and_d = a & d;

/* or */
    int a_or_b = a | b;
    int a_or_c = a | c;
    int a_or_d = a | d;

    printf("***************************************************\n");
    printf(" a = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", a, a, a, a);
    printf(" b = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", b, b, b, b);
    printf(" c = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", c, c, c, c);
    printf(" d = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", d, d, d, d);
    printf("***************************************************\n");

    printf("\n");
    printf("++++++++++\n");
    printf("Decimal &:\n");
    printf("++++++++++\n");
    printf("a & b: %d & %d = %d\n", a, b, a_and_b);  /* a & b, decimal*/
    printf("a & c: %d & %d = %d\n", a, c, a_and_c);  /* a & c, decimal*/
    printf("a & d: %d & %d = %d\n", a, d, a_and_d);  /* a & d, decimal*/

    printf("\n");
    printf("++++++++++\n");
    printf("Decimal |:\n");
    printf("+++++++++/n");
    printf("a | b: %d | %d = %d\n", a, b, a_or_b);   /* a | b, decimal*/
    printf("a | c: %d | %d = %d\n", a, c, a_or_c);   /* a | c, decimal*/
    printf("a | d: %d | %d = %d\n", a, d, a_or_d);   /* a | d, decimal*/
    
    printf("\n");
    printf("++++++++\n");
    printf("Octal &:\n");
    printf("++++++++\n");
    printf("a & b: %o & %o = %o\n", a, b, a_and_b);    /* a & b, octal*/
    printf("a & c: %o & %o = %o\n", a, c, a_and_c);    /* a & c, octal*/
    printf("a & d: %o & %o = %o\n", a, d, a_and_d);    /* a & d, octal*/

    printf("\n");
    printf("++++++++\n");
    printf("Octal |:\n");
    printf("++++++++\n");
    printf("a | b: %o | %o = %o\n", a, b, a_or_b);     /* a | b, octal*/
    printf("a | c: %o | %o = %o\n", a, c, a_or_c);     /* a | c, octal*/
    printf("a | d: %o | %o = %o\n", a, d, a_or_d);     /* a | d, octal*/

    printf("\n");
    printf("++++++++++++++\n");
    printf("Hexadecimal &:\n");
    printf("++++++++++++++\n");
    printf("a & b: %x & %x = %x\n", a, b, a_and_b);    /* a & b, hexadecimal*/
    printf("a & c: %x & %x = %x\n", a, c, a_and_c);    /* a & c, hexadecimal*/
    printf("a & d: %x & %x = %x\n", a, d, a_and_d);    /* a & d, hexadecimal*/

    printf("\n");
    printf("++++++++++++++\n");
    printf("Hexadecimal |:\n");
    printf("++++++++++++++\n");
    printf("a | b: %x | %x = %x\n", a, b, a_or_b);     /* a | b, hexadecimal*/
    printf("a | c: %x | %x = %x\n", a, c, a_or_c);     /* a | c, hexadecimal*/
    printf("a | d: %x | %x = %x\n", a, d, a_or_d);     /* a | d, hexadecimal*/

    printf("\n");
    printf("+++++++++\n");
    printf("Binary &:\n");
    printf("+++++++++\n");
    printf("a & b: %b & %b = %b\n", a, b, a_and_b);    /* a & b, binary*/
    printf("a & c: %b & %b = %b\n", a, c, a_and_c);    /* a & c, binary*/
    printf("a & d: %b & %b = %b\n", a, d, a_and_d);    /* a & d, binary*/

    printf("\n");
    printf("+++++++++\n");
    printf("Binary or:\n");
    printf("+++++++++\n");
    printf("a | b: %b | %b = %b\n", a, b, a_or_b);     /* a | b, binary*/
    printf("a | c: %b | %b = %b\n", a, c, a_or_c);     /* a | c, binary*/
    printf("a | d: %b | %b = %b\n", a, d, a_or_d);     /* a | d, binary*/

/****************************************/ 
/*  Arithmetics                          */
/****************************************/ 
    printf("Press ENTER to continue\n");
    getchar();
    fflush(stdin);

    /* if (scanf("%s", &a_char) == 0) {
        printf("foo zero\n");
    }*/

    fprintf(stdout, "\n"); 
    printf("***************************************************\n");
    printf(" a = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", a, a, a, a);
    printf(" b = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", b, b, b, b);
    printf(" c = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", c, c, c, c);
    printf(" d = %d (dec) = %o (oct) = %x (hex) = %b (bin)\n", d, d, d, d);
    printf("***************************************************\n");


    printf("\n");
    printf("++++++++++\n");
    printf("Decimal *:\n");
    printf("++++++++++\n");
    printf("a * b: %d * %d = %d\n", a, b, a * b);  /* a * b, decimal*/
    printf("a * c: %d * %d = %d\n", a, c, a * c);  /* a * c, decimal*/
    printf("a * d: %d * %d = %d\n", a, d, a * d);  /* a * d, decimal*/

    printf("\n");
    printf("++++++++++\n");
    printf("Decimal +:\n");
    printf("++++++++++\n");
    printf("a + b: %d + %d = %d\n", a, b, a + b);   /* a + b, decimal*/
    printf("a + c: %d + %d = %d\n", a, c, a + c);   /* a + c, decimal*/
    printf("a + d: %d + %d = %d\n", a, d, a + d);   /* a + d, decimal*/
    
    printf("\n");
    printf("++++++++\n");
    printf("Octal *:\n");
    printf("++++++++\n");
    printf("a * b: %o * %o = %o\n", a, b, a * b);    /* a * b, octal*/
    printf("a * c: %o * %o = %o\n", a, c, a * c);    /* a * c, octal*/
    printf("a * d: %o * %o = %o\n", a, d, a * d);    /* a * d, octal*/

    printf("\n");
    printf("++++++++\n");
    printf("Octal +:\n");
    printf("++++++++\n");
    printf("a + b: %o + %o = %o\n", a, b, a + b);     /* a + b, octal*/
    printf("a + c: %o + %o = %o\n", a, c, a + c);     /* a + c, octal*/
    printf("a + d: %o + %o = %o\n", a, d, a + d);     /* a + d, octal*/

    printf("\n");
    printf("++++++++++++++\n");
    printf("Hexadecimal *:\n");
    printf("++++++++++++++\n");
    printf("a * b: %x * %x = %x\n", a, b, a * b);    /* a * b, hexadecimal*/
    printf("a * c: %x * %x = %x\n", a, c, a * c);    /* a * c, hexadecimal*/
    printf("a * d: %x * %x = %x\n", a, d, a * d);    /* a * d, hexadecimal*/

    printf("\n");
    printf("++++++++++++++\n");
    printf("Hexadecimal +:\n");
    printf("++++++++++++++\n");
    printf("a + b: %x + %x = %x\n", a, b, a + b);     /* a + b, hexadecimal*/
    printf("a + c: %x + %x = %x\n", a, c, a + c);     /* a + c, hexadecimal*/
    printf("a + d: %x + %x = %x\n", a, d, a + d);     /* a + d, hexadecimal*/

    printf("\n");
    printf("+++++++++\n");
    printf("Binary *:\n");
    printf("+++++++++\n");
    printf("a * b: %b * %b = %b\n", a, b, a * b);    /* a * b, binary*/
    printf("a * c: %b * %b = %b\n", a, c, a * c);    /* a * c, binary*/
    printf("a * d: %b * %b = %b\n", a, d, a * d);    /* a * d, binary*/

    printf("\n");
    printf("+++++++++\n");
    printf("Binary +:\n");
    printf("+++++++++\n");
    printf("a + b: %b + %b = %b\n", a, b, a + b);     /* a + b, binary*/
    printf("a + c: %b + %b = %b\n", a, c, a + c);     /* a + c, binary*/
    printf("a + d: %b + %b = %b\n", a, d, a + d);     /* a + d, binary*/
    printf("\n");

    return(0);
}


