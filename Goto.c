#include<stdio.h>
int main()
{
    int i=0;
    printf("Before goto statement\n");
    goto label;
    printf("This will not be printed\n");
    label:
    printf("After goto statement\n");
    return 0;
}