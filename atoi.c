#include "monty.h"
/**
 * _atoi - convert the string in number.
 *@s: string to convert.
 *Return: the numerical value.
 */
int _atoi(char *s)
{
	int res = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}