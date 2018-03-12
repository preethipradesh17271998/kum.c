#include<stdio.h>
int main()
{
	int a;
	printf("enter the number ");
	scanf("%d",&a);
	if(a%2==0)
	{
		a=a/2;
		printf("%d",a);
	}
	else
	{
		printf("%d",a);
	}
	return 0;
}
