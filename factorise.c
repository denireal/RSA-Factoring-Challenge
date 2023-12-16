#include "main.h"

/**
* factorise - Factorises a number and prints the result
* @num: The number to factorize
*/
void factorise(u_int32_t num)
{
u_int32_t i;

for (i = 2; i < num; i++)
{
if (num % i == 0)
{
printf("%" PRIu32 "=%" PRIu32 "*%" PRIu32 "\n", num, num / i, i);
break;
}
}
}
