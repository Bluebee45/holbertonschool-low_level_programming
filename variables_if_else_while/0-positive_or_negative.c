#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ( n > 0 )
printf ("if the number is greater than zero, is positive : %d\n", n);
if ( n == 0 )
printf ("if the number is 0, is zero : %d\n", n);
else ( n < 0 )
printf ("if the number is less than 0: is negative : %d\n", n);
return (0);
}
