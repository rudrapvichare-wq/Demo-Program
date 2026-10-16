#include<stdio.h>
int main()
{
    int q1,q2,q3;
    int p1,p2,p3;
    float total , average, Discount;
    int Discount_Rate= 10;
    printf("Enter the quantity and price of 1st item: ");
    scanf("%d %d", &q1, &p1);
    printf("Enter the quantity and price of 2nd item: ");
    scanf("%d %d", &q2, &p2);
    printf("Enter the quantity and price of 3rd item: ");
    scanf("%d %d", &q3, &p3);
    total= (q1*p1)+(q2*p2)+(q3*p3);
    average= total/3;
    Discount= total*Discount_Rate/100;
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Discount: %.2f\n", Discount);
return 0;
}