#include<stdio.h>
void main()
{
	int i,n,fn,ld,sum=0;

	printf("enter value:");
	scanf("%d",&n);

	ld=(n%10);
	printf("ld=%d\n",ld);

	fn=(n/10);
	printf("fn=%d\n",fn);

	for(i=1;i<=n;i++)
	{
	
		sum=(ld+fn);
	}

	printf("sum=%d",sum);
}