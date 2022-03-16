#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,avg,per;
	printf("enter the values of a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=(a+b+c+d+e)/5;
	per=(((a+b+c+d+e)/500)*100);
	printf("\n%d",sum);
	printf("\n%d",avg);
	printf("\n%d",per);
	return(0);
}
