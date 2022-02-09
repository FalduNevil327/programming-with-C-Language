#include<stdio.h>
void main()
{
	int i,n,sum;
	i=1;
	sum=0;

	printf("enter value of n:");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;

	}
	printf("%d",sum);
}