
#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("enter sides of tringle:");
	scanf("%d%d%d",&s1,&s2,&s3);

	if(s1==s2 && s2==s3)
	{
		printf("the given triangle is equiletral");
	}

	else if(s1==s2 || s2==s3 || s1==s3)
	{
		printf("the given triangle is isoscelene");
	}

	else
	{
		printf("the given tringle is scelene");
	}
}