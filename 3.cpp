#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,avg,per;
	printf("enter the values of a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=(sum)/5;
	per=(((sum)*100)/500);
	printf("%d\n%d\n%d",sum,avg,per);
	return(0);
}
