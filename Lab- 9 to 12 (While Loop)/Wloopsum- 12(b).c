#include <stdio.h>
void main()
{
int n, i;
int sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n != 0)
{
    i = n % 10;
sum += i;
n /= 10;
}
printf("\nSum = %d\n", sum);
}