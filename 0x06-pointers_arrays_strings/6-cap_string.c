#include "main.h"
/**
  * cap_string  - capitalizes all words of a string
  * @s: it points to the string
  * Return: returns a pointer to a string
  */

char *cap_string(char *s)
{
	int i = 0, new = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
		s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
		s[i] == '{' || s[i] == '}')
		{
			new = 1;
		}

		else if (new == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			new = 0;
		}
		else
		{
			new = 0;
		}
		i++;
	}
	return (s);
}
