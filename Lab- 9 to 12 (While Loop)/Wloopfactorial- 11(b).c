#include <stdio.h>
void main()
{
int n, i = 1;
double result = 1;
printf("Enter value of n: ");
scanf("%d", &n);
while (i <= n)
{
result *= i;
i++;
}
printf("\n%d! = %.0f\n", n, result);
}