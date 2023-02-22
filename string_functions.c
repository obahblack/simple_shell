#include "main.h"

/**
 * _strlen - find length of string
 * @s: input string
 * Return: length integer
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy strings
 * @dest: destnation output
 * @src: src input
 * Return: destination of copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}

/**
 * _strcat - concatanate two strings
 * @dest: destination output
 * @src: src input
 * Return: concatonated strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

