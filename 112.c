#include<stdio.h>
int main()
{
	int n,k,a[10],i,c=0;
	printf("\n enter the values of n and k ");
	scanf("%d%d",&n,&k);
	printf("\n enter the values ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c++;
		}
		
	}
	if(c>=1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
		return 0;
	
}
