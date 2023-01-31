/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("-----------------\n");

    /* C Strings - Special Characters
    ==================================

    Because strings must be written within quotes, C will
    misunderstand this string, and generate an error: */

    // char txt[] = "We are the so-called " Vikings " from the north.";

    /* The solution to avoid this problem, is to use the
    backslash escape character.

    The backslash (\) escape character turns special characters into s
    tring characters:

    Escape character 	Result 	Description
    -----------------------------------------
          \'               ' 	Single quote
    -----------------------------------------
          \" 	           " 	Double quote
    -----------------------------------------
          \\ 	           \ 	Backslash
    -----------------------------------------

    The sequence \"  inserts a double quote in a string: */

    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt);

    /* The sequence \'  inserts a single quote in a string: */

    char txt2[] = "It\'s alright.";
    printf("%s\n", txt2);

    /* The sequence \\ inserts a single backslash in a string : */

    char txt3[] = "The character \\ is called backslash.";
    printf("%s\n", txt3);

    /*
    Other popular escape characters in C are :

    Escape   Character Result
    ----------------------------
    \n         New Line
    ----------------------------
    \t         Tab
    ----------------------------
    \0         Null
    ---------------------------- */

    return 0;
}