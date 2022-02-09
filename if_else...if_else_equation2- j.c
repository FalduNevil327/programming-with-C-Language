#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2,r3,r4,x,y;

	printf("enter a");
	scanf("%f",&a);

	printf("enter b");
	scanf("%f",&b);

	printf("enter c");
	scanf("%f",&c);

	d=(b*b)-(4*a*c);

	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);

		printf("root=%f and root=%f",r1,r2);
	}

	else if(d==0)
	{
		r1=r2=-b/(2*a);
		printf("root1=root2=%f",r1);
	}

	else
	{
		x=-b/(2*a);
		y=sqrt(-d)/(2*a);
		printf("root1=%f+i%f and root2=%f+i%f",r3,r4,r3,r4);

	}
}