//Return maximum of given two number
#include<stdio.h>
int max();
int main()
{
	max();
}
int max()
{
	int a,b;
	printf("enter the values of a ,b");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a is the greatest number");
	}
	else if(b>a)
	{
		printf("b is the greatest number");
	}
	else
	{
		printf("equal");
	}
	return(0);
}
