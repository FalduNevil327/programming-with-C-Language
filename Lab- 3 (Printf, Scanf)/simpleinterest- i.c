#include <stdio.h>
void main()
{
float amount, interest, years, si;
printf("Amount: ");
scanf("%f", &amount);
printf("Interest Rate: ");
scanf("%f", &interest);
printf("Year: ");
scanf("%f", &years);
si = (amount * interest * years) / 100;
printf("Simple Interest = %f\n", si);
}