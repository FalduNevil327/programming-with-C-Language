#include <stdio.h>
void main()
{
int i, n;
float sum = 0;
printf("Enter n value: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
sum += (float)1 / i;
}
printf("\nSum = %.2f\n", sum);
}