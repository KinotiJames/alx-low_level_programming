#include <stdio.h>
/**
 * main - this is main function
 *
 * Return: 0 always
 */

int main(void)
{ 
	printf("size of char: %lu bytes(s)", sizeof(char));
	printf("size of int: %lu bytes(s)", sizeof(int));
	printf("size of long int: %lu bytes(s)", sizeof(long int));
	printf("size of long long int: %lu bytes(s)", sizeof(long long int));
	printf("size of float: %lu bytes(s)", sizeof(float));
	return (0);
}
