#include<stdio.h>
void main()
{
	int i,j,n,k,num;
	num=1;

	printf("enter value of n:");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		while(k<2*i)
		{
			if(k%2!=0)
			{

			if(i%2==0)
			{
				printf("*");
			}

			else
			{
				printf("*");
			}
			
			}

			else
			{
				printf(" ");
				
			}
			k++;
		}

		printf("\n");
		
	}
}