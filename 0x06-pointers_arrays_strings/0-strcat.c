#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 * null byte, to the end of the string pointed to by @dest.
 * @src: The source string to be appended to @dest.
 * @dest: A pointer to the string to be concatenated upon.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
