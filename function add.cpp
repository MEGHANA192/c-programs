#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,c,e,f,k;
	printf("enter the values of a , b,e,f ");
	scanf("%d%d%d%d",&a,&b,&e,&f);
	c=add(a,b);
	k=add(e,f);
	printf("%d\n%d",c,k);
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return (z);
}


