#include<stdio.h>
int main()
{
	int a[2][2],c[2][2],i,j;
	
	printf("enter the elements into matrix A");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		
		{
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j]=c[j][i];
		}
	}
	printf("the resultant matrix is  ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	return(0);
}
