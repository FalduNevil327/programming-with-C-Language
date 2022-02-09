#include <stdio.h>
void main()
{
int n, i, j, sp;
printf("Enter n: ");
scanf("%d", &n);
for (i = n; i >= 1; --i)
{
for (sp = 0; sp < n - i; ++sp)
printf(" ");
for (j = i; j <= 2 * i - 1; ++j)
printf("* ");
for (j = 0; j < i - 1; ++j)
printf("* ");
printf("\n");
}
}