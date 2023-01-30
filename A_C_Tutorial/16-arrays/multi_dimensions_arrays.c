/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/* Multidimensional Arrays
=========================== */

#include <stdio.h>

int main(int argc, char const *argv[])
{

  /*
  In the previous chapter, you learned about arrays,
  which is also known as single dimension arrays.

  These are great, and something you will use a lot while
  programming in C. However, if you want to store data as
  a tabular form, like a table with rows and columns, you
  need to get familiar with multidimensional arrays.

  A multidimensional array is basically an array of arrays.

  Arrays can have any number of dimensions. In this chapter,
  we will introduce the most common; two-dimensional arrays (2D).

  Two-Dimensional Arrays
  -------------------------
  A 2D array is also known as a matrix (a table of rows and columns).

  To create a 2D array of short integers, take a look at the
  following example: */

  printf("\n---------------\n");

  short int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

  /*
  The first dimension represents the number of rows [2],
  while the second dimension represents the number of columns [3].
  The values are placed in row-order, and can be visualized
  like this:

           -----------------------------------
           | column 0 | column 1  | column 2 |
  --------------------------------------------
  | row 0  |     1     |     4    |    2     |
  --------------------------------------------
  | row 1  |     3     |     6    |    8     |
  --------------------------------------------

  Access the Elements of a 2D Array
  ------------------------------------
  To access an element of a two-dimensional array, you must specify
  the index number of both the row and column.

  The next statement accesses the value of the element in the first
  row (0) and third column (2) of the matrix array. */

  printf("%d\n", matrix[0][2]); // Outputs 2
  printf("---------------\n");

  /*
  Remember that: Array indexes start with 0: [0] is the first element.
           [1] is the second element, etc.

  Change Elements in a 2D Array
  ------------------------------
  To change the value of an element, refer to the index number of the
  element in each of the dimensions:

  The next example will change the value of the element in the
  first row (0) and first column (0): */

  matrix[0][0] = 9;
  printf("%d\n", matrix[0][0]); // Now outputs 9 instead of 1
  printf("---------------\n");

  /*
  Loop Through a 2D Array
  -------------------------
  To loop through a multi-dimensional array, you need one loop for each
  of the array's dimensions.

  The next example outputs all elements in the matrix array: */

  short int matrix2[2][3] = {{1, 4, 2}, {3, 6, 8}};

  int i, j;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\n", matrix2[i][j]);
    }
  }
  printf("---------------\n");

  return 0;
}