#include<stdio.h>
int main()
{
	int ap,i,a,b,c,sum=0;
	printf("enter the values ");
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<=c;i++)
	{
		ap=a+(i-1)*b;
		sum=sum+ap;
		
	}
	printf("%d",sum);
	return 0;
}
