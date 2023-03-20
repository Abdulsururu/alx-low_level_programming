#include <stdio.h>
/**
  *main - variables
  *Discription: "lowercase alphabets"
  *Return: always 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
