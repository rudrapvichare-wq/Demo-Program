#include<stdio.h>
int main()
{
for ( int room =11; room <=15; room++)
{
    if ( room == 13 )
    {
        continue;
    }
    printf("Room number %d is available\n. Stopping Search.", room);
}
    printf("All rooms checked.\n");
    return 0;
}