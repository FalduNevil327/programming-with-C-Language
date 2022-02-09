#include <stdio.h>
void main()
{
	int ss,h,m,s;
	printf("enter value of ss");
	scanf("%d",&ss);

	h=ss/3600;
	m=(ss%3600)/60;
	s=(ss%3600)%60;

	printf("%d:%d:%d",h,m,s);
}