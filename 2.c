# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
    {
        printf("A is Greatest : %d",a);
    }
    else if(b>a&&b>c)
    {
        printf("B is Greatest :%d ",b);
    }
    else
    {
        printf("C is greatest , %d",c);
    }
    return 0;
}