#include <stdio.h>
void main()
{
int a;
printf("Enter value of a: ");
scanf("%d", &a);
a = a % 10;
if (a % 2 == 0){
        printf("Last digit of a number %d is an even number.\n", a);
}

if (a % 2 != 0){
        printf("Last digit of a number %d is an odd number.\n", a);
}

}