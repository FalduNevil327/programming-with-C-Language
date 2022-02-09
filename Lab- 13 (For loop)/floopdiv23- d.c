#include <stdio.h>
void main()
{
int a, b;
printf("Enter a, and b value: ");
scanf("%d%d", &a, &b);
for (; a <= b; a++)
{
if (a % 2 == 0 && a % 3 != 0)
printf("%d\n", a);
}
}