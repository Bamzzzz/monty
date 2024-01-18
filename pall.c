#include "monty.h"
/**
 * monty_pall - prints the values of a stack
 * @stack: stack
 * @line_number: current working line number
 */
void monty_pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = (*stack)->next;

while (tmp)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
(void)line_number;
}
