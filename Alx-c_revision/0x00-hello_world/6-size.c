#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char character;
	int integer;
	int long alongint;
	int long long alonglong;
	float afloat;

printf("size of char %lu""\n", sizeof(character));
printf("size of int %lu""\n", sizeof(integer));
printf("size of int long %lu""\n", sizeof(alongint));
printf("size of int long long %lu""\n", sizeof(alonglong));
printf("size of float %lu", sizeof(afloat));

return (0);
}
