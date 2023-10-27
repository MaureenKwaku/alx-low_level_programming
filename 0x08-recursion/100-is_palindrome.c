/**
 * length_recursion - return the length of a string
 * @s: parameter to be checked
 * Return: 1 or 0
**/

int length_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + length_recursion(s + 1));
}


/**
 * character_recursion - check the character recursively
 * @s: parameter to be checked
 * @a: parameter to be checked
 * @b: parameter to be checked
 * Return: 1 or 0
 * **/

int character_recursion(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
	{
		return (0);
	}
	else if (a >= b)
	{
		return (1);
	}
	return (character_recursion(s, a + 1, b - 1));
}



/**
 * is_palindrome - print a string palindrome
 * @s: parameter to be checked
 * Return: 1 or 0
 * **/

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (character_recursion(s, 0, length_recursion(s)));
}
