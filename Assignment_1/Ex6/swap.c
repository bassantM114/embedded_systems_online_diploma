#include <stdio.h>

void main()
{
    float a,b,temp;
    printf("#########Console_output###### \n");
   
    printf("Enter value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&a);

    printf("Enter value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&b);
    printf("\n");

    temp=a;
    a=b;
    b=temp;

    printf("After swapping, value of a = %g \n",a);
    printf("After swapping, value of b = %g \n",b);
    printf("#############################\n");
    printf("########################################################################");
}