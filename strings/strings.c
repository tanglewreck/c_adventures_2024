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
    char line[100];
    long int a, c;
    char a_name[] = "foo bar";
    char another_name[100];
    // char *a_char_pointer;

    printf("\n");
    printf("Enter an integer: ");
    if (fgets(line, sizeof(line), stdin) == NULL){
        printf("Bummer\n");
        return(1);
    }
    sscanf(line, "%ld", &a);
    // fflush(stdin);

    printf("Enter another integer: ");
    c = (long) fgets(line, sizeof(line), stdin);
    printf("c = %ld\n", c);   /* This not what we want */ 
    sscanf(line, "%ld", &c);  /* Now c contains the integer that was entered */
    printf("c = %ld\n", c);  
    // b = fgetc(stdin);

    printf("%ld + %ld = %ld\n", a, c, (long int) a + c);
    fflush(stdin);
    
    printf("%s\n", a_name);
    strcpy(another_name, "F00 BAR");
    printf("%s\n", another_name);

    // strcpy(&a_char_pointer, "F00 BAR");
    // printf("%s\n", &a_char_pointer);
    return(0);
}


