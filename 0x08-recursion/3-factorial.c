#include "main.h"

/**
 *factorial - a function that returns the factorial of a given number.
 *@n: given number
 *Return: Always 0 (Success)
 */

int factorial(int n){

	int res = 1
	if (n == 1){
		return 1;
	}
	else{
		return n* factorial (n - 1);
	}

int main(void){

	int num = 1;
	int num2 = 5;
	int num3 = 10;
	int num4 = -1024;

	putchar("%d/n", factorial(num1));
	putchar("%d/n", factorial(num2));
	putchar("%d/n", factorial(num3));
	putchar("%d\n", factorial(num4));

	return(0);
}
