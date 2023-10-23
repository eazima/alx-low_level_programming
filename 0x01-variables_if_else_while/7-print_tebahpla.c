#include <stdlib.h>

/**
 * main - PrintS the lowercase alphabets in reverse
 *
 * Return: Alwaays 0(sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)
	putchar(letter);
	putchar('\n');
	return (0);
}
