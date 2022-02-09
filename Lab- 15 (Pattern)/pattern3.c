#include<stdio.h>
void main()
{
	int i,n,j,num;
	printf("enter value of n:");
	scanf("%d",&n);

		num=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num++;

		}
		printf("\n");
	}
}