#include <stdio.h>

void main()
{
    int num,sum=0;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);

    for(int i=1; i<=num ; i++)
    {
        sum+=i;
    }

    printf("Sum = %d", sum);
}