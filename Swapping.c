#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a&b: ");
    scanf("%d %d",&a,&b);
        c=a;
        a=b;
        b=c;
    printf("The values of a&b :%d %d",a,b);
    return 0;

}
