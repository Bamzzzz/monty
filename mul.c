#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack
 * @head: stack head
 * @counter: line number in stack
 * Return: return null
 */
void f_mul(stack_t **head, unsigned int counter)
{
int len = 0, aux;
stack_t *h;

h = *head;
while (h)
{
len++;
h = h->next;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
free_stack(*head);
fclose(bus.file);
free(bus.content);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->next->n * h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
