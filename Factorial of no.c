#include<stdio.h>

unsigned long long factorial(unsigned int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter an integer: ");
    if(scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if(n < 0 || n > 20)
    {
        printf("Enter a number from 0 to 20.\n");
        return 1;
    }

    printf("Factorial of %d = %llu\n", n, factorial((unsigned int)n));
    return 0;
}