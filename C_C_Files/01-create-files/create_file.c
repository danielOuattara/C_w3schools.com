/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
30 Janvier 2023
---------------------------*/

/* C Files Handling
=====================*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    /* Files Handling
    ------------------

    In C, you can create, open, read and write to files
    by declaring a pointer of type FILE, and use the fopen()
    function: */

    // FILE *fptr
    // fptr = fopen(filename, mode);

    /*

    FILE is basically a data type, and we need to create
    a pointer variable to work with it (fptr).

    For now, this line is not important. It's just something
    you need when working with files.

    To actually open a file, use the fopen() function, which takes
    two parameters:

    Parameter 	Description
    ---------   ------------
    ------------------------------------------------------------
    filename 	The name of the actual file you want to open
                (or create), like filename.txt
    ------------------------------------------------------------
    mode 	    A single character, which represents what you
                want to do with the file (read, write or append):
    ------------------------------------------------------------

    w - Writes to a file, or create it if not exist
    a - Appends new data to a file
    r - Reads from a file


    Create a File
    --------------

    To create a file, you can use the 'w' mode inside the fopen()
    function.

    The 'w' mode is used to write to a file. However, if the file
    does not exist, it will create one for you: */

    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "w");

    // Close the file
    fclose(fptr);

    /* Note:
        > The file is created in the same directory as your
          other C files, if nothing else is specified.

        > If you want to create the file in a specific folder
          just provide an absolute path:

    fptr = fopen("C:\directoryname\filename.txt", "w");


    Closing the file
    -----------------

    Did you notice the 'fclose()' function in our example above ?
    This will close the file when we are done with it.

    It is considered as good practice, because it makes sure that:
     > changes are saved properly
     > other programs can use the file (if you want)
     > clean up unnecessary memory space

    In the next chapters, you will learn how to write content
    to a file and read from it. */

    fptr = fopen("test-file.txt", "a");
    fclose(fptr);

    return 0;
}
