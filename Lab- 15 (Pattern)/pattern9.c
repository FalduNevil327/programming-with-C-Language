#include <stdio.h>
void main()
{
int i, j, n, k;
printf("Enter n: ");
scanf("%d", &n);
k = n;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= k; j++)
{
printf("* ");
}
k--;
printf("\n");
}
}