#include "shell.h"

/**
 * @brief
 *
 *
 */

char **find_path(char **around)

{
	char *get_path, **tokens, *delim;

	delim = ":";
	get_path = _getenv(around, "PATH");
	tokens = tokenizer(get_path, delim);
	return (tokens);
}