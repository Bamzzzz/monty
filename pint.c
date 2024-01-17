#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack, followed by a new line
 * @head: stack head in line
 * @counter: used for line number
 * Return: return null
 */
void f_pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
free(bus.content);
free_stack(*head);
fclose(bus.file);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
