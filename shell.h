#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/stat.h>

#define BUFFERSIZE 64

extern char **environ;

char *_strtok(char *arg, char *dlm);
int loop(void);
char **splitline(char *buffer);
int execute(char **args);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *readline(void);
void _printenv(void);
int checkexit(char *arg, char *n, char **args, int status);
int simplexit(char *arg, int status);
int checkspaces(char *line);
int _strlen(char *s);
void ctrlc(int sign);
int _putchar(char c);
void _puts(char *str);
void prompt(void);
int _strncmp(char *s1, char *s2, int len);
char *matchcommand(char *command);
char *_getenv(char *path);
char **splitpath(char *path);
char *_strcat(char *dest, char *src);
int _atoi(char *s);
ssize_t _getline(char **buffline, size_t *size, FILE *std);
void _free(char *arg, char **args);
#endif
