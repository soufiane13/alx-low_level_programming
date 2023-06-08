#include "main.h"
#include <stdio.h>
/**
 * l_index - return the last index of a string
 * @s: pointer to a string
 * Return: int
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int m);
int l_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += l_index(s + 1) + 1;
	return (n);
}
/**
 * check - check for the palindrom
 * @s: pointer to string
 * @start: integer
 * @end: integer
 * @m:integer
 * Return: 0 or 1
 */
int check(char *s, int start, int end, int m)
{
	if ((start == end && m != 0) || (start == end + 1 && m == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, m));
}
/**
 * is_planderome -checked if a string is palindrom
 * @s: poinetr to string
 * Return: 0 or 1
 */
int is_planderome(char *s)
{
	int end = l_index(s);

	return (check(s, 0, end - 1, end % 2));
}
