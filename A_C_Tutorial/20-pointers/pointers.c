/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/*

Creating Pointers
===================*/

#include <stdio.h>

int main()
{
    /* You learned from the previous chapter, that we can get
    the memory address of a variable with the reference
    operator '&':
    */

    int myAge = 39;
    printf("%d\n", myAge);  // Outputs 39
    printf("%p\n", &myAge); // Outputs 000000000061FE1C
    printf("-----------------------\n");

    /*
    In the example above, '&myAge' is also known as a pointer.
    A pointer is a variable that stores the memory address of
    another variable as its value.

    A 'pointer variable' points to a data type (like int) of the
    same type, and is created with the * operator. The address
    of the variable you're working with is assigned to the pointer: */

    int herAge = 38;    // An int variable
    int *ptr = &herAge; // A pointer variable, with the name ptr,
                        // that stores the address of herAge

    printf("%d\n", herAge); // Output the value of herAge (38)

    printf("%p\n", &herAge); // Output the memory address of herAge (0x7ffe5367e044)

    printf("%p\n", ptr); // Output the memory address of myAge with
                         // the pointer (0x7ffe5367e044)

    printf("%p\n", &ptr); // Output the memory address of myAge with
                          // the pointer (0x7ffe536764f6)
    printf("-----------------------\n");

    /*
    Example explained

    Create a pointer variable with the name ptr, that points to
    an int variable (myAge). Note that the type of the pointer
    has to match the type of the variable you're working with.

    Use the '&' operator to store the memory address of the 'myAge'
    variable, and assign it to the pointer.

    Now, ptr holds the value of myAge's memory address.


    Dereference
    ----------------
    In the example above, we used the pointer variable to get the
    memory address of a variable (used together with the & reference
    operator).

    However, you can also get the value of the variable the pointer
    points to, by using the * operator (the dereference operator): */

    int age = 38;       // Variable declaration
    int *ageptr = &age; // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer (000000000061FE14)
    printf("%p\n", ageptr);

    // Dereference: Output the value of myAge with the pointer (38)
    printf("%d\n", *ageptr);

    /*
    Note that the * sign can be confusing here, as it does two different
    things in our code:

    > When used in declaration (int* ptr), it creates a pointer variable.
    > When not used in declaration, it act as a 'dereference operator'.


    Why Should I Learn About Pointers ?
    -----------------------------------
    Pointers are important in C, because they give you the ability to
    manipulate the data in the computer's memory - this can reduce the
    code and improve the performance.


    Good To Know: There are three ways to declare pointer variables,
    but the first way is mostly used:

    int* myNum; // Most used
    int * myNum;
    int *myNum;

    */
    return 0;
}
