/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    printf("-----------------\n");

    /*

    String Functions
    ==================
    C also has many useful string functions, which can be used
    to perform certain operations on strings.

    To use them, you must include the <string.h> header file in
    your program:

    #include <string.h>

    String Length
    --------------
    To get the length of a string, you can use the strlen() function:*/

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("string \'alphabet\' length is : %d\n", strlen(alphabet));
    printf("-----------------\n");

    /*
    In the Strings chapter, we used sizeof to get the size of a string/array.

    Note that 'sizeof' and 'strlen' behaves differently, as sizeof also
    includes the \0 character when counting: */

    printf("%d\n", strlen(alphabet)); // 26
    printf("%d\n", sizeof(alphabet)); // 27
    printf("-----------------\n");

    /*
    It is also important that you know that sizeof will always return the
    memory size (in bytes), and not the actual string length: */

    char alphabet_two[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet_two)); // 26
    printf("%d\n", sizeof(alphabet_two)); // 50
    printf("-----------------\n");

    /*
    Concatenate Strings
    --------------------
    To concatenate (combine) two strings, you can use the strcat() function: */
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s \n", str1);
    printf("-----------------\n");

    /*
    Note that the size of str1 should be large enough to store the result of
    the two strings combined (20 in our example). */

    /*
    Copy Strings
    ---------------
    To copy the value of one string to another, you can use the strcpy() function: */

    char str3[20] = "I will be copied here again!";
    char str4[20];

    // Copy/create str4 from to str3
    strcpy(str4, str3);

    // Print str4
    printf("%s\n", str4);
    printf("-----------------\n");

    /* Note that the size of str4 should be large enough to store the copied
    string (20 in our example). */

    /*
    Compare Strings
    -----------------
    To compare two strings, you can use the strcmp() function.

    It returns 0 if the two strings are equal, otherwise a value that is not 0 */

    char strA[] = "Hello";
    char strB[] = "Hello";
    char strC[] = "Hi";

    // Compare strA and strB, and print the result
    printf("%d\n", strcmp(strA, strB)); // Returns 0 (the strings are equal)

    // Compare strA and strC, and print the result
    printf("%d\n", strcmp(strA, strC)); // Returns -4 (the strings are not equal)
    printf("-----------------\n");

    return 0;
}