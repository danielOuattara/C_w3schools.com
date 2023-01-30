/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/* Break
========= */

#include <stdio.h>
int main(int argc, char const *argv[])
{

  /* You have already seen the 'break' statement used in an earlier
  chapter of this tutorial. It was used to "jump out" of a switch
  statement.

  The 'break' statement can also be used to jump out of a loop.
  This example jumps out of the loop when i is equal to 4: */

  short int i;
  for (i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      break;
    }
    printf("%d\n", i);
  }
  printf("-------------------\n");

  /* Continue
  ============

  The continue statement breaks one iteration (in the loop),
  if a specified condition occurs, and continues with the next
  iteration in the loop.

  This example skips the value of 4:  */

  i = 0;
  for (i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      printf("continue on %hd\n", i);
      continue;
    }
    printf("%d\n", i);
  }
  printf("-------------------\n");

  /* Break and Continue in While Loop
  =================================

  You can also use break and continue in while loops: */

  i = 0;

  while (i < 10)
  {
    if (i == 4)
    {
      printf("break on %hd\n", i);
      break;
    }
    printf("%d\n", i);
    i++;
  }
  printf("-------------------\n");

  //--------------------------------

  i = 0;
  while (i < 10)
  {
    i++;
    if (i == 4)
    {
      printf("continue on %hd\n", i);
      continue;
    }
    printf("%d\n", i);
  }
  printf("-------------------\n");

  /* code */
  return 0;
}
