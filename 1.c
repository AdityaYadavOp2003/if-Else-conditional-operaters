#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers : " );
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("A is greater : %d",a);

    }
    else
    {
        printf("B is Greater : %d",b);
    }
    return 0;
}