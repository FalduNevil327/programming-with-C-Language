#include<stdio.h>
void main()
{
	float km,m,foot,inch,cm;
	printf("enter km");
	scanf("%f",&km);

	foot=km*3280.841666667;
	m=km*1000;
	inch=km*39370.1;
	cm=km*10000;	

	printf("%f\n",cm);
	printf("%f\n",m);
	printf("%f\n",inch);
	printf("%f\n",foot);
}