#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - checks for uppercase character
 * Return: 0
 */
int _isupper(int c);


/**
 * _isdigit - checks for a digit ( 0 through 9)
 * Return: 1 if input is a digit; 0 otherwise
 */
int _isdigit(int c);


/**
 * mul - multiplies two integers.
 * Return: 0
 */
int mul(int a, int b);


/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: 0
 */
void print_numbers(void);


/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line.
 * Return: 0
 */
void print_most_numbers(void);


/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 * Return: 0
 */
void more_numbers(void);


/**
 * print_line - draws a straight line in the terminal.
 * Return: 0
 */
void print_line(int n);


/**
 * print_diagonal - draws a diagonal line on the terminal.
 * Return: 0
 */
void print_diagonal(int n);


/**
 * print_square - prints a square, followed by a new line.
 * Return: 0
 */
void print_square(int size);


/**
 * print_triangle - prints a triangle, followed by a new line.
 * Return: 0
 */
void print_triangle(int size);


/**
 * _putchar - writes a character to stdout
 * @char: the character to print
 * Return: 1 on success; -1 if error and error is set appropriately
 */
int _putchar(char);

#endif


