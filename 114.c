#include<stdio.h>
int main()
{
int a[10],i,n,k,c=0;
printf("enter the values of n and k ");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
++c;
}

if(c==k)
{
	printf("%d",a[i]);
	break;
	
}
}
return 0;
}
