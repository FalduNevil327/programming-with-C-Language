#include<stdio.h>
void main()
{
	int i,n,sum;
	i=1;
	sum=0;

	printf("enter value:");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+(i*i);
		i++;

	}

	printf("%d",sum);
}