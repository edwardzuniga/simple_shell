#include "shell.h"
/**
 * @length: check equals character
 * @str: string of chars
 * Return: to string
 */

char *length(char *str)
{
	int i;

	for (i = 0; str[i] != '='; i++)
		;
	return (str + i + 1);
}

/**
 * @_strcmp: Compara las dos cadenas
 *
 *
 */
int _strcmp(char *varname, char *dirname)
{
	int i;

	for (i = 0; dirname[i] != '\0'; i++)
	{
		if (dirname[i] != varname[i])
			return (0);
	}
	return (1);
}
/**
 * @brief
 *
 *
 */

char *_getenv(char **around, char *dirname)
{
	int a, b;
	char *varname, *final;

	for (b = 0; around[b]; b++)
	{
		varname = malloc(1024);

		for (a = 0; around[b][a] != '='; a++)
			varname[a] = around[b][a];

		if (_strcmp(varname, dirname))
		{
			final = length(around[b]);
			free(varname);
			return (final);

		}
		free(varname);
	}
	return (NULL);
}