#include "shell.h"

/**
 * @brief
 *
 *
 */

char **tokenizer(char *string, const char *delim)
{
    char *token;
    char **tokenOne;
    int i = 1;

    tokenOne = (char **)malloc(100);

    token = strtok(string, delim);
    tokenOne[0] = token;
    while (token != NULL)
    {
        token = strtok(NULL, delim);
        tokenOne[i] = token;
        i++;
    }
    return (tokenOne);
} 

