#include <stdio.h>

void main()
{
    char c;
    float num1,num2;
    printf("Enter operator either + , -, * or divide : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&c);

    printf("Enter two operands: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &num1 , &num2);
    

    switch (c)
    {
    case '+':
        printf("%g %c %g = %g",num1,c,num2,num1+num2);
        break;

    case '-':
        printf("%g %c %g = %g",num1,c,num2,num1-num2);
        break;

    case '*':
        printf("%g %c %g = %g",num1,c,num2,num1*num2);
        break;

    case '/':
        printf("%g %c %g = %g",num1,c,num2,num1/num2);
        break;       
    
    }
}