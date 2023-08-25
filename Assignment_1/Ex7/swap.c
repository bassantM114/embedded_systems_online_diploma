/*

Swapping with no temp variable
first we subtract b from a to save the difference between them in a
then we add that difference to the value of b (now be equals initial a)
we subtract the difference from the currant value of b to obtain the initial value of b and save it in a
example
a=6; b=5;
a=a-b (6-5=1)
b=b+a (5+1=6 now b has the value of initial a)
a=b-a (6-1=5 now a has the initial value of b)

*/

#include <stdio.h>

void main()
{
    float a, b;
    printf("#########Console_output###### \n");

    printf("Enter value of a: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &a);

    printf("Enter value of b: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &b);
    printf("\n");

    a = a - b;
    b = b + a;
    a = b - a;

    printf("After swapping, value of a = %g \n", a);
    printf("After swapping, value of b = %g \n", b);
    printf("#############################\n");
    printf("########################################################################");
}