#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char *tmp_name(void){
    // char name[30];           // The name we are generating
    static char name[30];       // NOTE: This variable should be declared
                                // static in order to return the 
                                // expected result, i.e. a pointer to
                                // a *new* tmp-name for each call
    static int sequence = 0;    // Sequence number for last digit

    sequence += 1;              // Move to the next filename
                                // Better (clearer) than '++sequence'

#ifdef DEBUG
    // fprintf(stdout, "\tDEBUG (in tmp_name):\tsequence = %d\n", sequence);
#endif

    // strcpy(name, "tmp");        // File prefix is "/tmp"
    // char tmp_prefix[10] = "tmp";    // File prefix is "/t"mp"
    char tmp_prefix[] = "tmp";    // File prefix is "/t"mp"
    size_t tmp_prefix_length = sizeof(tmp_prefix);
    strlcpy(name, tmp_prefix, sizeof(name));
#ifdef DEBUG
    fprintf(stdout, "sizeof(name) = %d\n", (int)sizeof(name));
    fprintf(stdout, "sizeof(\"tmp\") = %c\n", (int)sizeof("tmp"));
    fprintf(stdout, "tmp_prefix_length = %d\n", (int)sizeof("tmp"));
#endif

    name[tmp_prefix_length - 1] = sequence + '0';   // Put in the sequence digit
    name[tmp_prefix_length] = '\0';             // Terminate the string
#ifdef DEBUG2
    fprintf(stdout, "sequence = %d\n", sequence);
    fprintf(stdout, "(char)sequence = %c\n", (char)sequence);
    char foo = '1';
    fprintf(stdout, "foo = %c\n", foo);
    fprintf(stdout, "atoi(10) = %d\n", atoi("10"));
    fprintf(stdout, "name = %s\n", name);
#endif

    return name;

}

int main(int argc, char* argv[]) {

#ifdef DEBUG
    char * name_1;
    char * name_2;
    char * name_3;

    char * tmp_name(void);      // Get name of temporary file
    fprintf(stdout, "\tDEBUG:\tZeroth call to tmp_name: %s\n", tmp_name());
    fprintf(stdout, "\n");
    /*
    fprintf(stdout, "\tDEBUG:\tBefore first call to tmp_name:\n");
    char * tmp_name(void);      // Get name of temporary file
    fprintf(stdout, "\tDEBUG:\tBefore second call to tmp_name:\n");
    char * tmp_name(void);      // Get name of temporary file
    fprintf(stdout, "\tDEBUG:\tBefore third call to tmp_name:\n");
    char * tmp_name(void);      // Get name of temporary file
    fprintf(stdout, "\tDEBUG:\tFirst call to tmp_name ===> name = %s\n", tmp_name());
    */

    // This does not work. Both string pointers
    // end up pointing to the same location:
    name_1 = tmp_name();        // *name_1 is now "tmp1"
    fprintf(stdout, "\tDEBUG:\tname_1 = %s\n", name_1);
    fprintf(stdout, "\n");

    name_2 = tmp_name();        // The values of both *name_1 and *name_2 are
                                // now "tmp2" since name_1 and name_2 both
                                // point to the same location, i.e. the location
                                // of the static (hence, permanent) variable 'name'
                                // of tmp_name().
                                //
    fprintf(stdout, "\tDEBUG:\tname_1 = %s\n", name_1);
    fprintf(stdout, "\tDEBUG:\tname_2 = %s\n", name_2);

    name_3 = tmp_name();
    fprintf(stdout, "\n");
    fprintf(stdout, "\tDEBUG:\tname_1 = %s\n", name_1);
    fprintf(stdout, "\tDEBUG:\tname_2 = %s\n", name_2);
    fprintf(stdout, "\tDEBUG:\tname_3 = %s\n", name_3);
    fprintf(stdout, "\n");
#endif

    char name1[10];             // Name of first temporary file
    char name2[10];            // Name of second temporary file

    // These do not return the expected strings, only two pointers
    // to the same object ("name2"): see the DEBUG code above!
/*
    char *tmp_name(void);
    char *name_1;
    char *name_2;
    name_1 = tmp_name();
    name_2 = tmp_name();
    fprintf(stdout, "%s\n", name_1);
    fprintf(stdout, "%s\n", name_2);
*/

    // COPY FIRST STRING:
    // Using strcpy() works as this stores *a copy* of the string into
    // a character array:
    //
    // (void)strcpy(name1, tmp_name());  //


    // NOTE: strncpy is better suited, and safer, to use than strcpy() since
    // the former copies *at most* sizeof(name1) characters to the destination
    // (name1); but strncpy *does not* guarantee to NUL ('\0') terminate the copied
    // string if the length of the source is *greater than or equeal to* the
    // length of the source (here: tmp_name());
    //
    // (void)strncpy(name1, tmp_name(), sizeof(name1));  // Better than strcpy()!

    // NOTE: strlcpy IS guarenteed to null terminate the copied string, so strlcpy
    // IS ALMOST CERTAINLY (ALWAYS) THE PREFERRED FUNCTION TO USE FOR COPYING STRINGS:
    //
    (void)strlcpy(name1, tmp_name(), sizeof(name1));  // Better than strncpy()!

#ifdef DEBUG
    fprintf(stdout, "\tDEBUG:\tname1 = %s\n", name1);
    fprintf(stdout, "\n");
#endif

    //
    // COPY SECOND STRING:
    // (void)strcpy(name2, tmp_name());  // USE strlcpy INSTEAD (see NOTEs above)!
    (void)strlcpy(name2, tmp_name(), sizeof(name2));

#ifdef DEBUG
    fprintf(stdout, "\tDEBUG:\tname1 = %s\n", name1);
    fprintf(stdout, "\tDEBUG:\tname2 = %s\n", name2);
#endif

    printf("Name1: %s\n", name1);
    printf("Name2: %s\n", name2);


    const int name_length = 10;
    const int array_length = 10;
    char names[array_length][name_length];         // Array of 10 char strings of length 5 
    fprintf(stdout, "\n\n");
#ifdef DEBUG2
    fprintf(stdout, "ARRAY OF TMP-NAMES:\n");
    fprintf(stdout, "array_lengrh =  %d\n", array_length);
    fprintf(stdout, "name_lengrh =  %d\n", name_length);
#endif
    for (int k = 0; k < array_length; k += 1){
        (void)strlcpy(names[k], tmp_name(), sizeof(names[0]));
        fprintf(stdout, "names[%d] = %s\n", k, names[k]);
    }
    return(0);
}

