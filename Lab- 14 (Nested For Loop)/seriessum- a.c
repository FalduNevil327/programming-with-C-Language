#include <stdio.h>
void main()
{
int n, i, j;
int sum = 0;
printf("Enter n: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
sum += j;
}
}
printf("\nSum = %d\n", sum);
}