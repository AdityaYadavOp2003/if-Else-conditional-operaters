#include <stdio.h>
int main ()
{
    char ch;
    printf("Enter a Charecter : ");
    scanf("%c", &ch);
    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("The Given Alphabet is Vowel");
    }
    else
    {
        printf("The Given Alphabet is Consonent");
    }
    }
    else 
    {
        printf("Enter a Valid Alphabet : :)");
    }
}