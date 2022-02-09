#include<stdio.h>
void main()
{
	int i,n,sum;

	printf("enter value of n:");
	scanf("%d",&n);

	for(i=1,sum=0;i<=n)
	{
		sum=sum+i;
		
	}
	i++;

	printf("sum is=%d",sum);
}