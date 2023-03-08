#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d",&year);
    if(year%400==0||year%4==0)
    {
        printf("It is A Leap Year");
    }
    else
    {
        printf("Not A Leap Year");
    }
    return 0;
}
