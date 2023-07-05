#include "main.h"


/**
 * _strlen - returns the length of a string.
 * @s: The string
 *
 * Return: the length of a string.
 *
 */

int _strlen(char *s)
{

	return (*s ? 1 + _strlen(s + 1) : 0);

}

/**
 * checkPalindrome - returns 1 if a string is a palindrome and 0 if not.
 * @str: The string
 * @first: first character index
 * @last: last character index
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int checkPalindrome(char str[], int first, int last)
{
	if (first < last + 1)
	{
		first++;
		last--;
		return (checkPalindrome(str, first, last));
	}

	if (first == last)
	return (1);

	if (str[first] != str[last])
	return (0);

	return (1);
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: The string
 *
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{

	int length = _strlen(s);

	if (length == 0)
	return (1);
	else
	return (checkPalindrome(s, 0, length - 1));

}
