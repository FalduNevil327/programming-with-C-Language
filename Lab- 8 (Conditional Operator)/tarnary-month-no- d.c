#include<stdio.h>
void main()
{
	int d;

	printf("enter a month number : ");
	scanf("%d",&d);

	switch(d)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("%d is 31 days",d);
		break;

		case 4:
		case 6:
		case 9:
		case 11:
		printf("%d is 30 days",d);
		break;

		case 2:
		printf("%d if 28 or 29 days",d);
		break;
	}
}