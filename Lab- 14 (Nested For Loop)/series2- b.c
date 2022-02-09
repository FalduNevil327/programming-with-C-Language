#include <stdio.h>
void main()
{
int n, i, j;
float m = 1;
float e = 1;
printf("Enter n: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
m = 1;
for (j = 1; j <= i; j++)
{
m *= j;
}
m = 1 / m;
e += m;
}
printf("\ne = %.2f\n", e);
}