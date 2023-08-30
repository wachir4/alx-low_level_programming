#include "main.h"

/**
 * _strlen_recursion - function that returns length of str
 * @s: string to find its length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
