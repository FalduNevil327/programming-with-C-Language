#include<stdio.h>
void main()
{
	int sub1,sub2,sub3,sub4,sub5,p;
	printf("enter value of sub1");
	scanf("%d" ,&sub1);

	printf("enter value of sub2");
	scanf("%d" ,&sub2);

	printf("enter value of sub3");
	scanf("%d" ,&sub3);

	printf("enter value of sub4");
	scanf("%d" ,&sub4);

	printf("enter value of sub5");
	scanf("%d" ,&sub5);

	p=(sub1+sub2+sub3+sub4+sub5)/5;
	printf("%d",p);
}