#include <stdio.h>

void main()
{
    int num;
    printf("##########Console-output### \n");

    printf("Enter a integer: ");

    fflush(stdin); fflush(stdout);

    scanf("%d",&num);

    printf("You entered: %d \n",num);

    printf("###########################\n\n\n");

    printf("########################################################################");
}