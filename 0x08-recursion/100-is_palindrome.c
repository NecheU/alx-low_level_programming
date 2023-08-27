#include "main.h"
/**
* is_palindrome - A funtion that returns true if
* the given string is a palindrome
* @s: string to be examined
* Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
int h = 0;
int length;

length = find_strlen(s);

if (!(*s))
return (1);
return (check_palindrome(s, length, h));
}

/**
* find_strlen - A function that returns the length of a string
* @s: the string to be examined
*
* Return: The length of the string
*/

int find_strlen(char *s)
{
int length = 0;

if (*(s + length))
{
length++;
length += find_strlen(s + length);
}
return (length);
}

/**
* check_palindrome - Checks if a string is a palindrome
* @s: the string to be examined
* @length: Length of a string
* @b: the index of the string to be checked
*
* Return: 1 if the string is a palindrome or 0 if not
*/

int check_palindrome(char *s, int length, int b)
{
if (s[b] == s[length / 2])
return (1);

if (s[b] == s[length - b - 1])
return (check_palindrome(s, length, b + 1));
return (0);
}
