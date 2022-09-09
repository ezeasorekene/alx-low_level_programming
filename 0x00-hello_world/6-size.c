#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print size of variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;

printf("Size of a char: %ld bytes\n", sizeof(char));
printf("Size of an int: %ld bytes\n", sizeof(int));
printf("Size of a long int: %ld bytes\n", sizeof(long int));
printf("Size of a long long int: %ld byte\n", sizeof(long long int));
printf("Size of a float: %ld byte\n", sizeof(float));
return (0);
}
