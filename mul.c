#include "monty.h"

/**
 * monty_mul - Multiply the second value from the top
 * @stack: a pointer
 * @line_number: current working line number
 * description: The result is stored in the second value node
 */
void monty_mul(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL || (*stack)->next->next == NULL)
{
set_op_tok_error(short_stack_error(line_number, "mul"));
return;
}
(*stack)->next->next->n *= (*stack)->next->n;
monty_pop(stack, line_number);
}
