#include<stdio.h>
int main()
{
	int a[5],i,total=0,avg;
	printf("enter the numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	
	{
     total=total+a[i];
	}
	avg=total/5;
	  printf("%d%d",total,avg);
	return(0);
	}
