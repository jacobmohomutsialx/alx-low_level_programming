#include <stdio.h>

/**
 * main - Fizz Buzz test
 * The code prints numbers 1 to 100
 * for multiples of 3 it prints Fizz
 * for multiples of 5 it prints Buzz
 * for multiples of 3 and 5, it prints FizzBuzz
 * Return: 0
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
char x = n % 3;
char z = n % 5;

if (x == 0 && z != 0)
{
printf("Fizz");
}
else if (z == 0 && x != 0)
{
printf("Buzz");
}
else if (z == 0 && x == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", n);
}
if (n < 100)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
