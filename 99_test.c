#include <stdio.h>
#include <stdlib.h>
#define random(x) (rand()%x)

void go99_test(int *);

main()
{
    printf("Anson, let's go to 99, enjoy it and father love you!\n");
    printf("Anson, are you ready? y/n:\n");
    char c = getchar();
    if('y'== c)
    {
        printf("Let's go, Anson, how many would you like? 1~10:\n");
        int num, num_org;
        int score = 0;
        scanf("%d", &num);
        num_org = num;
        while(num != 0)
        {
            go99_test(&score);
            num--;
        }
        printf("Anson, your score is: %d.\n", 100*score/num_org);

    }
    if('n' == c)
        printf("Okay, next time.\n");
}

void go99_test(int *score)
{
    int a, b, answer;
    a = random(9)+3;
    b = random(9)+3;
    
    printf("%d x %d = ", a, b);
    scanf("%d", &answer);
    if(a*b == answer)
    {
        printf("Well done, Anson.\n");
        *score = *score+1;
    }
    else
        printf("Think more,Anson.\n");
}
