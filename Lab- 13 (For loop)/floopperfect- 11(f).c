#include <stdio.h>
void main()
{
int n, i;
int sum = 0;
printf("Enter value of n: ");
scanf("%d", &n);
for (i = 1; i < n; i++)
{
if (n % i == 0)
{
sum += i;
}
}
if (sum == n)
printf("%d is a perfect number\n", n);
else
printf("%d is not perfect number\n", n);
}