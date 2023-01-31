/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/* Memory Address
================ */

#include <stdio.h>

int main()
{

    /*
    When a variable is created in C, a memory address is assigned
    to that variable. The memory address is the location of where
    the variable is stored on the computer. When we assign a value
    to the variable, it is stored in this memory address.

    To access the memory address, use the 'reference operator' (&),
    and the result will represent where the variable is stored: */

    int myAge = 38;
    printf("%d\n", myAge);  // Outputs 38
    printf("%p\n", &myAge); // Outputs 000000000061FE1C

    /*
    Note: The memory address is in hexadecimal form (0x..).
    You probably won't get the same result in your program.

    You should also note that '&myAge' is often called a "pointer".
    A pointer basically stores the memory address of a variable as
    its value. To print pointer values, we use the '%p' format
    specifier. You will learn much more about pointers the next
    chapter.


    Why is it useful to know the memory address ?
    ----------------------------------------------
    Pointers are important in C, because they give you the ability
    to manipulate the data in the computer's memory - this can reduce
    the code and improve the performance.

    Pointers are one of the things that make C stand out from other
    programming languages, like Python and Java. */

    return 0;
}