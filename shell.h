#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void free_token(char **tokens);
char *strcpy(char *dest, const char *src);
char **tokenizer(char *string, const char *delim);
void execve_funtion(char *argv[]);

#endif