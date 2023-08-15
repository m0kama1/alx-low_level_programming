#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be cheked
 * Return: 1 for alphabtic character or 0 for anthing else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
