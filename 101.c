#include<stdio.h>
#include<string.h>
int main()
{
	char b[10];
	int l=0,i,n,c=0;
	printf("enter the string ");
	scanf("%s",b);
	printf("enter the value ");
	scanf("%d",&n);
	l=strlen(b);
	for(i=(l-n);i<l;i++)
	
		{
			printf("%c",b[i]);
		}
	
	return 0;
}
