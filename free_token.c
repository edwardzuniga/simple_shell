#include "shell.h"

/**
 * @brief 
 * 
 * 
 */

void free_token(char **tokens)
{
    int i = 0;

    for (i = 0; tokens[i] != NULL; i++)
        free(tokens[i]);
        free(tokens);   
}