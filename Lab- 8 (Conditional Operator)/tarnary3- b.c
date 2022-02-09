#include<stdio.h>
void main()
{
	int n1,n2,n3,max;

	printf("enter value of n1 :");
	scanf("%d",&n1);

	printf("enter value ofn2 :");
	scanf("%d",&n2);

	printf("enter value of n3 :");
	scanf("%d",&n3);

	max=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);

	printf("largest number is : %d",max);
}