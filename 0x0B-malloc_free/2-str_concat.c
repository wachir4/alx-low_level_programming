#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is
 * a duplicate of the string str
 * @str: string to be copied
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
int *copy;
char count = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
count++;
copy = malloc(sizeof(char) * count + 1);
if (copt == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
copy[i] = str[i];
return (copy);
}
