#include <stdio.h>

void main()
{
    float num1,num2;
    printf("##########Console-output### \n\n\n");
    printf("###########################\n");
    printf("Enter two numberss: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&num1);
    scanf("%f",&num2);
    printf("product: %f \n",num1*num2);
    printf("########################################################################");
}