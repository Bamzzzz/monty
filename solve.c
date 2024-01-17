#include "monty.h"

/**
 * get_op_func - an opcode with its corresponding function.
 * @opcode: opcode to match.
 * Return: A pointer to the corresponding function.
 */

void (*get_op_func(char *opcode))(stack_t**, unsigned int)
{
instruction_t op_func[] = {
{"pall", f_pall},
{"pint", f_pint},
{"pop", f_pop},
{"swap", f_swap},
{"add", f_add},
{"nop", f_nop},
{"sub", f_sub},
{"div", f_div},
{"mul", f_mul},
{"mod", f_mod},
{"pchar", f_pchar},
{"pstr", f_pstr},
{"rotl", f_rotl},
{"rotr", f_rotr},
{"stack", f_stack},
{"queue", f_queue},
{"push", f_push},
{NULL, NULL}
};
int i;

for (i = 0; op_func[i].opcode; i++)
{
if (strcmp(opcode, op_func[i].opcode) == 0)
return (op_func[i].f);
}
return (NULL);
}
