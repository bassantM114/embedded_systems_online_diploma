#include <stdio.h>

void main()
{
    int num1,num2;
    printf("##########Console-output### \n");

    printf("Enter two integers: ");

    fflush(stdin); fflush(stdout);

    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("Sum: %d \n",num1+num2);

    printf("###########################\n\n\n");

    printf("########################################################################");
}