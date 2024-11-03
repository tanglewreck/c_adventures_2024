#include <stdio.h>
#include <string.h>

/* tmp_name -- Returns a temporary filename.
 *
 * Each time this function is called, a new name
 * will be returned.
 *
 * Warning: xxx
 *
 * Returns 
 *      Pointer to the new filename.
 */

char *tmp_file_name(void){
    static char name[30];       // The name we are generating
    static int sequence = 0;    // Sequence number for last digit

    sequence += 1;              // Move to the next filename

    strcpy(name, "/tmp");       // File prefix is "/tmp"
    name[3] = sequence + '0';   // Put in the sequence digit
    name[4] = '\0';             // Terminate the string

    return name;

}

int main(int argc, char* argv[]) {
#ifdef DEBUG
    fprintf(stderr, "number of arguments (argc) = %d\n", argc);
#endif

    char * tmp_name(void);      // Get name of temporary file
    char *name_1;               // Name of first temporary file
    char *name_2;               // Name of second temporary file

    name_1 = tmp_name();        // 
    name_2 = tmp_name();        // 

    printf("Name1: %s\n", name_1);
    printf("Name2: %s\n", name_2);

    return(0);
}

