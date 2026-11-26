#include <stdio.h>

int main()
{
    int number, divisor, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (divisor = 2; divisor * divisor <= number; divisor++)
    {
        if (number % divisor == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (number < 2) isPrime = 0;
    printf("%d is %s and %sprime.\n", number,
           number % 2 ? "odd" : "even", isPrime ? "" : "not ");

    return 0;
}