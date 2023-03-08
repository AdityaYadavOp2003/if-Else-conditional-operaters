#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Charecter : ");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
    {
        printf("Given Charecter is a Alphabet : %c ", ch);
    }
    else
    {
        printf(" Given Charecter is not a Alphabet : %c", ch);
    }
    return 0 ; 
}