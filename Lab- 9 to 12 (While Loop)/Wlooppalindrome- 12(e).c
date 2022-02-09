#include <stdio.h>
void main()
{
int n, i, t;
int r, rev = 0;
printf("Enter a number: ");
scanf("%d", &n);
t = n;
while (n != 0)
{
r = n % 10;
rev = rev * 10 + r;
n /= 10;
}
if (rev == t)
printf("\n%d is a palindrome.\n", rev);
else
printf("\n%d is not a palindrome.\n", rev);
}