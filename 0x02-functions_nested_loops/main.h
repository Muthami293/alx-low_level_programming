#ifndef _MAIN_H_
#define _MAIN_H_


/**
 * _putchar - prints character and outputs to stdout
 * @c: the character to output
 *
 * Return: 1 for success and -1 for err
 */

int _putchar(char c);

/**
 * print_alphabet- Prints al alphabets in lowercase
 * Return: void is returned
 */

void print_alpabet(void);

/**
 * print_alphabet_x10 - Prints all alphabets ten times
 * Return: void is returned
 */

void print_alphabet_x10(void);

/**
 * _islower - check if the letters are in lwercase
 * @c: the character to check
 * Return: 1 if tre and 0 if false
 */
int _islower(int c);

/**
 * _isalpha - check for alphabetic characters
 * @c: the character to check
 * Return: 1 if true 0 is false
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 * Return: 1 if greater than 0 and 0 if zero and -1
 * if less zero
 */
int print_sign(int n);

/**
 * _abs - print absolute value of an integer
 * @int: data type for parameter
 * Return: 0 for success
 */
int _abs(int);

/**
 * print_last_digit - print the lasy digit
 * @int: data type of parameter
 * Return: value of last dgit
 */
int print_last_digit(int);

/**
 * jack_bauer - print every minute of the day of jack
 * Return: void
 */
void jack_bauer(void);

/**
 * times_table - print the multiplication table
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
 * @n: parameter descriptor
 * Return: void
 */
void print_times_table(int n);




#endif
