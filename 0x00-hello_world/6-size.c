#include<stdio.h>
/**
* Main - Entry point
*
* Description: '6-size.c'
*
* Return: Always 0 (success)
*/

int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));

return(0);
}
