#inlude "main.h"

/**
 *main - Entry point
 *
 *Description: program that prints the alphabets
 *
 *Return: Always return (0)
 */
void print_alphabet(void)
{
	int aj;

	for(aj = 'a'; aj <= 'z'; aj++)
	{
		_putchar(aj);
	}
	
	_putchar('\n');

}
