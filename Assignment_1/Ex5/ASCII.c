#include <stdio.h>

void main()
{
    char c;
    printf("##########Console-output###### \n");
   
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);

    printf("ASCII value of %c = %d \n",c,(int)c);
    printf("#############################\n\n\n\n");
    printf("########################################################################");
}