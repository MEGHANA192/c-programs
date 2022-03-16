#include<stdio.h>
#include<conio.h>
int main()
{
	int i, a;
	printf("enter the value of a");
	scanf("%d",&a);
	for(i=1;i<=20;i++)
	{
		printf("%d x %d = %d\n",a,i,(a*i));
	}
	return(0);
}
