#include<stdio.h>
int main()
{
	char a[10];
	int i;
	printf("enter the string ");
	scanf("%[^\n]s",a);
	a[0]=a[0]-32;
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i]==' ')
		{
			i++;
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
	return 0;
}
