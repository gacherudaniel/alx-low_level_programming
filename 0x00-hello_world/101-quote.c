#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int len = sizeof(str) - 1;

	write(STDERR_FILENO, str, len);
	return (1);
}

