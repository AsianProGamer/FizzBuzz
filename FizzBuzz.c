#include <stdio.h>

main()
{
    int i;

    for(i = 1; i <= 100; i++){

    if( i % 3 && i % 5)
        printf("%d",i);

    else
    {
    if(!(i % 3))
        printf("Fizz");
    if(!(i % 5))
        printf("Buzz");
    }
    printf("\n");
 }
