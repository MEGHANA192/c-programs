#include<stdio.h>
int count_digit(int);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",count_digit(n));
	return(0);
}
int count_digit(int n)
{
	int count=0;
	while(n!=0)
	{
		n=n/10;
		++count;
	}
	return count;
}
