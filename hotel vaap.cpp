#include<stdio.h>
#include<conio.h>
int main()
{
	printf(" hotel vaap\n");
	printf("1.idly\n");
	printf("2.dosa\n");
	int cho,ip,tot,dp;
	printf("enter your choice");
	scanf("%d",&cho);
	if(cho==1)
	{
		printf("no of plates of idlies=");
		scanf("%d",&ip);
		tot=ip*20;
		printf("total is=%d",tot);
	}
	 else if(cho==2)
	{
		printf("no of plates of dosas");
		scanf("%d",&dp);
		tot=dp*30;
		printf("your total is=%d",tot);
	}
	return(0);
}
