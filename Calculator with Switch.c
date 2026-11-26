#include <stdio.h>
int main()
{
    float a, b;
    char op;

    printf("Enter calculation : ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
        case '+': 
        printf("Result = %.2f\n", a + b); 
        break;
        case '-':
        printf("Result = %.2f\n", a - b); 
        break;
        case '%':
            if ((int)b != 0)
                printf("Result = %d\n", (int)a % (int)b);
            else
                printf("Cannot use zero as the divisor.\n");
            break;
        case '*': 
        printf("Result = %.2f\n", a * b); 
        break;
        case '/':
            if (b != 0) 
            {
                printf("Result = %.2f\n", a / b);
            }
            else
            {
                printf("Cannot divide by zero.\n");
            }   
            break;
        default: printf("Invalid operator.\n");
    }

    return 0;
}