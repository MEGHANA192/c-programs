#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,x,j;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d ",i);
	}
	printf("\nenter the value of x");
	scanf("%d",&x);
	for(j=1;j<=x;j++)
	{
		printf("%d ",j);
	}
	return(0);
}

