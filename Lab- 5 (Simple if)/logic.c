#include<stdio.h>
 void main ()
{
	int a,b,c;

	printf("enter value of a");
	scanf("%d",&a);

	printf("enter valu of b");
	scanf("%d",&b);

	printf("enter value of c");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf("%d is largest number",a);
	}

	if(b>a && b>c)
	{
		printf("%d is largest number",b);
	}

	if(c>a && c>b)
	{
		printf("%d is largest number",c);
	}
}