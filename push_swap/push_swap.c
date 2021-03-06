/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:58:05 by dilopez-          #+#    #+#             */
/*   Updated: 2022/05/29 17:04:28 by dilopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	ft_push_swap(t_list *stack_a, t_list *stack_b, char **argv)
{
	stack_a = ft_get_int_list(argv);
	if (ft_issorted(&stack_a) == 1)
		ft_exit_program(stack_a, 0, 0);
	ft_print_result(stack_a, stack_b);
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = 0;
	stack_b = 0;
	if (argc == 1)
		return (0);
	if (argc > 1)
		ft_push_swap(stack_a, stack_b, argv + 1);
	return (0);
}

void	ft_print_result(t_list *stack_a, t_list *stack_b)
{
	t_list	*aux;

	while (stack_a != 0)
	{
		printf("%d ", stack_a->number);
		aux = stack_a;
		stack_a = stack_a->next;
		free(aux);
	}
	printf("\n");
	while (stack_b != 0)
	{
		printf("%d ", stack_b->number);
		aux = stack_b;
		stack_b = stack_b->next;
		free(aux);
	}
	printf("\n");
	ft_exit_program(stack_a, stack_b, 0);
}
