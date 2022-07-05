#include<stdio.h>
#include<unistd.h>
/**
 *main-Entry point
 *
 *Return: 0
 *
 */
int main(void)
{
char word[8] = "_putchar";
int i;
for (i = 0; i < 9; i++)
putchar(word[i]);
putchar('\n');
return (0);
}

