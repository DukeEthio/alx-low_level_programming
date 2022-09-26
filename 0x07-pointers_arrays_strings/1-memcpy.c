#include "main.h"
/**
 * _memcpy - copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: A pointer to be the memory area to copy @src into.
 * @src: the source buffer to copy characters from.
 * @n: the number of bytes to copy from @src.
 *
 * Return: a pointer to the destination buffer @dest.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *d = dest;
	const unsigned char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];
	return (dest);
}
