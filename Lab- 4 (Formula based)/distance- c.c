#include<stdio.h>
void main()
{
	int u,a,t,d;
	printf("enter the value of u");
	scanf("%d",&u);

	printf("enter the value of a");
	scanf("%d",&a);

	printf("enter the value of t");
	scanf("%d",&t);

	d=(u*t)+(a*(t*t));
	printf("%d",d);

}