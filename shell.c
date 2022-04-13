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
    string = (char *)malloc(size);
    size_t characters;
    bool thruty;
    thruty = true;

    char **stringptr;
    stringptr = &string;

    while (thruty)
    {
        characters = getline(stringptr, &size, stdin);
        printf("%s%zu\n", string, characters);
    }

    free(string);
    return (0);
}