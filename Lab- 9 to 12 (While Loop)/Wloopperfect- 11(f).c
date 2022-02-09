#include <stdio.h>
void main()
{
int n, i = 1;
int sum = 0;
printf("Enter value of n: ");
scanf("%d", &n);
while (i < n)
{
if (n % i == 0)
{
sum += i;
printf("i = %d\n", i);
}
i++;
}
if (sum == n)
printf("%d is a perfect number\n", n);
else
printf("%d is not perfect number\n", n);
}