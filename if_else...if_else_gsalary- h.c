#include <stdio.h>
void main()
{
float bs, hra, da, gs;
printf("\nEnter basic salary: ");
scanf("%f", &bs);
if (bs < 10000)
{
printf("\nInvalid input...\n");
exit(0);
}
else if (bs >= 10000)
{
hra = bs * 0.20;
da = bs * 0.80;
gs = bs + hra + da;
printf("\nInside 10k.\n");
if (bs >= 20000)
{
hra = bs * 0.25;
da = bs * 0.90;
gs = bs + hra + da;
printf("\nInside 20k.\n");
if (bs >= 30000)
{
hra = bs * 0.30;
da = bs * 0.95;
gs = bs + hra + da;
printf("\nInside 30k.\n");
}
