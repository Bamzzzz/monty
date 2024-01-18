#include "monty.h"

/**
 * monty_pstr - prints the string
 * @stack: stack
 * @line_number: current working line number
 */
void monty_pstr(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = (*stack)->next;

while (tmp && tmp->n != 0 && (tmp->n > 0 && tmp->n <= 127))
{
printf("%c", tmp->n);
tmp = tmp->next;
}
printf("\n");

(void)line_number;
}
