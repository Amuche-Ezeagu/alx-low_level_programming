<<<<<<< HEAD
=======
#include <stlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0
 */
int main(void)
{
>>>>>>> 4d8a19d4643701bfc89e3dfef92a5b00c91c114d
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

<<<<<<< HEAD
if (n == 0)
{
	printf("%i is zero\n", n);
}

else if (n < 0)
{
	printf("%i is negative\n", n);
}

else
{
	printf("%i is positive\n", n);
}

return (0);

=======
if (n > 1)
	printf("%i is positive\n", n);
else if (n < 0)
	printf("%i is negative\n", n);
else

	print("%i is zero\n", n);

return (0);
>>>>>>> 4d8a19d4643701bfc89e3dfef92a5b00c91c114d
}
