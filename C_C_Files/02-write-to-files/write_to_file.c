/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
30 Janvier 2023
---------------------------*/

/* C Write to File
==================*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

  /*

  Let's use the 'w' mode from the previous chapter again,
  and write something to the file we just created.

  The 'w' mode means that the file is opened for writing.
  To insert content to it, you can use the 'fprintf()'
  function and add the pointer variable, fptr in our example,
   and some text: */

  FILE *f_ptr;

  // Open a file in writing mode
  f_ptr = fopen("filename.txt", "w");

  // Write some text to the file
  fprintf(f_ptr, "Some text");

  // Close the file
  fclose(f_ptr);

  // open filename.txt again & append content to it
  FILE *file_ptr;
  file_ptr = fopen("filename.txt", "a");
  fprintf(file_ptr, "\nA new text to write to file. Does it append OR overwrite to exicting content");
  fclose(file_ptr);

  // open filename.txt one last time & append content to it
  f_ptr = fopen("filename.txt", "a");
  fprintf(f_ptr, "\nFinal append.");
  fclose(f_ptr);

  /*
  Note :
      > If you write to a file that already exists
        the old content is deleted, and the new content
        is inserted.This is important to know, as you
        might accidentally erase existing content.

      > If you want to add content to a file without
        deleting the old content, you can use the 'a' mode.
        The 'a' mode appends content at the end of the file */

  return 0;
}
