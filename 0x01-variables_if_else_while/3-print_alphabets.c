#include <stdio.h>
/**
 * main -this is the entry point.
 * Return : gives 0 = success
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while
(c <= 'z')
{
putchar(c);
c++;
}
while
(d >= 'Z')
{
putchar (d);
d++;
}
putchar('\n');
return (0);
}
