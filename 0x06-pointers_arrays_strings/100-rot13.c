#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string .
 * Return: encoded string.
 */

char *rot13(char *s)
{
	int i;

	char rot13[] = "hsdsdchsacsackscKKDVFDVKJVDKVKNJDVFLKVHLVNFD"
	char ROT13[] = "ckjndckjdnjdvbkjfdvjKJDKDKJSDSJVDKLSDLKMLVLK"
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
