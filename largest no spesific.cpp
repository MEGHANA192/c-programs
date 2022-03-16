#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d, a is the greatest number");
	}
	else if(b>a&&b>c)
	{
		printf("%d, b is the greatest number");
	}
	else if(c>a&&c>b)
	{
		printf("%d, c is the greatest number");
	}
	else
	{
		printf("error");
	}
	return(0);
}
