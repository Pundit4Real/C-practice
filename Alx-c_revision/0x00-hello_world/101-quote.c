#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char str1[] = "and that piece of art is usefull\" -Dora Korpar, 2015-10-19\n";

		write(2, str1, 59);
			return (0);
}
