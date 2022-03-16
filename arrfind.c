#include<stdio.h>
int main()
{
	int a[5],i,n,search;
	printf("number of elements in the arr");
	scanf("%d",&n);
	printf("enter the elements into the array");
	for(i=0;i<5;i++)
	{
	
	scanf("%d",&a[i]);
	}

	printf("enter the element to be searched for");
	
	scanf("%d",&search);
	for(i=0;i<5;i++)


	if(search==a[i])
	{
	
		printf("%d",i);
	}
	
	else
	{
		printf("element is not found");
	}

	return(0);
}
