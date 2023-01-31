/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
15 Mars. 2022
---------------------------*/

/* Math Functions
================ */

#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

    /*There is also a list of math functions available,
    that allows you to perform mathematical tasks on numbers.

    To use them, you must include the 'math.h' header file in
    your program:


    Square Root
    ------------
    To find the square root of a number, use the 'sqrt()' function: */
    printf("%f\n", sqrt(16));

    /* Round a Number
    ---------------
    The 'ceil()' function rounds a number upwards to its nearest integer,
    and the 'floor()' method rounds a number downwards to its nearest
    integer, and returns the result: */

    printf("%f\n", ceil(1.4));
    printf("%f\n", floor(1.4));

    /* Power
    --------
    The pow() function returns the value of x to the power of y (xy): */

    printf("%f", pow(4, 3));

    /* Other Math Functions
    ---------------------
    A list of other popular math functions (from the <math.h> library)
    can be found in the table below:

    Function 	Description
    -----------------------------------------
    abs(x) 	  Returns the absolute value of x
    acos(x)   Returns the arccosine of x
    asin(x)   Returns the arcsine of x
    atan(x)   Returns the arctangent of x
    cbrt(x)   Returns the cube root of x
    cos(x) 	  Returns the cosine of x
    exp(x) 	  Returns the value of Ex
    sin(x) 	  Returns the sine of x (x is in radians)
    tan(x) 	  Returns the tangent of an angle

    */
    return 0;
}
