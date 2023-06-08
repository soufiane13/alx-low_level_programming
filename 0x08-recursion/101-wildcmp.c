#include "main.h"
/**
 * move_star -iterates past
 * @s2: pointer to char
 * Return: pointer to char
 */
char *move_star(char *s2)
{
	if (*s2 == '*')
		return (move_star(s2 + 1));
	else
		return (s2);
}
/**
 * inception - function
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: 1 or 0
 */
int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inception(s1 + 1, s2);
	return (r);
}
/**
 * wildcmp -compare two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*move_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move _star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += inception(s1, s2);
		return (!!r);
	}
	return (0);
}
