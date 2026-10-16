#include <stdio.h>
int main()
{
    // int length =3;
    // int breadth=6;
    int length,breadth;
    printf("Enter the length:");
    scanf("%d", &length);

    printf("Enter the breadth:");
    scanf("%d", &breadth);

    printf("Area of reactangle is %d", length * breadth);
    return 0;
}