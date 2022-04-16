#include "shell.h"

/**
 * @brief
 *
 *
 */

int main(void)
{
    char *string;
    size_t size = 10;

    bool thruty;
    char **stringptr;
    char *token[2];

    thruty = true;
    stringptr = &string;
    string = (char *)malloc(size);

    while (thruty)
    {
        printf("cisfun$");
        getline(stringptr, &size, stdin);
        token = tokenizer(string, " ");
        execve_funtion(token);
        free(token);
    }
    free(string);

    return (0);
}
