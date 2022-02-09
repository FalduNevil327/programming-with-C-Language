#include <stdio.h>
#include <math.h>
void main()
{
int n, i, j, x;
float m = 1;
float e = 1;
printf("Enter n: ");
scanf("%d", &n);
printf("Enter x: ");
scanf("%d", &x);
for (i = 1; i <= n; i++)
{
m = 1;
for (j = 1; j <= i; j++)
{
m *= j;
}
m = pow(x, i) / m;
e += m;
}
printf("\ne^%d = %.2f\n", x, e);
}