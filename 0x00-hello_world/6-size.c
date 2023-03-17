#include <stdio.h>
/**
 * main - a C program that prints the size of various types of computers it is compiled and run on.
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %lu byte(s)\n", (unassigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unassigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unassigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unassigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unassigned long)sizeof(e));
return (0);	
