#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("The Number is Negitive");
    }
    else if (num==0)
    {
        printf("That's a Zero");
    }
    else
    {
        printf("Number is Positive");
    }
    return 0;
    
}