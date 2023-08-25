#include <stdio.h>

void main()
{
    int num,factorial=1;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);

    if(num>0)
    {
        for(int i=1 ; i<=num ; i++)
        {
            factorial*=i;
        }
        printf("Factorial = %d",factorial);
    }
    else if (num==0)
    {
        printf("Factorial = %d", 1);
    }
    else
    {
        printf("Error!!! Factorial of negative number doesn't exist.");
    }
}