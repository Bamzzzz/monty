#include "monty.h"

/**
 * monty_pchar - prints the character in the top value
 * @stack: stack_t
 * @line_number: current working line number
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL)
{
set_op_tok_error(pchar_error(line_number, "stack empty"));
return;
}
if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
{
set_op_tok_error(pchar_error(line_number, "value out of range"));
return;
}
printf("%c\n", (*stack)->next->n);
}
