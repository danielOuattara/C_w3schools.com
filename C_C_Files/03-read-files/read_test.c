/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
30 Janvier 2023
---------------------------*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file_ptr;

    //---
    file_ptr = fopen("test.txt", "a");
    fprintf(file_ptr, "A content added to new file\n");
    fclose(file_ptr);

    //--
    file_ptr = fopen("test.txt", "r");
    char fileContent[100];
    fgets(fileContent, 100, file_ptr);
    printf("%s\n", fileContent);
    fclose(file_ptr);

    return 0;
}
