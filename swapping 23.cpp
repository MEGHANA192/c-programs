#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\t%d",a,b);
	return(0);
}
