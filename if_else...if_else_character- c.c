#include <stdio.h>
void main()
{
char ch;
printf("Enter a character from keyboard: ");
scanf("%c", &ch);
if (isupper(ch))
printf("\n%c is an alphabet in Capital.\n", ch);
else if (islower(ch))
printf("\n%c is an alphabet in lower letter.\n", ch);
else if (isdigit(ch))
printf("\n%c is a digit.\n", ch);
else
printf("\n%c is a symbol.\n", ch);
}