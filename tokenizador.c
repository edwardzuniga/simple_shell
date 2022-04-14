#include "shell.h"

/**
 * @brief
 *
 *
 */

search tokenizer(char *string, const char *delim)
{
    char *token;
    token = strtok(string, " ");
    search command;
    strcpy(command.mainComand, token); 

    token = strtok(NULL, " ");
    printf("llegue");

    strcpy(command.secondCommand, token);
    printf("llegue");
    return (command);
}