#include<stdio.h>
int main()
{
	int n,a=0;
	printf("enter the number ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		a++;
	}	
	
	printf("%d",a);
	
	return 0;
}
