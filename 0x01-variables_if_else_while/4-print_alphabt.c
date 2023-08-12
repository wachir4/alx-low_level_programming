#include <stdio.h>
/**
 * main - entry point
 *
 * return:always 0 =(success)
 */
int main(void)
{
int c;
c = 'a';
while (c <= 'z')
{
if (c == 'q' || c == 'e')
{c++;
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
