#include<stdio.h>
void main()
{
	int n;
	float i,sum;
	i=1;
	sum=0;
	printf("enter value of n:");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+(1/i);
		i++;
	}

	printf("sum=%f",sum);
}