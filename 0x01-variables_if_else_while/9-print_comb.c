#include <stdio.h>
/**
 * main - entry point.
 * Description: 'prints comb of numbers'
 * Return: always 0 = (success)
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
