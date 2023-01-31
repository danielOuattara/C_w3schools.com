
#include <stdio.h>
int main(int argc, char const *argv[])
{

    printf("\n");

    //-------------------------------------------
    int age = 38;
    int *agePtr = &age;

    // Reference: Output the memory address of 'age' with the pointer
    printf("%p\n", agePtr);

    // Dereference: Output the value of myAge with the pointer (38)
    printf("%d\n", *agePtr);

    //-------------------------------------------
    char letter = 'D';
    char *letterPtr = &letter;
    printf("%p\n", letterPtr);
    printf("%c\n", *letterPtr);

    //-------------------------------------------
    char userName[] = "Daniel Ouattara";
    printf("%s\n", userName);
    printf("%p\n", &userName);

    char *userNamePtr = &userName;
    printf("%p\n", userNamePtr);

    //-------------------------------------------
    return 0;
}
