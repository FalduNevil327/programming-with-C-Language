#include<stdio.h>
void main()
{
	int sci,math,phy,com,eng,pr,total;
	printf("enter marks of your subjects:");
	scanf("%d%d%d%d%d",&sci,&math,&phy,&com,&eng);

	total=sci+phy+math+com+eng;
	pr=total/5;

	if(pr<35)
	{
		printf("fail");
	}

	else if(pr>=35  && pr<45)
	{
		printf("pass");
	}

	else if(pr>=45  && pr<65)
	{
		printf("1st class");
	}

	else if (pr>=65 && pr<70)
	{
		printf("2nd class ");
	}

	else
	{
		printf("distriction");
	}
}