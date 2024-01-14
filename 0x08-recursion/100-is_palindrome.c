/**
  * is_palindrome - returns 1 if a string is palindrome and 0 ifnot
  * @s: pointer to the string
  * Return: rturns 0 or 1
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);
	len = end_string(s, 0);
	return (check_palindrome(s, 0, len - 1));
}
/**
  * end_string - returns the length of the string
  * @s: pointer to the string
  * @x: evaluates the length of the string
  * Return: length of the string
 */
int end_string(char *s, int x)
{
	if (*s == '\0')
		return (x);
	else
		return (end_string(s + 1, x + 1));
}
/**
  * check_palindrome - checks if a string is a palindrome
  * @s: pointer to the string
  * @y: used to access string values from the start
  * @x: used to access string values from the end
  * Return: returns 1 or 0
 */
int check_palindrome(char *s, int y, int x)
{
	if (s[y] == s[x] && y == x)
		return (1);
	else if (s[y] != s[x])
		return (0);
	else
		return (check_palindrome(s, y + 1, x - 1));
}
