#include<stdio.h>
void main()
{
	int x,y,i,p=1;

	printf("enter value:");
	scanf("%d%d",&x,&y);

	for(i=1;i<=y;i++)
	{
		p=p*x;
	}

	printf("%d",p);
}