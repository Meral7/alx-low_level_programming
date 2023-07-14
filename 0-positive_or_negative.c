#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 0)
		printf("%d is positive\n", x);
	else if (x < 0)
		printf("%d is negative\n", x);
	else
		printf("%d is zero\n", x);
	return (0);
}
