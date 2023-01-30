/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
02 Mars. 2022
---------------------------*/

/* Operators
===============*/

#include <stdio.h>
int main()
{

    /* Operators are used to perform operations on variables and values.
    In the example below, we use the '+' operator to add together two
    values: */

    int myNum = 100 + 50;

    /* Although the '+' operator is often used to add together two values,
    like in the example above, it can also be used to add together a
    variable and a value, or a variable and another variable: */

    short int sum1 = 100 + 50;    // 150 (100 + 50)
    short int sum2 = sum1 + 250;  // 400 (150 + 250)
    short int sum3 = sum2 + sum2; // 800 (400 + 400)

    /* C divides the operators into the following groups:

     > Arithmetic operators
     > Assignment operators
     > Comparison operators
     > Logical operators
     > Bitwise operators


     Arithmetic Operators
     -----------------------
     Arithmetic operators are used to perform common mathematical operations.

     Operator 	        Name 	                                Description
     -----------------------------------------------------------------------------
     + 	Addition 	    Adds together two values 	            x + y
     -----------------------------------------------------------------------------
     - 	Subtraction 	Subtracts one value from another        x - y
     -----------------------------------------------------------------------------
     * 	Multiplication 	Multiplies two values 	                x * y
     -----------------------------------------------------------------------------
     / 	Division 	    Divides one value by another 	        x / y
     -----------------------------------------------------------------------------
     % 	Modulus 	    Returns the division remainder 	        x % y
     -----------------------------------------------------------------------------
     ++ Increment 	    Increases the value of a variable by 1 	++x
     -----------------------------------------------------------------------------
     -- Decrement 	    Decreases the value of a variable by 1 	--x
     -----------------------------------------------------------------------------


     Assignment Operators
     -----------------------
     Assignment operators are used to assign values to variables.

     Operator 	Example 	Same As
     -----------------------------------------------------------------------------
     = 	        x = 5 	    x = 5
     -----------------------------------------------------------------------------
     += 	        x += 3 	    x = x + 3
     -----------------------------------------------------------------------------
     -= 	        x -= 3 	    x = x - 3
     -----------------------------------------------------------------------------
     *= 	        x *= 3 	    x = x * 3
     -----------------------------------------------------------------------------
     /= 	        x /= 3 	    x = x / 3
     -----------------------------------------------------------------------------
     %= 	        x %= 3 	    x = x % 3
     -----------------------------------------------------------------------------
     &= 	        x &= 3 	    x = x & 3
     -----------------------------------------------------------------------------
     |= 	        x |= 3 	    x = x | 3
     -----------------------------------------------------------------------------
     ^= 	        x ^= 3 	    x = x ^ 3
     -----------------------------------------------------------------------------
     >>= 	    x >>= 3 	x = x >> 3
     -----------------------------------------------------------------------------
     <<= 	    x <<= 3 	x = x << 3
     -----------------------------------------------------------------------------


     Comparison Operators
     ---------------------

    Operator 	Name 	                  Example
    -----------------------------------------------------
    == 	        Equal to 	              x == y
    -----------------------------------------------------
    != 	        Not equal 	              x != y
    -----------------------------------------------------
    > 	        Greater than              x > y
    -----------------------------------------------------
    < 	        Less than 	              x < y
    -----------------------------------------------------
    >= 	        Greater than or equal to  x >= y
    -----------------------------------------------------
    <= 	        Less than or equal to 	  x <= y
    -----------------------------------------------------*/

    short int x = 5;
    short int y = 3;
    short int z = 8;
    printf("\n5 > 3 : %d", x > y, "\n"); // returns 1 (true) because 5 is greater than 3
    printf("\n5 > 8 : %i", x > z, "\n"); // returns 0 (false) because 5 is less than 8

    /* Logical Operators
    --------------------
    Logical operators are used to determine the logic between variables or values:

    -----------------------------------------------------------------------------------------------------
    Operator  Name 	        Description 	                                         Example
    -----------------------------------------------------------------------------------------------------
    &&  	  Logical and 	Returns true if both statements are true 	             x < 5 &&  x < 10
    -----------------------------------------------------------------------------------------------------
    ||  	  Logical or 	Returns true if one of the statements is true 	         x < 5 || x < 4
    -----------------------------------------------------------------------------------------------------
    ! 	      Logical not 	Reverse the result, returns false if the result is true  !(x < 5 && x < 10)
    -----------------------------------------------------------------------------------------------------


    Sizeof Operator
    ------------------
    The memory size (in bytes) of a data type or a variable can be found with the "sizeof" operator:

    Example
    -------- */

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("\n%lu\n", sizeof(myInt));  // 4
    printf("%lu\n", sizeof(myFloat));  // 4
    printf("%lu\n", sizeof(myDouble)); // 8
    printf("%lu\n", sizeof(myChar));   // 1

    return 0;
}

/*
Note that we use the %lu format specifer to print the result, instead of %d.
It is because the compiler expects the sizeof operator to return a 'long unsigned'
int (%lu), instead of int (%d). On some computers it might work with %d, but it
is safer to use %lu. */