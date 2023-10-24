#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search within.
 * @accept: The characters to match in s.
 *
 * Return: The number of bytes in s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, value;

value = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
value++;
break;
}
}
}
return (value);
}
