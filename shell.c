#include "shell.h"

/**
 * @brief
 *
 *
 */

int main()

{
    char *string;
    size_t size = 10;

    bool thruty;
    char **stringptr;
    char **token;
    int i = 0;

    thruty = true;
    stringptr = &string;
    string = (char *)malloc(size);

    while (thruty)
    {
        i = 0;
        printf("cisfun$");
        getline(stringptr, &size, stdin);
        token = tokenizer(string, " ");
        while (token[i] != NULL)
        {
            printf("%s\n", token[i]);
            i++;  
        }
        free(token);
    }
    free(string);

    return (0);
}