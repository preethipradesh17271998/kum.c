#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    int b,l;
    printf("enter the string ");
    scanf("%c",&a);
    l=strlen(a);
    b="*";
    if(a%2==0)
    {
        a[l/2]=b;
        a[(l/2)-1]=b;
    }
    else
    {
        a[l/2]=b;
    }
}
