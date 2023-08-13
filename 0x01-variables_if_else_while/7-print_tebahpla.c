#include <stdio.h>
/**
 * main - entry point.
 * Description: prints the lowercase alphabet rev.
 * Return: always 0 = (success)
 */
int main(void)
{
int n;
n = 122;
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
