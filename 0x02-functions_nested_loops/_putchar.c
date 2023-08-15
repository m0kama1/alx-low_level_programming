#include <unistd.h>

/**
* _putchar - writes the charactar c to stdout
* @c: The character to print
*
* Return: On success 1.
* on error, -1 is returned, and errno os not set appropriately.
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
