#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack
 * @head: stack head
 * @counter: line number in stack
 * Return: return null
 */
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
