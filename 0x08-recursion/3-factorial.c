#include "main.h"
/**
 * factorial - get the factorial of a no.
 * @n: factor to factorise
 * Return: factorial to factorise
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
