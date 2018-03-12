#include<stdio.h>
int main()
{
    int i,k,sum=0;
    printf("enter the value");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
    }
    printf("sum is %d",sum);
return 0;
}
