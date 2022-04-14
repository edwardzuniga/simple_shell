#include "shell.h"

/**
 * @brief
 *
 *
 */

int main()

{
    char *string;
    size_t size = 200;
    string = (char *)malloc(size);
    size_t characters;
    bool thruty;
    thruty = true;
    char *token;

    char **stringptr;
    stringptr = &string;
    char *commands;
    int i;

    i = 1;
    while (thruty)
    {
        characters = getline(stringptr, &size, stdin);
        
        token = strtok(string, " ");

        stringptr[0] = token;

         /* walk through other tokens */
        while( token != NULL ) {
            printf( " %s %d \n", token, i );
            token = strtok(NULL, " ");
            stringptr[i] = token;
            i= i+1;
        }



        printf("%s %s este imprime las dos strings juntas\n", stringptr[0], stringptr[1]);
    }
    free(string);

    return (0);
}