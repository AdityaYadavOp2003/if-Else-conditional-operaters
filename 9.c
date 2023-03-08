#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Charecter : ");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97 && ch<=122))
    {
        printf("The Given Charecter is Alphabet");
    }
    else if (ch>=48&&ch<=57)
    {
        printf("The Given Charecter is a Number");
    }
    else
    {
        printf("The Given Chacter is a Special Chrecter ");
    }
    return 0; 
}