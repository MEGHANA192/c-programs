#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("the triangle is equilateral");
	}
	else if(a==b||a==c||b==c)
	{
		printf("the triangle is isoceles");
	}
	else
	{
		printf("the triangle is scaline");
	}
	return(0);
}
