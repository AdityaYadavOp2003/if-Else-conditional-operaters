#include <stdio.h>
int main()
{   
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(num%5==0&&num%11==0)
    {
        printf("The Number is Divisible By 5 and 11 : %d",num);
    }
    else
    {
        printf("The Number is Not Divisible By 5 and 11 : %d",num);
    }
    return 0;
}