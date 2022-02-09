#include <stdio.h>
void main()
{
int n;
int first, last, sum = 0;
printf("Enter value of n: ");
scanf("%d", &n);
last = n % 10;
while (n >= 10)
{
n /= 10;
}
first = n;
sum = first + last;
printf("Sum = %d\n", sum);
}