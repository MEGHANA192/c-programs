#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the angles a and b");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("%d",c);
	return(0);
}
