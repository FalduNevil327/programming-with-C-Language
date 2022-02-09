#include<stdio.h>
void main()
{
	int a,b,ch;

	printf("enter a :");
	scanf("%d",&a);

	printf("enter b :");
	scanf("%d",&b);

	printf("1. addition\n");
	printf("2. divison\n");
	printf("3. multiplication\n");
	printf("4. substaction\n");

	printf("enter choice");
	scanf("%d",&ch);

	if(ch==1)
	{
		printf("%d+%d=%d",a,b,a+b);
	}
		else if(ch==2)
		{
			printf("%d/%d=%d",a,b,a/b);
		}

		else if(ch==3)
		{
			printf("%d*%d=%d",a,b,a*b);
		}
		else if(ch==4)
		{
			printf("%d-%d=%d",a,b,a-b);
		}
		else
		{
			printf("INVALID INPUT");
		}
	}






