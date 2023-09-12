#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: The character to be checked
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 for lowercase or 0 for anything else
 */

int _islower(int c)
{
	
	if(c >= 97 && c <= 122)
	{
	return (1); 
       	}
	return (0);
}
