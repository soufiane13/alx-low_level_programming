#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory area pointed
 *           to by src into that pointed .
 * @dest: A pointer to the memory area to copy src .
 * @src: The source buffer to copy characters .
 * @n: The number of bytes to copy from src.
 *
 * Return: A pointer to the destination buffer .
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; ix++)
		destination[i] = source[i];

	return (dest);
}
