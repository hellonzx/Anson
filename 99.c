#include <stdio.h>
#include <stdlib.h>
void go99();

main()
{
    printf("Anson, let's go to 99, enjoy it and father love you!\n");
    printf("Anson, are you ready? y/n:\n");
    char c = getchar();
    if('y'== c)
    {
        printf("Go, Anson\n");
        go99();
    }
    if('n' == c)
        printf("Okay, next time.\n");
}

void go99()
{
    int i,j;
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d x %d = %2d   ", j, i, i*j);
            printf("\n");
    }
}
