#include<stdio.h>
void main ()
{
	int n;
	printf("print the value of n");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("%d is an even number",n);
	}

	if(n%2!=0){
	printf("%d is an odd number",n);
	}
}