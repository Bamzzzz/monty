#include "monty.h"

/**
 * pop_error - print pop error messages
 * @line_number: Line number in script where error occured
 * Return: (EXIT_FAILURE) always.
 */
int pop_error(unsigned int line_number)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
return (EXIT_FAILURE);
}

/**
 * pint_error - print pint error messages
 * @line_number: line number
 * Return: (EXIT_FAILURE) always
 */
int pint_error(unsigned int line_number)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
return (EXIT_FAILURE);
}

/**
 * short_stack_error - print monty math function error messages
 * @line_number: line number
 * @op: operation
 * Return: (EXIT_FAILURE) always
 */
int short_stack_error(unsigned int line_number, char *op)
{
fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
return (EXIT_FAILURE);
}

/**
 * div_error - print division error messages for division by 0
 * @line_number: Line number
 * Return: (EXIT_FAILURE) always
 */
int div_error(unsigned int line_number)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
return (EXIT_FAILURE);
}

/**
 * pchar_error - print pchar error messages
 * @line_number: Line number
 * @message: error message to print
 * Return: (EXIT_FAILURE) always
 */
int pchar_error(unsigned int line_number, char *message)
{
fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
return (EXIT_FAILURE);
}

