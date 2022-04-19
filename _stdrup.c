#include "shell.h"

/**
 *_strlen - returns the length of a string
 *@str: is a character
 * Return: 0;
 */

unsigned int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return ((1) + _strlen(str + 1));
}
/**
 *_strdup - duplicate a string
 *@s: is a pointer
 *Return: pointer to array
 */

char *_strdup(char *string)
{
	char *new;
	int i;

	if (string == NULL)
		return (NULL);

	new = malloc(_strlen(string) + 1);

	if (new == NULL)
		return (NULL);

	i = 0;

	while (string[i] != '\0')
	{
		new[i] = string[i];
		i++;
	}

	new[i] = '\0';

	return (new);
}