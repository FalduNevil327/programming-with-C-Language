#include<stdio.h>
void main()
{
	int num1,num2,num3;

	printf("enter num1:");
	scanf("%d",&num1);

	printf("enter num2:");
	scanf("%d",&num2);

	printf("enter num3:");
	scanf("%d",&num3);

	if(num1>num2)
	{
		

		if(num1>num3)
		{
			printf("%d is largest",num1);
		}

		else
		{
			printf("%d is largest",num3);
		}

	}

	if(num2>num1)
	{
		

		if(num2>num3)
			printf("%d is largest",num2);

		else
			printf("%d is largest",num3);
	}



}