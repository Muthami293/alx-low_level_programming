#ifndef _MAIN_H_
#define _MAIN_H_

/**
  * _putchar - print character
  */
int _putchar(char c);


/**
  * _puts_recursion - Prints a string
  */

void _puts_recursion(char *s);

/**
  * _print_rev_recursion - prints string in reverse
  */
void _print_rev_recursion(char *s);

/**
  * _strlen_recursion - prints length of string
  */
int _strlen_recursion(char *s);

/**
  * factorial - returns factorial of a given int
  */
int factorial(int n);

/**
  * _pow_recursion - return x raised to power of y
  */
int _pow_recursion(int x, int y);

/**
  * _sqrt_recursion - return natural square root of number
  */
int _sqrt_recursion(int n);

/**
  * is_prime_number - check if prime number
  */
int is_prime_number(int n);

int cmp_start_end(char *start, char *end);
int _strlen(char *s);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int is_matching(char *s1, char *s2, char *afterwild);



#endif
