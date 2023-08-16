#include "main.h"

/**
 * _isalpha - check for alphabetic charcter
 * @c: The character to bee checked
 * Return: for alphabetic 1 for other 0
 */
int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
