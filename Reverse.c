#include <stdio.h>

int main()
{
    long long n, r = 0, z = 0;

    printf("Enter the number: ");
    scanf("%lld", &n);

    while (n > 0 && n % 10 == 0)
    {
        z++;
        n /= 10;
    }

    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }

    printf("Reverse = ");
    while (z-- > 0)
        printf("0");
    printf("%lld\n", r);

    return 0;
}