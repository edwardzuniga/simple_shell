#include "shell.h"

/**
 * @brief
 *
 *
 */

char **tokenizer(char *string, const char *delim)
{
    char *token;
    char *tokenOne[20];
    int i = 1;


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
