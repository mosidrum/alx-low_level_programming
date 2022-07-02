#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -> This program will assign a random number to
*the variable n each time it is executed.
<<<<<<< HEAD
*return : always 0
=======
*
*return :always 0
>>>>>>> bbc06110f553ff2772faf1dbdd9a0e96f0d3eef2
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
{    
	printf("%d is negative\n", n);
}
	return (0);
}
