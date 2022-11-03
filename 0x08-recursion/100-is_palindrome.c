#include "main.h"

/**
  * _strlen - get length of string
  * @s: string to check the length
  * Return: length
  */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen(s));
}

/**
  * cmp_start_end - compare the start of string and end
  * @start: starting index from the left
  * @end: starting from the right
  * Return: 1 if same, or 0 if not
  */

int cmp_start_end(char *start, char *end)
{
	/* if not divisble by 2 the end side number should */
	/* be greater than the start  number e.g rotor..   */
	/* start(index of t) should be great than end index */
	if (start >= end)
		return (1);
	if (*start == *end)
	{
		start++;
		end--;
		return (cmp_start_end(start, end));
	}
	return (0);
}
/**
  * is_palindrome - check if its palindrome
  * @s: the string to check
  * Return: 1 or 0 for failure
  */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (cmp_start_end(s, (s + len - 1)));
}
