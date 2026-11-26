#include<stdio.h>
void fibo(int i)
{
    int c;
    int first = 0, second = 1, next;
    for (c = 0; c < i; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
}
int main()
{
    int i;
        printf("Enter the number of terms you want in Fibonacci series: ");
    scanf("%d", &i);
    fibo(i);
    return 0;
}