#include "main.h"
/**
  * is_matching - check if the two strings match after wildcard
  * @s1: first string
  * @s2: second string
  * @afterwild: position after wildcard on the right
  * Return: 1 if true, 0 if false
  */

int is_matching(char *s1, char *s2, char *afterwild)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (is_matching(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (is_matching(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (is_matching(s1 + 1, s2 + 1, afterwild));
	else
		return (is_matching(s1 + 1, afterwild, afterwild));
}
/**
  * wildcmp - compare two strings that are identical
  * @s1: first string
  * @s2: seconf string
  *Return: 1 or 0 if false
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (is_matching(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
