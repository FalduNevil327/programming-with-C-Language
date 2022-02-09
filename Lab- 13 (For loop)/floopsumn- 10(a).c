#include <stdio.h>
void main()
{
    int i, n;
int sum = 0;
printf("Enter n value: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
sum += i;
}
printf("\nSum = %d\n", sum);
}