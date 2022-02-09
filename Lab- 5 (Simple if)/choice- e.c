#include<stdio.h>
 void main ()
 {
 	int a,b,ch ;

 	printf("enter value of a");
 	scanf("%d",&a);

 	printf("enter value of b");
 	scanf("%d",&b);

 	printf("1.addition\n");
 	printf("2.division\n");
 	printf("3.multiplication\n");
 	printf("4.substraction\n");

 	printf("enter choice");
 	scanf("%d",&ch);

 	if(ch==1)
 	{
 		printf("%d+%d=%d",a,b,a+b);
 	}

 	if(ch==2)
 	{
 		printf("%d/%d=%d",a,b,a/b);
 	}

 	if(ch==3)
 	{
 		printf("%d*%d=%d",a,b,a*b);
 	}

 	if(ch==4)
 	{
 		printf("%d-%d=%d",a,b,a-b);
 	}

 	if(ch>4)
 	{
 		printf("invalid value");
 	}
 }