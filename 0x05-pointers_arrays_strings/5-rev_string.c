#include "main.h"

/**
 * rev_string - function with one argument
 * @s: char type argument
 *
 * Description: reversing a string
 * Return: na
 */
void rev_string(char *s)
{
	int i, k, swp, length;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	length = i;
	i--;
	while (k < length / 2)
	{
		swp = s[k];
		s[k] = s[i];
		s[i] = swp;
		i--;
		k++;
	}
}
