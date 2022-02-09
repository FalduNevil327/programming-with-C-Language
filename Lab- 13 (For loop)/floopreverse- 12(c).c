#include <stdio.h>
void main()
{
int n;
int r, rev = 0;
printf("Enter a number: ");
scanf("%d", &n);
for (; n != 0;)
{
r = n % 10;
rev = rev * 10 + r;
n /= 10;
}
printf("\nReverse = %d\n", rev);
}