#include "main.h"

/**
 * _strlen - returns the length of a string
 * @strr: the string to get the length of
 * Return: length of @str
 */

int _strlen(char *str)
{
size_t length = 0;

while (*str++)
length++;
return (length);
}
