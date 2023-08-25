#include <stdio.h>

void main()
{
    float num1, num2, num3;
    printf("Enter three numbers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Largest Number = %.2f", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Largest Number = %.2f", num2);
    }
    else
    {
        printf("Largest Number = %.2f", num3);
    }
}