<<<<<<< HEAD
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Get a random number, check its last digit, and print the result
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int last;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last = n % 10;

    if (last > 5)
        printf("Last digit of %i is %i and is greater than 5\n", n, last);
    else if (last == 0)
        printf("Last digit of %i is %i and is 0\n", n, last);
    else if (last < 6)
        printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);

    return (0);
}
=======
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *  * main - main block
 *   * Description: Get a number and check its last digit, compare it with 5
 *    * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
>>>>>>> c319782d1f41cdd24df8610d5fc3354aa59890fb
