#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers given
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers given
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers given
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers in the list
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the remainder of the division of two numbers should be returned.
 * @a: The first number a
 * @b: The second number b
 *
 * Return: The remainder when  a by b is divided
 */
int op_mod(int a, int b)
{
	return (a % b);
}

