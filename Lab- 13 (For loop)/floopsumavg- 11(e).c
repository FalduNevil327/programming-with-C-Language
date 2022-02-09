#include <stdio.h>
void main()
{
int n, i;
int sum = 0;
float average = 0;
for (i = 1; n != -1; i++)
{
printf("Enter value of n: ");
scanf("%d", &n);
if (n == -1)
break;
sum += n;
i++;
}
average = (float)sum / i;
printf("\nSum = %d\n", sum);
printf("\nAverage = %.2f\n", average);
}