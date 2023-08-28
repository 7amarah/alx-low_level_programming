#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes a character to stdout
 * @char: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char);


/**
 *print_alphabet - print the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void);


/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void);


/**
 * _islower - checks for lowercase character.
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a lower or uppercase, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints sign of a number
 * @n: number to check
 * Return: 1 and prints + if n is greater than zero;
 * 0 and prints 0 if n is zero;
 * -1 and prints - if n is less than zero.
 */
int print_sign(int n);

/**
 * _abs - computers the absolute value of an integer
 * @n: integer's absolute value to be computed
 * Return: absolute value
 */
int _abs(int);


/**
 * print_last_digit - prints the last digit of a number
 * @int: integer
 * Return: value of last digit
 */
int print_last_digit(int);


/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void);


/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void);


/**
 * add - adds two integers
 * @int: first integer
 * @int: second integer
 * Return: sum
 */
int add(int, int);


/**
 * print_to_98 - prints all natural numbers from n to 98, followed by  new line
 * @n: integer argument
 *
 * Description: Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 */
void print_to_98(int n);




/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: integer argument
 *
 * Return: 0 (Execution successful)
 */
void print_times_table(int n);

#endif
