#include "main.h"
/**
 * main-Entry point
 *
 * Description: It prints the alphabet in lowercase followed by a new line.
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}