#include "shel.h"
/**
 * count_input - counts the words typed by the user
 * @str: the string that contains of the words
 * Return: number of words found in the string
 */
int count_input(char *str)
{
	int i = 0, cw = 0, state = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			cw++;
		}
		i++;
	}
	return (cw);
}

/**
 * count_delims - count delimiters in a string
 * @str: string that contains the delimiters
 * @del: delimiters to will find in the string
 * Return: number of delimiters in the string
 */
int count_delims(char *str, char *Del)
{
	int i = 0, j = 0, cw = 0;

	while (del[i])
	{
		j = 0;
		while (str[j])
		{
		if (str[j] == del[i])
			cw++;
		j++;
		}
	i++;
	}
	return (cw);
}
