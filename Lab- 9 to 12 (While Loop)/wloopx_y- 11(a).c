#include<stdio.h>
void main()
{
	int i,x,y,mul;
	i=1;
	mul=1;

	printf("enter value of x:");
	scanf("%d",&x);

	printf("enter value of y:");
	scanf("%d",&y);

	while(i<=y)
	{
		mul=mul*x;
		i++;
	}

	printf("mul is:%d",mul);
}