#include "monty.h"

/**
 * f_pop - prints the top values in stack
 * @head: stack head
 * @counter: find the nu ber in stack line
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
free(bus.content);
free_stack(*head);
fclose(bus.file);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}
