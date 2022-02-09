#include<stdio.h>
void main()
{
	int n1,n2,temp;
	printf("enter value:");
	scanf("%d%d",&n1,&n2);

	temp=n1;

	while(temp<=n2)
		{
			if(temp%2==0  && temp%3!=0)

				printf("%d\n",temp);
				temp++;
		}
}