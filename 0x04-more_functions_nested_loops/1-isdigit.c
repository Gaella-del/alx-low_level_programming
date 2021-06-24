/*
* File: 1-isdigit.c
* Auth: Mulisa Gaella
*/

#include "holberton.h"

/**
* _isdigit - Checks for a digit (0-9).
* @d: The number to be checked.
*
* Return: 1 if the number is a digit, 0 otherwise.
*/
int _isdigit(int d)
{
if (d >= '0' && d <= '9')
return (1);

else
return (0);
}