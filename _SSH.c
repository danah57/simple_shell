#include "MyShell.h"

/**
 * interactive - returns 1 if the shell is running in interactive mode
 * @info: pointer to a struct
 *
 * Return: 1 if interactive mode, 0 otherwise
*/
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if a character is a delimiter
 * @ch: the character to examine
 * @del: the delimiter string
 *
 * Return: 1 if true, 0 if false
 */
int is_delim(char ch, char *del)
{
	while (*del)
		if (*del++ == ch)
			return (1);
	return (0);
}

/**
 * _isalphabetic - checks if a character is an alphabetic character
 * @ch: The input character
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalphabetic(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - changes a string to an integer
 * @str: the string to be converted
 *
 * Return: 0 if no numbers in the string, the converted number otherwise
*/

int _atoi(char *str)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; str[i] != '\0' && flag != 2; i++)
	{
		if (str[i] == '-')
			sign *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (str[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}


