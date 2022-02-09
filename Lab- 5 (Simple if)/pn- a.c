#include<stdio.h>
void main ()
{
	int n;
	printf("print the value of n");
	scanf("%d",&n);

	if(n>0)
	{
		printf("%d is a positive number",n);
	}

	if(n<0)
	{
	printf("%d is a negative number",n);
	}
}