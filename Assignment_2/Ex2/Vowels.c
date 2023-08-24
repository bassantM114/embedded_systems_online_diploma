#include <stdio.h>

void main()
{
    char c;
    printf("Enter an alphabet : ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is vowel", c);
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
         printf("%c is vowel", c);
    }
    else 
    {
        printf("%c is consonant", c);
    }
}