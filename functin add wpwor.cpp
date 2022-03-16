#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;

printf("enter the values of a ,b");
scanf("%d%d",&a,&b);
add(a,b);
}
int add(int x,int y)
{
	printf("sum=%d",x+y);
}
