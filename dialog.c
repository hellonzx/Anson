#include <stdio.h>
#include <stdlib.h>
main()
{
    printf("Hello, anson...\n");
    printf("This is your first C program, are you ready? (y/n):\n");
    char AnsonAnswer = getchar();
    printf("Anson's answer is %c.\n", AnsonAnswer);
    
    if ('y' == AnsonAnswer)
        printf("Anson's answer is y, which means is YES.\n");
    else if ('n' == AnsonAnswer)
        printf("Anson's answer is n, which means is NO.\n");
    else 
        printf("I can not know what's Anson's input.\n");

}
