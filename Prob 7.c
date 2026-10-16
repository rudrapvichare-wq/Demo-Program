#include<stdio.h>
int main()
{
    for ( int seat = 1; seat <= 10; seat++ )
    {
        if ( seat == 5 )
        {
            continue;
        }
        printf("Seat number %d is available\n. Stopping Search.", seat);
        break;
        printf("Checking seat %d.\n", seat);
    }
    printf("Loop ended.");
    return 0;
}