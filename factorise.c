#include "main.h"

/**
* factorise - Factorises a number and prints the result
* @num: The number to factorize
*/
void factorise(int num)
{
int i;

for (i = 2; i <= sqrt(num); i++)
{
if (num % i == 0)
{
printf("%d=%d*%d\n", num, i, num / i);
return;
}
}
printf("%d=%d*%d\n", num, num, 1);
}
