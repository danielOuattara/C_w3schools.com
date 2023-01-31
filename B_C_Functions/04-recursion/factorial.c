
#include <stdio.h>

long int factorial(int n);

int main(int argc, char const *argv[])
{
    int factorial_result = factorial(30);
    printf("%d\n", factorial_result);
    return 0;
}

long int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }

    else if (n == 0 || n == 1)
    {
        return n;
    }

    else if (n < 0)
    {
        return -1;
    }

    else
    {
        return 0;
    }
}