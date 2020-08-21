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
#define BUFFERSIZE 1024
extern char **environ;
int loop(char *name);
char *readline(int status);
char **splitline(char *buffer);
int execute(char **args, int counter, char *name);
char *_getenv(char *path);
char **splitpath(char *path);
char *matchcommand(char *command);
char *_strtok(char *arg, char *dlm);
int _strncmp(char *s1, char *s2, int len);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
void prompt(void);
int _putchar(char c);
void _puts(char *str);
void _printenv(void);
void print_number(int n);
void errorsys(char *argv, int count, char *error, char *name);
int checkexit(char *arg, char *n, char **args, int status);
int simplexit(char *arg, int status);
int checkenv(char *arg);
char *checkspaces(char *line);
void ctrlc(int sign);
int _atoi(char *s);
ssize_t _getline(char **buffline, size_t *size, FILE *std);
void _free(char **args);
#endif
