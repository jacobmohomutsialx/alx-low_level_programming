/**
 * swap_int - swaps values of two integers
 * @a: integer
 * @b: integer
 * Return: Always a and b
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
