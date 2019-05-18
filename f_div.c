#include "monty.h"
/**
 * f_div - a function that divides the top numbers
 * @stack: a pointer to the stack
 * @line_number: the number of lines
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *aux, *node;

	line_number = line_number;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL)
	{
		(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	}
	temp = *stack;
	if (temp != NULL)
	{
		aux = temp->next;
		node = temp;
		if (aux != NULL)
			aux->prev = NULL;
		free(node);
		*stack = aux;
	}
}