#include "monty.h"
/**
 * monty_queue - converts a stack to a queue
 * @stack: stack
 * @line_number: current working line number
 */
void monty_queue(stack_t **stack, unsigned int line_number)
{
(*stack)->n = QUEUE;
(void)line_number;
}
