#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#define PROMPT "$ "
#define pid_max 32768
#define DELIMITER "\n\t\r\a "
#define EXIT_FAILURE    1       /* Failing exit status.  */
#define EXIT_SUCCESS    0       /* Successful exit status.  */

extern char **environ;

int execve(const char *filename, char *const argv[], char *const envp[]);
void _putstring(char *str);
unsigned int _strlen(char *str);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strdup(char *src);
void shell_exit(char **argv, char *line);
char **tokenizer(char *line);
int execute_cmd(char **argv, char *line);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
int _print_env(void);
char *_getenv(char *name);
int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
int get_path(char **tokens);
char *build_path(char *token, char *value);
char *read_line(void);
int _atoi(char *s);
#endif /*SHELL_H*/
