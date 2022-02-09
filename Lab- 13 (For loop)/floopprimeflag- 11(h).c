#include <stdio.h>
void main()
{
int n, i, flag = 0;
printf("Enter value of n: ");
scanf("%d", &n);
if (n == 1)
exit(0);
for (i = 2; i < n; i++)
{
if (n % i == 0)
{
flag++;
break;
}
}
if (flag == 0)
printf("%d is a prime number\n", n);
else
printf("%d is not a prime number\n", n);
}