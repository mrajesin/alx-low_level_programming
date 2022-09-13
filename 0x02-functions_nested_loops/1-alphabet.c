#include "main.h"

/**
 *main - Entry point
 *
 *Description: print alphabets
 *
 *Return: Always return 0 (Success)
 */
void print_alphabet(void)
{
	int aj;

	for (aj = 'a'; aj <= 'z'; aj++)
	{
		_putchar(aj);
	}
	_putchar('\n');

}
