/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
30 Janvier 2023
---------------------------*/

/* C Read File
===============*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

  /*
  In the previous chapter, we wrote to a file using 'w'
  and 'a' modes inside the fopen() function.

  To read from a file, you can use the 'r' mode: */

  FILE *fptr;
  // Open a file in read mode
  fptr = fopen("filename.txt", "r");

  /*
  This will make the filename.txt opened for reading.
  It requires a little bit of work to read a file in C.

  Next, we need to create a string that should be big
  enough to store the content of the file.

  For example, let's create a string that can store up to
  100 characters: */

  // Store the content of the file
  char myString[100];

  /*
  In order to read the content of filename.txt, we can use
  the 'fgets()' function.
  The fgets() function takes three parameters: */

  fgets(myString, 100, fptr);

  /*

  > the first parameter specifies where to store the file
    content, which will be in the myString array we just
    created.

  > the second parameter specifies the maximum size of data
    to read, which should match the size of myString (100).

  > the third parameter requires the file pointer that is used
    to read the file (fptr in our example).

Now, we can print the string, which will output the content
of the file: */

  // Print the file content
  printf("%s", myString);

  // Close the file
  fclose(fptr);

  /* Example
  ------------ */

  FILE *f_ptr;

  //---
  f_ptr = fopen("newText.txt", "a");
  fprintf(f_ptr, "A content added to newText.txt\n");
  fclose(f_ptr);

  //---
  f_ptr = fopen("newText.txt", "r");
  char newTextContent[100];
  fgets(newTextContent, 100, f_ptr);
  printf("%s\n", newTextContent);
  fclose(f_ptr);

  /*
  Note: > The 'fgets' function only reads the first line
          of the file. To read every line of the file,
          you can use a while loop: */

  // fptr = fopen("filename.txt", "r");
  // char myString[100];
  // while (fgets(myString, 100, fptr))
  // {
  //   printf("%s", myString);
  // }
  // fclose(fptr);

  /*
  If you try to open a file for reading that does not exist,
  the fopen() function will return NULL.

   Tip: As a good practice: use an if statement to test for NULL,
        and print some text instead when the file does not exist */

  //  FILE *fptr;
  //  fptr = fopen("loremipsum.txt", "r");
  //  if(fptr == NULL) {
  //  printf("Not able to open the file.");
  //  }
  //  fclose(fptr);

  /*
  With this in mind, we can create a more sustainable code
  if we use our "read a file" example above again:

  If the file exist, read the content and print it.
  If the file does not exist, print a message:
  */

  FILE *fptr;

  // Open a file in read mode
  fptr = fopen("filename.txt", "r");

  // Store the content of the file
  char myString[100];

  // If the file exist
  if (fptr != NULL)
  {
    // Read the content and print it
    while (fgets(myString, 100, fptr))
    {
      printf("%s", myString);
    }
  }
  else
  {
    // If the file does not exist
    printf("Not able to open the file.");
  }

  // Close the file
  fclose(fptr);
  return 0;
}
