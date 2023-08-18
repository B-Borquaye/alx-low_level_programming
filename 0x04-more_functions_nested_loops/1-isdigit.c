#include "main.h"

/**
 * 
 * Return: 1 if it is a number (0 to 9) and  0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
