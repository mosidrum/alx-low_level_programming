#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -> assign a random number to the variable n each time it is executed
*and print the last digit of the number stored in the variable n
return: 0 always
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0");
}
if (n < 6 && n != 0)
{
printf("lessthan 6 nd not 0");
}
return (0);
}
