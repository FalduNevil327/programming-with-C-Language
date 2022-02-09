#include <stdio.h>
void main()
{
int n, i = 2, flag = 0;
printf("Enter value of n: ");
scanf("%d", &n);
if (n == 1)
exit(0);
while (i < n)
{
if (n % i == 0)
{
flag++;
break;
}
i++;
}
if (flag == 0)
printf("%d is a prime number\n", n);
else
printf("%d is not a prime number\n", n);
}