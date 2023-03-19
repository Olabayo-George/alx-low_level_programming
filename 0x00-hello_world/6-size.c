#include <stdio.h>
/**
 * main -  a C program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	int size_of_char = sizeof(char);
       	int size_of_int = sizeof(int);
       	int size_of_long = sizeof(long);
	int size_of_long_int = sizeof(long int);
	int size_of_long_long_int = sizeof(long long int);
	int size_of_float = sizeof(float);
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
