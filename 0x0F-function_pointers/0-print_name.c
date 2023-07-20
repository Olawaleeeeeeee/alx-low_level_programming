#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print the name using pointer to the  function
 * @name: string that are to be added
 * @f: pointer to function
 * Return: nothing at all
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
