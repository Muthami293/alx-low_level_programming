#ifndef _MAIN_H_
#define _MAIN_H_


/**
* _putchar - Prints character and outputs to stdout
* @c: the character to output
*
* Return: 1 for success and -1 for err
*/

int _putchar(char c);

/**
* print_alphabet - Prints al alphabets in lowercase
* Return: void is returned
*/

void print_alphabet(void);

/**
  * print_alphabet_x10 - Prints all alphabets ten times
  * Return: void is returned
  */

void print_alphabet_x10(void);

/**
  * _isLower - check if the letters are in lowercase
  * @c: the character to check
  * Return: 1 if true and 0 if false
  */
int _islower(int c);

/**
  * _isalpha - check for alphabetic characters
  * @c: the character to check
  * Return: 1 if true 0 if false
  */
int _isalpha(int c);

/**
  * print_sign - Prints the sign of a number
  * @n: the number to check
  * Return: 1 if greater than 0 and 0 if zero and -1
  * if less zero
  */

int print_sign(int n);

/**
  * _abs - Print absolute value of an integer
  * @int: data type for parameter
  * Return: 0 for success
  */

int _abs(int);

/**
* print_last_digit - print the last digit
* @int: data type of parameter
* Return: value of last digit
*/

int print_last_digit(int);

/**
  * jack_bauer - print every minute of the day of Jack
  * Return: void
  */

void jack_bauer(void);

/**
  * times_table - print the multiplcation table
  * Return: void
  */
void times_table(void);

/**
  * add - adds two integers and returns the result
  * Return: result as integer
  */

int add(int, int);

/**
  * print_to_98 - print all natural numbers from n to 98
  * @n: integer descriptor
  * Return: no return - void
  */
void print_to_98(int n);

/**
  * print_times_table - print n times table starting with 0
  * @n: paramet descriptor
  * Return: void
  */
void print_times_table(int n);

/**
  * _isupper - Check uppercase
  * @c: integer to check
  * Return: 1 for success and 0 for no uppercase
  */

int _isupper(int c);

/**
  * _isdigit - Check if a character is a digit
  * @c: character to check
  * Return: 1 if true, 0 if not
  */
int _isdigit(int c);

/**
  * mul - Multiply the two integers
  * @a: first integer
  * @b: second integer
  * Return: result of tje multiplication
  */

int mul(int a, int b);

/**
  * print_numbers - Print numbers only from 0 to 9
  * Return: void
  */

void print_numbers(void);

/**
  * print_most_numbers - Print all numbers from 0 - 9 except 2 & 4
  * Return: void
  */

void print_most_numbers(void);

/**
  * more_numbers - Print all numbers from 0 - 14 ten times
  * Return: void
  */

void more_numbers(void);

/**
  * print_line - Print a straight line
  * @n: the integer to print
  * Return: void
  */

void print_line(int n);

/**
  * print_diagonal - Print diagonal line
  * @n: no of line length
  * Return: void
  */

void print_diagonal(int n);

/**
  * print_square - Print square
  * @size: size of square
  * Return: void
  */

void print_square(int size);

/**
  * print_triangle - Print triangle
  * @size: integer to determine size of triangle
  * Return: Void
  */
void print_triangle(int size);

/**
  * print_number - Prints an integer
  * @n: integer to print
  * Return: void
  */
void print_number(int n);

#endif
